/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncOperationConfiguration : NSObject {
    HDAssertion * _accessibilityAssertion;
    CKOperationGroup * _operationGroup;
    unsigned long long  _options;
    long long  _reason;
    HDCloudSyncRepository * _repository;
    NSString * _syncContainerPrefix;
    NSUUID * _syncIdentifier;
}

@property (nonatomic, readonly) HDAssertion *accessibilityAssertion;
@property (nonatomic, readonly) CKOperationGroup *operationGroup;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) bool rebaseProhibited;
@property (nonatomic, readonly) HDCloudSyncRepository *repository;
@property (nonatomic, readonly, copy) NSString *syncContainerPrefix;
@property (nonatomic, readonly, copy) NSUUID *syncIdentifier;

- (void).cxx_destruct;
- (id)accessibilityAssertion;
- (id)databaseForContainer:(id)arg1;
- (void)dealloc;
- (id)descriptionForSignpost;
- (id)initWithRepository:(id)arg1 operationGroup:(id)arg2 syncContainerPrefix:(id)arg3 options:(unsigned long long)arg4 reason:(long long)arg5 accessibilityAssertion:(id)arg6 syncIdentifier:(id)arg7;
- (id)operationGroup;
- (unsigned long long)options;
- (id)pushStoreIdentifierForContainer:(id)arg1 error:(id*)arg2;
- (id)pushStoreWithIdentifier:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (long long)reason;
- (bool)rebaseProhibited;
- (id)repository;
- (id)syncContainerPrefix;
- (id)syncIdentifier;

@end
