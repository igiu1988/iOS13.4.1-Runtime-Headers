/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VVMSharedNetworkObserver : NSObject {
    NSMapTable * fDelegates;
    bool  fIsNetworkReachable;
    bool  fIsObservingNetwork;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  fLock;
    NSObject<OS_dispatch_queue> * fQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)init;
- (bool)isNetworkReachable;
- (void)networkReachabilityChanged:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)startObservingNetworkSync;
- (void)stopObservingNetworkSync;

@end
