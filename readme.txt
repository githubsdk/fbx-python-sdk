================================================================================

                                     README

                       Autodesk FBX Python Bindings 2020
                       ----------------------------------


Welcome to the FBX Python Bindings readme! This document will guide you through
steps on how to generate the FBX Python SDK. 

For more information about the FBX, please visit us at http://www.autodesk.com/fbx/

To join the FBX Beta Program, please visit the Autodesk Feedback Community site
at http://beta.autodesk.com

Sincerely,
the Autodesk FBX team

================================================================================



TABLE OF CONTENTS
-----------------

    1. What Is The Purpose Of Package?
    2. Pre-Requisites
    3. How-to
    4. Building and installing
    5. Features, Improvements And Changes
    6. Fixed And Known Issues
    7. Release Notes From Previous Releases
    8. Legal Disclaimer 



1. WHAT IS THE PURPOSE OF THIS PACKAGE?
---------------------------------------

The FBX Python Bindings allow developers to write the FBX Python SDK using
their desired Python interpreter and Riverbank's Sip. Autodesk provides a
pre-compiled version of the FBX Python SDK but only for a specific version
of the Python interpreter (see the FBX Python SDK package)


2. PRE-REQUISITES
------------------------------

To be able to compile the sources in this package, you must also install the
FBX SDK.

A C++ compiler for your operating system will be required. For instance,
on Microsoft Windows, the PythonBinding.py script will assume that you are
working with Microsoft VisualStudio.

Finally, the Python interpreter must be available on the build machine.


3. HOW-TO
-------------
     
3.1  Download the latest version of the FBX SDK and install it.

3.2  Define the FBXSDK_ROOT environment variable to the location of the
     installed FBX SDK from step 3.1
     (example: set FBXSDK_ROOT=C:\Program Files\Autodesk\FBX\FBX SDK\2019.5)

3.3  On Windows only, define FBXSDK_COMPILER to specify version of the SDK to be used
     (example: set FBXSDK_COMPILER=vs2019)

4. BUILDING AND INSTALLING
--------------------------
    Install Sip version 6.6.2 (newer version have template issue)
        python -m pip install --force-reinstall -v "sip==6.6.2"
    Build and Install command:
        python -m pip install .  --use-deprecated=legacy-resolver
    Build only command:  
        python -m sipbuild.tools.build --verbose
    See Sip docmentation for more details: https://www.riverbankcomputing.com/static/Docs/sip/index.html#
    
5. FEATURES, IMPROVEMENTS AND CHANGES
-------------------------------------

5.1 Improvements and New Features
    * This is the first time the sections: 'FEATURES, IMPROVEMENTS AND CHANGES' and 'FIXES AND KNOWN ISSUES'
      have been added to this readme

5.2 Changes and Deprecated Features


6. FIXED AND KNOWN ISSUES
-------------------------

6.1 Fixed Issues
    [FBXX-1563] Bad data type interpretation causes issues when generating the FBX Python binding using 
                Python 3.5 (and above) interpreter.

2.2 Known Issues


7. RELEASE NOTES FROM PREVIOUS RELEASES
---------------------------------------
   * no previous notes since this is the first version that includes the section.


8. LEGAL DISCLAIMER
-------------------

Autodesk and FBX are registered trademarks or trademarks of Autodesk, Inc., in
the USA and/or other countries. All other brand names, product names, or trade-
marks belong to their respective holders.

                       Copyright (C) 2023 Autodesk, Inc.
                              All Rights Reserved

================================================================================
