/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldTrackingConfiguration : ARConfiguration {
    bool  _alwaysUsePrimaryCameraForTracking;
    bool  _automaticImageScaleEstimationEnabled;
    bool  _collaborationEnabled;
    bool  _deliverRawSceneUnderstandingResults;
    bool  _depthOptimizedForStaticScene;
    bool  _depthTemporalSmoothingEnabled;
    NSSet * _detectionImages;
    NSSet * _detectionObjects;
    long long  _environmentTexturing;
    ARWorldMap * _initialWorldMap;
    long long  _maximumNumberOfTrackedImages;
    double  _minVergenceAngle;
    bool  _mlModelEnabled;
    unsigned long long  _planeDetection;
    bool  _relocalizationEnabled;
    unsigned long long  _sceneReconstruction;
    bool  _shouldUseUltraWideIfAvailable;
    NSString * _slamConfiguration;
    struct ARSpatialMappingParameters { 
        long long voxelSize; 
        long long bucketCount; 
    }  _spatialMappingParameters;
    bool  _useSpatialMappingQualityMode;
    bool  _userFaceTrackingEnabled;
    bool  _wantsHDREnvironmentTextures;
}

@property (nonatomic) bool alwaysUsePrimaryCameraForTracking;
@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic) bool automaticImageScaleEstimationEnabled;
@property (getter=isCollaborationEnabled, nonatomic) bool collaborationEnabled;
@property (nonatomic) bool deliverRawSceneUnderstandingResults;
@property (nonatomic) bool depthOptimizedForStaticScene;
@property (nonatomic) bool depthTemporalSmoothingEnabled;
@property (nonatomic, copy) NSSet *detectionImages;
@property (nonatomic, copy) NSSet *detectionObjects;
@property (nonatomic) long long environmentTexturing;
@property (nonatomic, readonly) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (nonatomic, retain) ARWorldMap *initialWorldMap;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (nonatomic) double minVergenceAngle;
@property (getter=isMLModelEnabled, nonatomic) bool mlModelEnabled;
@property (nonatomic) unsigned long long planeDetection;
@property (nonatomic) bool relocalizationEnabled;
@property (nonatomic) unsigned long long sceneReconstruction;
@property (nonatomic) bool shouldUseUltraWideIfAvailable;
@property (nonatomic, copy) NSString *slamConfiguration;
@property (nonatomic) struct ARSpatialMappingParameters { long long x1; long long x2; } spatialMappingParameters;
@property (nonatomic) bool useSpatialMappingQualityMode;
@property (getter=userFaceTrackingEnabled, nonatomic) bool userFaceTrackingEnabled;
@property (nonatomic) bool wantsHDREnvironmentTextures;

+ (bool)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;
+ (id)supportedVideoFormatsForJasper;
+ (id)supportedVideoFormatsForUltraWide;
+ (id)supportedVideoFormatsForUserFaceTracking;
+ (bool)supportsFrameSemantics:(unsigned long long)arg1;
+ (bool)supportsFrontCameraFaceAnchors;
+ (bool)supportsSceneReconstruction:(unsigned long long)arg1;
+ (bool)supportsUserFaceTracking;

- (void).cxx_destruct;
- (long long)_depthPrioritization;
- (id)_trackingOptions;
- (bool)alwaysUsePrimaryCameraForTracking;
- (bool)automaticImageScaleEstimationEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createTechniques:(id)arg1;
- (bool)deliverRawSceneUnderstandingResults;
- (bool)depthOptimizedForStaticScene;
- (id)depthSensorSettingsForJasper;
- (bool)depthTemporalSmoothingEnabled;
- (id)description;
- (id)detectionImages;
- (id)detectionObjects;
- (long long)environmentTexturing;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForUltraWide;
- (id)imageSensorSettingsForUserFaceTracking;
- (id)init;
- (id)initialWorldMap;
- (bool)isCollaborationEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isMLModelEnabled;
- (long long)maximumNumberOfTrackedImages;
- (double)minVergenceAngle;
- (id)parentImageSensorSettings;
- (unsigned long long)planeDetection;
- (bool)relocalizationEnabled;
- (unsigned long long)sceneReconstruction;
- (id)secondaryTechniques;
- (void)setAlwaysUsePrimaryCameraForTracking:(bool)arg1;
- (void)setAutomaticImageScaleEstimationEnabled:(bool)arg1;
- (void)setCollaborationEnabled:(bool)arg1;
- (void)setDeliverRawSceneUnderstandingResults:(bool)arg1;
- (void)setDepthOptimizedForStaticScene:(bool)arg1;
- (void)setDepthTemporalSmoothingEnabled:(bool)arg1;
- (void)setDetectionImages:(id)arg1;
- (void)setDetectionObjects:(id)arg1;
- (void)setEnvironmentTexturing:(long long)arg1;
- (void)setFrontCameraFaceAnchorsEnabled:(bool)arg1;
- (void)setInitialWorldMap:(id)arg1;
- (void)setMaximumNumberOfTrackedImages:(long long)arg1;
- (void)setMinVergenceAngle:(double)arg1;
- (void)setMlModelEnabled:(bool)arg1;
- (void)setPlaneDetection:(unsigned long long)arg1;
- (void)setRelocalizationEnabled:(bool)arg1;
- (void)setSceneReconstruction:(unsigned long long)arg1;
- (void)setShouldUseUltraWideIfAvailable:(bool)arg1;
- (void)setSlamConfiguration:(id)arg1;
- (void)setSpatialMappingParameters:(struct ARSpatialMappingParameters { long long x1; long long x2; })arg1;
- (void)setUseSpatialMappingQualityMode:(bool)arg1;
- (void)setUserFaceTrackingEnabled:(bool)arg1;
- (void)setWantsHDREnvironmentTextures:(bool)arg1;
- (bool)shouldEnableCalibrationDataForImageSensorSettings:(id)arg1;
- (bool)shouldEnableVisionDataForImageSensorSettings:(id)arg1;
- (bool)shouldUseJasper;
- (bool)shouldUseUltraWide;
- (bool)shouldUseUltraWideIfAvailable;
- (id)slamConfiguration;
- (struct ARSpatialMappingParameters { long long x1; long long x2; })spatialMappingParameters;
- (bool)useSpatialMappingQualityMode;
- (bool)userFaceTrackingEnabled;
- (bool)wantsHDREnvironmentTextures;

@end
