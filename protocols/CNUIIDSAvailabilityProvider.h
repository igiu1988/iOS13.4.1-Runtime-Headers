/* Generated by EzioChiu.
 */

@protocol CNUIIDSAvailabilityProvider <NSObject>

@required

- (CNObservable *)validateHandlesForFaceTime:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNObservable *)validateHandlesForIMessage:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;

@end
