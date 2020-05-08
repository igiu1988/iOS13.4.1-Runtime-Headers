/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMPolicyStore : NSObject {
    id  _policyChangeLock;
}

- (void).cxx_destruct;
- (void)_setCurrentPolicyByKey:(id)arg1;
- (void)addOrUpdatePolicy:(id)arg1;
- (id)currentPolicyByKey;
- (id)init;
- (id)policyWithKey:(id)arg1;
- (void)removePolicyWithKey:(id)arg1;

@end
