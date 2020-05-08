/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDelayTimer : NSObject {
    bool  _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    bool  _cancelled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSObject<OS_dispatch_source> * _dispatchTimer;
}

@property (getter=_isCancelled, setter=_setCancelled:, nonatomic) bool _cancelled;
@property (setter=_setDispatchQueue:, nonatomic, retain) NSObject<OS_dispatch_queue> *_dispatchQueue;
@property (setter=_setDispatchTimer:, nonatomic, retain) NSObject<OS_dispatch_source> *_dispatchTimer;
@property (nonatomic) bool automaticallyCancelPendingBlockUponSchedulingNewBlock;

- (id)_dispatchQueue;
- (id)_dispatchTimer;
- (bool)_isCancelled;
- (void)_reallyCancel;
- (void)_setCancelled:(bool)arg1;
- (void)_setDispatchQueue:(id)arg1;
- (void)_setDispatchTimer:(id)arg1;
- (void)afterDelay:(double)arg1 processBlock:(id /* block */)arg2;
- (bool)automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithTargetSerialQueue:(id)arg1;
- (void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(bool)arg1;

@end
