/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMCollectionItemIDStateCapturer : NSObject {
    <EFCancelable> * _stateCaptureCancelable;
    NSObject<OS_dispatch_queue> * _stateCaptureQueue;
}

@property (nonatomic, readonly) <EFCancelable> *stateCaptureCancelable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateCaptureQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2;
- (id)stateCaptureCancelable;
- (id)stateCaptureQueue;

@end
