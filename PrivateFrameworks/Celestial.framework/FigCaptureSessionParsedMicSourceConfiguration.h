/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSessionParsedMicSourceConfiguration : NSObject {
    FigCaptureSourceConfiguration * _cameraConfigurationForStereoAudioCapture;
    NSArray * _micConnectionConfigurations;
}

@property (nonatomic, readonly) FigCaptureSourceConfiguration *cameraConfigurationForStereoAudioCapture;
@property (nonatomic, readonly) NSArray *micConnectionConfigurations;

- (id)cameraConfigurationForStereoAudioCapture;
- (void)dealloc;
- (id)initWithMicConnectionConfigurations:(id)arg1 cameraConfigurationForStereoAudioCapture:(id)arg2;
- (id)micConnectionConfigurations;

@end
