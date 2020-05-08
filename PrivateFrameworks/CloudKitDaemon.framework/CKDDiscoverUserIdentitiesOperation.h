/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDiscoverUserIdentitiesOperation : CKDOperation {
    id /* block */  _discoverUserIdentitiesProgressBlock;
    NSArray * _userIdentityLookupInfos;
}

@property (nonatomic, copy) id /* block */ discoverUserIdentitiesProgressBlock;
@property (nonatomic, retain) NSArray *userIdentityLookupInfos;

- (void).cxx_destruct;
- (void)_discoverIdentitiesWithLookupInfos:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3;
- (id)activityCreate;
- (id /* block */)discoverUserIdentitiesProgressBlock;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (void)setDiscoverUserIdentitiesProgressBlock:(id /* block */)arg1;
- (void)setUserIdentityLookupInfos:(id)arg1;
- (id)userIdentityLookupInfos;

@end
