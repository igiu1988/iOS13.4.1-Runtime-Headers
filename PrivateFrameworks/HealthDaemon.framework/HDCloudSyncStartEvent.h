/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncStartEvent : HDCloudSyncEvent <HDAnalyticSubmissionEvent> {
    NSNumber * _countSinceLastSuccess;
    NSNumber * _timeIntervalSinceLastSuccess;
}

@property (nonatomic, readonly, copy) NSNumber *countSinceLastSuccess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *timeIntervalSinceLastSuccess;

+ (id)startEventForOperation:(long long)arg1 operationIdentifier:(id)arg2 configuration:(id)arg3 container:(id)arg4 cloudKitIdentifier:(id)arg5;
+ (id)startEventWithProfile:(id)arg1 operation:(long long)arg2 operationIdentifier:(id)arg3 reason:(long long)arg4 options:(unsigned long long)arg5 syncContainerPrefix:(id)arg6 containerIdentifier:(id)arg7 cloudKitIdentifier:(id)arg8 syncIdentifier:(id)arg9 repositorySettings:(unsigned long long)arg10;

- (void).cxx_destruct;
- (unsigned int)AWDMetricID;
- (id)codableRepresentationForAWDSubmission;
- (id)countSinceLastSuccess;
- (id)description;
- (id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 cloudKitManateeEnabled:(bool)arg10 internalSettingManateeEnabled:(bool)arg11;
- (id)timeIntervalSinceLastSuccess;

@end
