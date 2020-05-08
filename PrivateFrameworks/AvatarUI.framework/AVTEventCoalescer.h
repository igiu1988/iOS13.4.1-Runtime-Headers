/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTEventCoalescer : NSObject <AVTEventCoalescer> {
    double  _delay;
    bool  _eventDeliveryScheduled;
    id /* block */  _eventHandler;
    NSString * _eventLabel;
    <AVTUILogger> * _logger;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) double delay;
@property (nonatomic) bool eventDeliveryScheduled;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, copy) NSString *eventLabel;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (double)delay;
- (bool)eventDeliveryScheduled;
- (void)eventDidOccur:(id /* block */)arg1;
- (id /* block */)eventHandler;
- (id)eventLabel;
- (id)initWithDelay:(double)arg1 queue:(id)arg2 logger:(id)arg3;
- (id)logger;
- (void)registerEventForCoalescingWithLabel:(id)arg1 handler:(id /* block */)arg2;
- (void)setEventDeliveryScheduled:(bool)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setEventLabel:(id)arg1;
- (id)workQueue;

@end
