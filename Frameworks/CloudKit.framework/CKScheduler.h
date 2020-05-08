/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKScheduler : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSNumber * _fakeDeviceCount;
    NSMutableDictionary * _handlersByCKActivityIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _xpcActivitiesByCKActivityIdentifier;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, copy) NSNumber *fakeDeviceCount;
@property (nonatomic, retain) NSMutableDictionary *handlersByCKActivityIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *xpcActivitiesByCKActivityIdentifier;

+ (id)activityFromXPCActivity:(id)arg1;
+ (id)baseCoreAnalyticsEventPayloadForActivity:(id)arg1;
+ (double)gracePeriodForPriority:(long long)arg1 deviceCount:(long long)arg2;
+ (id)identifierWithImmediateInvocationForIdentifier:(id)arg1;
+ (id)sharedScheduler;
+ (bool)shouldReportAnalyticsForActivity:(id)arg1;
+ (bool)shouldReportAnalyticsForContainerIdentifier:(id)arg1;
+ (id)xpcActivityIdentifierForCKActivityIdentifier:(id)arg1;
+ (const char *)xpcActivityPriorityForPriority:(long long)arg1 deviceCount:(long long)arg2;

- (void).cxx_destruct;
- (id)_init;
- (void)_submitActivity:(id)arg1 withCriteria:(id)arg2;
- (id)activityForActivityIdentifier:(id)arg1;
- (id)callbackQueue;
- (long long)currentPriorityForActivityIdentifier:(id)arg1;
- (id)fakeDeviceCount;
- (void)getDeviceCountForActivity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSuggestedXPCActivityCriteriaForActivity:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)handlersByCKActivityIdentifier;
- (bool)hasPendingActivityWithActivityIdentifier:(id)arg1;
- (id)init;
- (void)performAsyncOnQueue:(id /* block */)arg1;
- (void)populateCriteria:(id)arg1 withAdditionalCriteriaFromActivity:(id)arg2;
- (id)queue;
- (void)registerActivityIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)registerXPCActivityWithCKActivityIdentifier:(id)arg1 criteria:(id)arg2;
- (void)runActivityWithIdentifier:(id)arg1 xpcActivity:(id)arg2;
- (void)setCallbackQueue:(id)arg1;
- (void)setFakeDeviceCount:(id)arg1;
- (void)setHandlersByCKActivityIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setXpcActivitiesByCKActivityIdentifier:(id)arg1;
- (void)submitActivity:(id)arg1;
- (void)unregisterActivityIdentifier:(id)arg1;
- (id)xpcActivitiesByCKActivityIdentifier;
- (id)xpcActivityForActivityWithIdentifier:(id)arg1;

@end
