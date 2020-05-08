/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionActivityManager : NSObject {
    id /* block */  fHandler;
    NSOperationQueue * fHandlerQueue;
    struct CLConnectionClient { id x1; struct CLCallbackDropManager { int (**x_2_1_1)(); struct shared_ptr<int> { int *x_2_2_1; struct __shared_weak_count {} *x_2_2_2; } x_2_1_2; } x2; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct CLConnectionClientNotificationContext {} *x4; } * fLocationConnection;
    NSObject<OS_dispatch_queue> * fQueue;
}

+ (long long)authorizationStatus;
+ (bool)isActivityAvailable;

- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 onQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (void)queryActivityStartingFromDate:(id)arg1 toDate:(id)arg2 toQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (void)startActivityUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)stopActivityUpdates;

@end
