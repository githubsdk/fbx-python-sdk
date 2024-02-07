%Module(name=fbx, language="C++")

%Copying
Copyright (C) 2023 Autodesk, Inc. and/or its licensors.
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
%End

%ModuleHeaderCode
#include <fbxsdk.h>
%End

%DefaultEncoding "UTF-8"

%Include fbxtypes.sip
%Include fbxutils.sip
%Include fbxfolder.sip
%Include fbxstring.sip
%Include fbxcolor.sip
%Include fbxtime.sip
%Include fbxdatetime.sip
%Include fbxvector2.sip
%Include fbxvector4.sip
%Include fbxquaternion.sip
%Include fbxmatrix.sip
%Include fbxamatrix.sip
%Include fbxtransformation.sip
%Include fbxarray.sip
%Include fbxaxissystem.sip
%Include fbxsystemunit.sip
%Include fbxtime.sip
%Include fbxnamehandler.sip

%Include fbxio.sip
%Include fbxmanager.sip
%Include fbxdatatypes.sip
%Include fbxiopluginregistry.sip
%Include fbxpropertydef.sip
%Include fbxproperty.sip
%Include fbxanimutilities.sip
%Include fbxusernotification.sip
%Include fbxtakeinfo.sip
%Include fbxstatus.sip
%Include fbxstatistics.sip
%Include fbxprogress.sip
%Include fbximplementationutils.sip
%Include fbxbindingtableentry.sip
%Include fbxgeometryconverter.sip
%Include fbxweightedmapping.sip

%Include fbxlayer.sip
%Include fbxlayerelement.sip
%Include fbxlayerelementarray.sip
%Include fbxglobalcamerasettings.sip
%Include fbxgloballightsettings.sip

%Include fbxperipheral.sip
%Include fbxrenamingstrategy.sip
%Include fbxobjectfilter.sip
%Include fbxreader.sip
%Include fbxanimcurvefilters.sip
%Include fbxclassid.sip
    %Include fbxobject.sip
        %Include fbxcontrolset.sip
        %Include fbxgeometryweightedmap.sip
        %Include fbxscenereference.sip
        %Include fbxanimevaluator.sip
        %Include fbxdocumentinfo.sip
        %Include fbxselectionnode.sip
        %Include fbxanimcurvenode.sip
        %Include fbxiosettings.sip
        %Include fbxcharacterpose.sip
        %Include fbxcache.sip
        %Include fbxmediaclip.sip
           %Include fbxvideo.sip
           %Include fbxaudio.sip
        %Include fbxthumbnail.sip
        %Include fbxpose.sip
        %Include fbxnode.sip
        %Include fbxglobalsettings.sip
        %Include fbximplementation.sip
        %Include fbxcollection.sip
            %Include fbxdocument.sip
                %Include fbxscene.sip
            %Include fbxanimstack.sip
            %Include fbxanimlayer.sip
            %Include fbxaudiolayer.sip
            %Include fbxselectionset.sip
            %Include fbxcollectionexclusive.sip
                %Include fbxdisplaylayer.sip
        %Include fbxanimcurvebase.sip
            %Include fbxanimcurve.sip
        %Include fbxiobase.sip
            %Include fbxexporter.sip
            %Include fbximporter.sip
        %Include fbxconstraint.sip
            %Include fbxcharacter.sip
            %Include fbxconstraintaim.sip
            %Include fbxconstraintparent.sip
            %Include fbxconstraintposition.sip
            %Include fbxconstraintrotation.sip
            %Include fbxconstraintscale.sip
            %Include fbxconstraintsinglechainik.sip
        %Include fbxdeformer.sip
            %Include fbxvertexcachedeformer.sip
            %Include fbxskin.sip
            %Include fbxblendshape.sip
        %Include fbxsubdeformer.sip
            %Include fbxcluster.sip
            %Include fbxblendshapechannel.sip
        %Include fbxtexture.sip
            %Include fbxlayeredtexture.sip
            %Include fbxfiletexture.sip
            %Include fbxproceduraltexture.sip
        %Include fbxsurfacematerial.sip
            %Include fbxsurfacelambert.sip
            %Include fbxsurfacephong.sip
        %Include fbxnodeattribute.sip
            %Include fbxskeleton.sip
            %Include fbxlodgroup.sip
            %Include fbxnull.sip
            %Include fbxlight.sip
            %Include fbxmarker.sip
            %Include fbxcamera.sip
            %Include fbxcamerastereo.sip
            %Include fbxcameraswitcher.sip
            %Include fbxlayercontainer.sip
                %Include fbxgeometrybase.sip
                    %Include fbxshape.sip
                    %Include fbxgeometry.sip
                        %Include fbxline.sip
                        %Include fbxmesh.sip
                        %Include fbxnurb.sip
                        %Include fbxnurbcurve.sip
                        %Include fbxnurbsurface.sip
                        %Include fbxpatch.sip
                        %Include fbxtrimnurbsurface.sip
        %Include fbxbindingtablebase.sip
            %Include fbxbindingtable.sip
            %Include fbxbindingoperator.sip
        
