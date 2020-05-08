/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSessionParsedCameraSourceConfiguration : NSObject {
    NSArray * _cameraCalibrationDataConnectionConfigurations;
    FigCaptureSourceConfiguration * _cameraConfiguration;
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    NSArray * _metadataObjectConnectionConfigurations;
    NSArray * _movieFileDetectedObjectMetadataConnectionConfigurations;
    FigPointCloudDataCaptureConnectionConfiguration * _pointCloudDataConnectionConfiguration;
    NSArray * _previewDerivedVideoConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    NSArray * _videoCaptureConnectionConfigurations;
    NSArray * _videoDataConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration * _videoPreviewSinkConnectionConfiguration;
    NSArray * _visionDataConnectionConfigurations;
}

@property (nonatomic, readonly) NSArray *cameraCalibrationDataConnectionConfigurations;
@property (nonatomic, readonly) FigCaptureSourceConfiguration *cameraConfiguration;
@property (nonatomic, readonly) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (nonatomic, readonly) NSArray *metadataObjectConnectionConfigurations;
@property (nonatomic, readonly) NSArray *movieFileDetectedObjectMetadataConnectionConfigurations;
@property (nonatomic, readonly) FigPointCloudDataCaptureConnectionConfiguration *pointCloudDataConnectionConfiguration;
@property (nonatomic, readonly) NSArray *previewDerivedVideoConnectionConfigurations;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic, readonly) NSArray *videoCaptureConnectionConfigurations;
@property (nonatomic, readonly) NSArray *videoDataConnectionConfigurations;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (nonatomic, readonly) NSArray *visionDataConnectionConfigurations;

- (id)cameraCalibrationDataConnectionConfigurations;
- (id)cameraConfiguration;
- (void)dealloc;
- (id)depthDataConnectionConfiguration;
- (id)initWithConnectionConfigurations:(id)arg1 clientSetsUserInitiatedCaptureRequestTime:(bool)arg2 sceneClassifierConnectionConfigurationOut:(id*)arg3;
- (id)metadataObjectConnectionConfigurations;
- (id)movieFileDetectedObjectMetadataConnectionConfigurations;
- (id)pointCloudDataConnectionConfiguration;
- (id)previewDerivedVideoConnectionConfigurations;
- (id)stillImageConnectionConfiguration;
- (id)videoCaptureConnectionConfigurations;
- (id)videoDataConnectionConfigurations;
- (id)videoPreviewSinkConnectionConfiguration;
- (id)visionDataConnectionConfigurations;

@end