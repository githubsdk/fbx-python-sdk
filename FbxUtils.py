import os   
import shutil
import stat
import subprocess
import time
import sys
import platform

# Utility functions to manipulate/walk disks
def FileExist(File):
    if os.access(File,os.F_OK):
        return 1
    else:
        return 0


def FileDelete(File):
    try:
        os.chmod(File, stat.S_IWRITE)
        os.remove(File)
    except:
        raise


def DirCopy(Src,Dst):
    if FileExist(Dst):
        try:
            Files = os.listdir(Src)
            for File in Files:
                if os.path.isdir(os.path.join(Src,File)):
                    DirCopy(os.path.join(Src,File), os.path.join(Dst,File) )
                elif os.path.isfile(os.path.join(Src,File)):
                    FileCopy( os.path.join(Src,File), os.path.join(Dst,File) )
        except:
            raise (RuntimeError, "Can't copy directory %s to %s" % (Src, Dst))
    else:
        try:
            shutil.copytree(Src, Dst)
        except:
            raise (RuntimeError,"Can't copy directory")


def DirCreate(Dir):
    if not os.access(Dir,os.F_OK):
        os.makedirs ( Dir )


def DirDelete(Dir):
    if FileExist(Dir):
        Files = os.listdir(Dir)
        for File in Files:
            full_path = os.path.join(Dir, File)
            if os.path.isdir(full_path):
                DirDelete(full_path)
            elif os.path.isfile(full_path):
                FileDelete(full_path)
        os.chmod( Dir,stat.S_IWRITE )
        os.rmdir(Dir)

# *************************************************************************
#  Log utility
#  1 - Steps
#  2 - Steps + Low  level details when errors
#  3 - Steps + Low  level details when warnings
#  4 - Steps + High level details 
# *************************************************************************
LogLevel = 3
def Log(Level,String,OutLogFile=None):
    if Level<=LogLevel:
        sys.stdout.write(String)
        sys.stdout.flush()
        if OutLogFile != None:
            OutLogFile.write(String)
            OutLogFile.flush()

def LogFlush():
    sys.stdout.flush()
