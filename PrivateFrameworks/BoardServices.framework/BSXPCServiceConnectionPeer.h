/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

@interface BSXPCServiceConnectionPeer : NSObject <BSDescriptionProviding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_connections;
    NSMutableDictionary * _lock_entitlements;
    unsigned long long  _lock_lastConnectedGenerationCount;
    BSProcessHandle * _processHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) BSProcessHandle *processHandle;
@property (readonly) Class superclass;

+ (id)_allPeers;
+ (void)invalidateConnection:(id)arg1;
+ (id)peerOfConnection:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithConnection:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)hasEntitlement:(id)arg1;
- (id)init;
- (id)processHandle;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
