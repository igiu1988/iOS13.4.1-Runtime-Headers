/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHVideoRequest : PHMediaRequest {
    PHVideoRequestBehaviorSpec * _behaviorSpec;
    <PHVideoRequestDelegate> * _delegate;
    PHImageDisplaySpec * _displaySpec;
    PHVideoResult * _videoResult;
}

@property (nonatomic, readonly) PHVideoRequestBehaviorSpec *behaviorSpec;
@property (nonatomic, readonly) <PHVideoRequestDelegate> *delegate;
@property (nonatomic, readonly) PHImageDisplaySpec *displaySpec;

- (void).cxx_destruct;
- (void)_finish;
- (void)_handleResultVideoURL:(id)arg1 info:(id)arg2 error:(id)arg3;
- (id)behaviorSpec;
- (id)delegate;
- (id)displaySpec;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 displaySpec:(id)arg6 behaviorSepc:(id)arg7 delegate:(id)arg8;
- (bool)isSynchronous;
- (void)startRequest;
- (void)videoURLBecameAvailable:(id)arg1 info:(id)arg2 error:(id)arg3;

@end