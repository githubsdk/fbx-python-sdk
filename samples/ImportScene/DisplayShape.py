"""

 Copyright (C) 2001 - 2010 Autodesk, Inc. and/or its licensors.
 All Rights Reserved.

 The coded instructions, statements, computer programs, and/or related material 
 (collectively the "Data") in these files contain unpublished information 
 proprietary to Autodesk, Inc. and/or its licensors, which is protected by 
 Canada and United States of America federal copyright law and by international 
 treaties. 
 
 The Data may not be disclosed or distributed to third parties, in whole or in
 part, without the prior written consent of Autodesk, Inc. ("Autodesk").

 THE DATA IS PROVIDED "AS IS" AND WITHOUT WARRANTY.
 ALL WARRANTIES ARE EXPRESSLY EXCLUDED AND DISCLAIMED. AUTODESK MAKES NO
 WARRANTY OF ANY KIND WITH RESPECT TO THE DATA, EXPRESS, IMPLIED OR ARISING
 BY CUSTOM OR TRADE USAGE, AND DISCLAIMS ANY IMPLIED WARRANTIES OF TITLE, 
 NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE OR USE. 
 WITHOUT LIMITING THE FOREGOING, AUTODESK DOES NOT WARRANT THAT THE OPERATION
 OF THE DATA WILL BE UNINTERRUPTED OR ERROR FREE. 
 
 IN NO EVENT SHALL AUTODESK, ITS AFFILIATES, PARENT COMPANIES, LICENSORS
 OR SUPPLIERS ("AUTODESK GROUP") BE LIABLE FOR ANY LOSSES, DAMAGES OR EXPENSES
 OF ANY KIND (INCLUDING WITHOUT LIMITATION PUNITIVE OR MULTIPLE DAMAGES OR OTHER
 SPECIAL, DIRECT, INDIRECT, EXEMPLARY, INCIDENTAL, LOSS OF PROFITS, REVENUE
 OR DATA, COST OF COVER OR CONSEQUENTIAL LOSSES OR DAMAGES OF ANY KIND),
 HOWEVER CAUSED, AND REGARDLESS OF THE THEORY OF LIABILITY, WHETHER DERIVED
 FROM CONTRACT, TORT (INCLUDING, BUT NOT LIMITED TO, NEGLIGENCE), OR OTHERWISE,
 ARISING OUT OF OR RELATING TO THE DATA OR ITS USE OR ANY OTHER PERFORMANCE,
 WHETHER OR NOT AUTODESK HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH LOSS
 OR DAMAGE. 
 
"""

from fbx import FbxDeformer
from DisplayCommon import *

def DisplayShape(pGeometry):
    lBlendShapeCount = pGeometry.GetDeformerCount(FbxDeformer.EDeformerType.eBlendShape)

    for lBlendShapeIndex in range(lBlendShapeCount):
        lBlendShape = pGeometry.GetDeformer(lBlendShapeIndex, FbxDeformer.EDeformerType.eBlendShape)   
        DisplayString("    BlendShape ", lBlendShape.GetName())
        
        lBlendShapeChannelCount = lBlendShape.GetBlendShapeChannelCount()
        for lBlendShapeChannelIndex in range(lBlendShapeChannelCount):
            lBlendShapeChannel = lBlendShape.GetBlendShapeChannel(lBlendShapeChannelIndex)
            DisplayString("    BlendShapeChannel ", lBlendShapeChannel.GetName())
            DisplayDouble("    Default Deform Value: ", lBlendShapeChannel.DeformPercent.Get())
            
            lTargetShapeCount = lBlendShapeChannel.GetTargetShapeCount()
            for lTargetShapeIndex in range(lTargetShapeCount):
                lShape = lBlendShapeChannel.GetTargetShape(lTargetShapeIndex)
                DisplayString("    TargetShape ", lShape.GetName())
                
                lControlPointsCount = lShape.GetControlPointsCount()
                lControlPoints = lShape.GetControlPoints()
                lLayer = lShape.GetLayer(0)
                if lLayer != None:
                    lNormals = lLayer.GetNormals().GetDirectArray()
                
                for j in range(lControlPointsCount):
                    DisplayInt("        Control Point ", j)
                    Display3DVector("            Coordinates: ", lControlPoints[j])
                    
                    if lLayer != None and lNormals.GetCount() == lControlPointsCount:
                        Display3DVector("            Normal Vector: ", lNormals.GetAt(j))
                
                DisplayString("")
