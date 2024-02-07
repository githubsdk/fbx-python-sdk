const char * FBXSDK_CAMERA_PERSPECTIVE;
const char * FBXSDK_CAMERA_TOP;
const char * FBXSDK_CAMERA_FRONT;
const char * FBXSDK_CAMERA_BACK;
const char * FBXSDK_CAMERA_RIGHT;
const char * FBXSDK_CAMERA_LEFT;
const char * FBXSDK_CAMERA_BOTTOM;
const char * FBXSDK_CAMERA_SWITCHER;

class FbxGlobalCameraSettings /NoDefaultCtors/
{
public:
	enum EViewingMode
	{
		eStandard,
		eXRay,
		eModelsOnly
	};

	bool				SetDefaultCamera(const char* pCameraName, FbxStatus* pStatus=NULL);
	const char*			GetDefaultCamera() const;
	void				RestoreDefaultSettings();
	void				SetDefaultViewingMode(EViewingMode pViewingMode);
	EViewingMode		GetDefaultViewingMode() const;

	void				CreateProducerCameras();
	void				DestroyProducerCameras();
	bool				IsProducerCamera(FbxCamera* pCamera) const;

	FbxCamera*			GetCameraProducerPerspective() const;
	FbxCamera*			GetCameraProducerFront() const;
	FbxCamera*			GetCameraProducerBack() const;
	FbxCamera*			GetCameraProducerLeft() const;
	FbxCamera*			GetCameraProducerRight() const;
	FbxCamera*			GetCameraProducerTop() const;
	FbxCamera*			GetCameraProducerBottom() const;

	FbxCameraSwitcher*	GetCameraSwitcher() const;
	void				SetCameraSwitcher(FbxCameraSwitcher* pSwitcher);

private:
    FbxGlobalCameraSettings(FbxManager& pManager, FbxScene& pScene);
    ~FbxGlobalCameraSettings();
};