/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageOverCaptureProcessorRequest : NSObject {
    <BWStillImageProcessorControllerDelegate> * _delegate;
    int  _err;
    BWStillImageOverCaptureProcessorInput * _input;
}

@property (nonatomic, readonly) <BWStillImageProcessorControllerDelegate> *delegate;
@property (nonatomic) int err;
@property (nonatomic, readonly) BWStillImageOverCaptureProcessorInput *input;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (id)initWithInput:(id)arg1 delegate:(id)arg2;
- (id)input;
- (bool)receivedAllBuffers;
- (void)setErr:(int)arg1;

@end
