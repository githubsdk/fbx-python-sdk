import os, platform, re
from sipbuild import Project, UserException

class fbx_moduleProject(Project):
    includePath = ""
    FBXSDK_ROOT = ""
    def get_include_path(self):
        # Use any user supplied include directory.
        if self.includePath == "":
            if not 'FBXSDK_ROOT' in os.environ:
                raise UserException("Environment variable FBXSDK_ROOT not specified")
            
            self.FBXSDK_ROOT = os.environ['FBXSDK_ROOT']
            self.includePath = os.path.join(self.FBXSDK_ROOT,'include')
            self.includePath = self.includePath.replace('"', '')
        return self.includePath

    def get_metadata_overrides(self):
        # Get the fib metadata object.
        try:
            # Open fbxsdk_version.h to parser version
            with open(os.path.join(self.get_include_path(),'fbxsdk','fbxsdk_version.h')) as fh:
                fstring = fh.readlines()
            
            matched = re.findall("#define FBXSDK_VERSION_([A-Z]+)[ ]+([0-9]+)", str(fstring))

            if(len(matched)<3):
                raise UserException("Unable to parse the fbx version")
        except:
            raise UserException("Unable to parse the fbx version")

        global FBXSDK_VERSION_STRING
        FBXSDK_VERSION_STRING = matched[0][1]+'.'+matched[1][1]+'.'+matched[2][1]
        print ("Fbx version: %s" % FBXSDK_VERSION_STRING)

        dict = {}
        dict['version'] = FBXSDK_VERSION_STRING
        return dict

    def update(self, tool):
        """ Update the project configuration. """

        # Get the fib bindings object.
        fbx_bindings = self.bindings['fbx_module']
        fbx_bindings.include_dirs += [self.get_include_path()]

        # Use any user supplied library directory.
        if platform.system() == 'Windows' or platform.system() == 'Microsoft':
            if not 'FBXSDK_COMPILER' in os.environ:
                raise UserException("Environment variable FBXSDK_COMPILER not specified")
            compiler = os.environ['FBXSDK_COMPILER']
            fbx_bindings.libraries += ["libfbxsdk-md", "zlib-md", "libxml2-md", "Advapi32", "Wininet"]
            path = os.path.join(self.FBXSDK_ROOT, 'lib', compiler, 'x64', 'release')
        else:
            fbx_bindings.libraries += ["z", "xml2"]
            if platform.system()=="Darwin":
                fbx_bindings.libraries += ["fbxsdk", "iconv"]
                path = os.path.join(self.FBXSDK_ROOT, 'lib', 'clang', 'x64', 'release')
            else:
                path = os.path.join(self.FBXSDK_ROOT, 'lib', 'gcc', 'x64', 'release')
                fbx_bindings.libraries += [":libfbxsdk.a"]

        path = path.replace('"', '')
        fbx_bindings.library_dirs += [path]
