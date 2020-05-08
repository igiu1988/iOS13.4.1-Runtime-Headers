/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDatabaseCKOperationCompletionEvent : HMDLogEvent <HMDAWDLogEvent> {
    NSString * _containerIdentifier;
    NSError * _error;
}

@property (readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)containerIdentifier;
- (id)error;
- (id)initWithContainerIdentifier:(id)arg1 error:(id)arg2;
- (id)metricForAWD;

@end
