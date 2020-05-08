/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionStatusMonitor : NSObject {
    ICUserIdentityContext * _identityContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _observers;
    ICMusicSubscriptionStatus * _subscriptionStatus;
}

@property (nonatomic, readonly) ICUserIdentity *identity;
@property (nonatomic, readonly) ICMusicSubscriptionStatus *subscriptionStatus;

+ (id)_sharedInstanceManager;
+ (id)sharedMonitorForIdentity:(id)arg1;
+ (id)sharedMonitorForIdentity:(id)arg1 identityStore:(id)arg2;

- (void).cxx_destruct;
- (void)_beginObservingSubscriptionStatus;
- (id)_effectiveIdentityForRequestingSubscriptionStatus;
- (void)_endObservingSubscriptionStatus;
- (void)_handleSubscriptionStatusDidChange:(id)arg1;
- (void)_handleUserIdentityStoreDidChange:(id)arg1;
- (id)_initWithIdentityContext:(id)arg1;
- (void)_requestSubscriptionStatusWithCachingPolicy:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_updateWithSubscriptionStatus:(id)arg1;
- (id)beginObservingSubscriptionStatusWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (void)endObservingSubscriptionStatusWithToken:(id)arg1;
- (id)identity;
- (void)refreshSubscriptionStatus;
- (id)subscriptionStatus;

@end
