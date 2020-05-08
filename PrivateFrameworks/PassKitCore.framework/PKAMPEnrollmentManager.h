/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAMPEnrollmentManager : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockObservers;
    NSHashTable * _observers;
    NSMutableDictionary * _promiseMap;
    PKInAppPaymentService * _service;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* block */)arg1;
- (void)canEnrollPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (void)enrollPaymentPass:(id)arg1 isDefault:(bool)arg2 completion:(id /* block */)arg3;
- (void)enrollmentStatusForPaymentPass:(id)arg1 completion:(id /* block */)arg2 progress:(id /* block */)arg3;
- (id)init;
- (id)performCanEnrollPaymentPass:(id)arg1;
- (id)performEnrollPaymentPass:(id)arg1 isDefault:(bool)arg2;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
