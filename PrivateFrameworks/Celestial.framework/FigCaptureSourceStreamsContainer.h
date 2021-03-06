/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceStreamsContainer : NSObject {
    NSDictionary * _baseZoomFactorsByPortType;
    struct OpaqueFigCaptureDevice { } * _device;
    int  _deviceType;
    struct OpaqueFigCaptureStream { } * _primaryStream;
    NSString * _primaryStreamPortType;
    int  _stillImageDepthDataType;
    NSArray * _streams;
    NSDictionary * _streamsByPortType;
}

@property (nonatomic, readonly) int deviceType;
@property (nonatomic, readonly) float minZoomFactorForDepth;
@property (nonatomic, readonly) NSArray *portTypesSupportingDepth;
@property (nonatomic, readonly) struct OpaqueFigCaptureStream { }*primaryStream;
@property (nonatomic, readonly) NSString *primaryStreamPortType;
@property (nonatomic, readonly) int stillImageDepthDataType;
@property (nonatomic, readonly) struct OpaqueFigCaptureStream { }*streamProvidingSDOFRenderingParameters;
@property (nonatomic, readonly) NSDictionary *streamsByPortType;
@property (nonatomic, readonly) NSArray *switchOverZoomFactors;

- (int)_populateStreamsFromDeviceVendorForPosition:(int)arg1 baseZoomFactorOverrides:(id)arg2;
- (void)dealloc;
- (int)deviceType;
- (id)initWithDeviceType:(int)arg1 position:(int)arg2 stillImageDepthDataType:(int)arg3 device:(struct OpaqueFigCaptureDevice { }*)arg4 baseZoomFactorOverrides:(id)arg5;
- (float)minZoomFactorForDepth;
- (id)portTypesSupportingDepth;
- (struct OpaqueFigCaptureStream { }*)primaryStream;
- (id)primaryStreamPortType;
- (int)stillImageDepthDataType;
- (struct OpaqueFigCaptureStream { }*)streamProvidingSDOFRenderingParameters;
- (id)streamsByPortType;
- (id)switchOverZoomFactors;

@end
