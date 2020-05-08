/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageOverCaptureProcessorInput : BWStillImageProcessorInput {
    <BWStillImageOverCaptureProcessorInputDelegate> * _delegate;
    struct opaqueCMSampleBuffer { } * _narrowFieldOfViewFrame;
    int  _overCaptureMode;
    bool  _receivedAllFrames;
    int  _receivedFrames;
    struct opaqueCMSampleBuffer { } * _wideFieldOfViewFrame;
}

@property (nonatomic, retain) <BWStillImageOverCaptureProcessorInputDelegate> *delegate;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*narrowFieldOfViewFrame;
@property (nonatomic, readonly) int overCaptureMode;
@property (nonatomic, readonly) bool receivedAllFrames;
@property (nonatomic, readonly) int receivedFrames;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*wideFieldOfViewFrame;

- (void)addFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithSettings:(id)arg1 captureSettings:(id)arg2;
- (struct opaqueCMSampleBuffer { }*)narrowFieldOfViewFrame;
- (int)overCaptureMode;
- (bool)receivedAllFrames;
- (int)receivedFrames;
- (void)setDelegate:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)wideFieldOfViewFrame;

@end