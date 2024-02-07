import os, sys, shutil, time
import platform, glob
import FbxUtils

WINDOWS_PLATFORM = (platform.system() == 'Windows' or platform.system() == "Microsoft")

rootPath        = os.path.dirname(os.path.abspath(sys.argv[0]))
buildPath       = os.path.join(rootPath, 'build')
distribPath     = os.path.join(buildPath, "Distrib", "fbxpythonsdk")
cmdLineDescr    = "PythonBindings.py"
pythonExecutable = sys.executable

def PrintError(txt):
    print ("\n================================================================================================\n")
    FbxUtils.Log(2, "ERROR: " + txt)
    print ("\n================================================================================================\n")
    exit(1)

    
def log(txt):
    msg = "=> " + txt + "\n"
    FbxUtils.Log(1, msg)

def install_SIP():
    log("")
    log("-=[ Installing SIP ]=-")
    log("")

    command = pythonExecutable + ' -m pip install --force-reinstall -v "sip==6.6.2"'

    log("%s" % command)
    os.system(command)

def generate_wheel(python_dir):
    log("")
    log("-=[ Generating wheel ]=-")
    log("")

    os.chdir(python_dir)
    log("%s" % python_dir)
    command = pythonExecutable + " -m sipbuild.tools.wheel"

    log("%s" % command)
    os.system(command)
    wheelFileName = glob.glob(os.path.join(python_dir,'*.whl'))
    return wheelFileName[0]

def install_wheel(python_dir):
    log("")
    log("-=[ Install wheel ]=-")
    log("")

    os.chdir(python_dir)
    log("%s" % python_dir)
    wheelFileName = glob.glob(os.path.join(python_dir,'*.whl'))

    command = pythonExecutable + " -m pip install " + wheelFileName[0]

    log("%s" % command)
    os.system(command)

def test_python_fbx_examples(fbx_wrapper_dir, build_dir, sdk_lib_dir):
    log("")
    log("-=[ Testing the samples ]=-")
    log("")

    src_samples_dir = os.path.join(fbx_wrapper_dir, 'samples')
    dst_samples_dir = os.path.join(build_dir, 'samples')
    try:
        FbxUtils.DirCopy(src_samples_dir, dst_samples_dir)
    except:
        PrintError("Failed to copy samples directories")
        exit(1)
    
    example_dirs = (
        os.path.join(dst_samples_dir, 'Audio'),
        os.path.join(dst_samples_dir, 'ExportScene01'),
        os.path.join(dst_samples_dir, 'ExportScene02'),
        os.path.join(dst_samples_dir, 'ExportScene03'),
        os.path.join(dst_samples_dir, 'ExportScene04'),
        os.path.join(dst_samples_dir, 'Layers'),
        os.path.join(dst_samples_dir, 'SplitMeshPerMaterial'),
    )
    example_scripts = (
        'Audio.py',
        'ExportScene01.py', 
        'ExportScene02.py', 
        'ExportScene03.py',
        'ExportScene04.py', 
        'Layers.py', 
        'SplitMeshPerMaterial.py multiplematerials.FBX',        
    )

    os.environ['PYTHONPATH'] = build_dir
    for index in range(len(example_dirs)):
        os.chdir(example_dirs[index])
        command = " ".join(['"' + pythonExecutable + '"', example_scripts[index]])
        log("  RUN COMMAND       : %s" % command)
        result = os.system(command)
    
    os.chdir(os.path.join(dst_samples_dir, 'ImportScene'))
    files = (
        '../Audio/Audio.fbx',
        '../ExportScene01/ExportScene01.fbx',
        '../ExportScene02/ExportScene02.fbx',
        '../ExportScene03/ExportScene03.fbx',
        '../ExportScene04/ExportScene04.fbx',
        '../Layers/Layers.fbx'
    )

    dump_output = '' if WINDOWS_PLATFORM else '> /dev/null'
    for index in range(len(files)):
        command = " ".join(['"' + pythonExecutable + '"', 'ImportScene.py', files[index], dump_output])
        log("  RUN COMMAND       : %s" % command)
        result = os.system(command)


def generate_python_fbx_documentation(python_dir, api_doc_dir):
    if WINDOWS_PLATFORM:
        # documentation can only be generated on Windows
        log("")
        log("-=[ Generating documentation ]=-")
        log("")

        pydocInstallPath = os.path.dirname(pythonExecutable) + "/Lib"

        os.chdir(python_dir)
        log("%s" % pydocInstallPath)
        command = pythonExecutable + " " + pydocInstallPath + "/pydoc.py -w fbx"
        log("%s" % command)
        os.system(command)

        if not os.path.exists(api_doc_dir):
            os.mkdir(api_doc_dir)

        # The generation with pydoc can take a while so wait until file exists before copying
        timeout = 0
        while ((not os.path.exists(os.path.join(python_dir, "fbx.html"))) and (timeout < 60)):
            time.sleep(1)
            timeout += 1

        shutil.copyfile(os.path.join(python_dir, "fbx.html"), os.path.join(api_doc_dir, "fbx.html"))


def main(args):

    # Display help if wrong number arguments
    nbArgs = len(args)
    if nbArgs > 2:
        print ("Syntax: " + cmdLineDescr + " [test] [doc]\n")
        exit(1)

    test = False
    doc = False

    for i in range(2,nbArgs):
        if args[i].lower() == 'test': test = True;
        if args[i].lower() == 'doc': doc = True;

    # --------------------------------------
    # compile fbx python binding
    # --------------------------------------

    install_SIP()
    
    wheel_filename = generate_wheel(buildPath)

    sdk_lib_dir = distribPath
    log("Copy the results to the folder:" + sdk_lib_dir)
    if not os.path.exists(sdk_lib_dir):
        os.makedirs(sdk_lib_dir)

    shutil.copyfile(wheel_filename, os.path.join(sdk_lib_dir, os.path.basename(wheel_filename)))

    if test or doc:
        install_wheel(buildPath)

        if test:
            test_python_fbx_examples(rootPath, buildPath, sdk_lib_dir)

        if doc:
            python_dir        = os.path.dirname(os.path.abspath(sys.argv[0]))
            api_doc_dir = os.path.join(distribPath,"doc")
            if not os.path.exists(api_doc_dir):
                os.makedirs(api_doc_dir)
            generate_python_fbx_documentation(python_dir, api_doc_dir)

    sys.exit(0)


if __name__ == '__main__':
    main(sys.argv)
