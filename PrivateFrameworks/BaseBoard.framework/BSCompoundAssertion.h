/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSCompoundAssertion : NSObject <BSCompoundAssertionState, BSInvalidatable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataLock;
    NSMutableSet * _dataLock_acquisitions;
    NSString * _dataLock_identifierPrefix;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _syncLock;
    id /* block */  _syncLock_block;
    bool  _syncLock_invalid;
}

@property (getter=isActive, readonly) bool active;
@property (readonly) NSSet *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *reasons;
@property (readonly) Class superclass;

+ (id)assertionWithIdentifier:(id)arg1;
+ (id)assertionWithIdentifier:(id)arg1 stateDidChangeHandler:(id /* block */)arg2;
+ (id)new;

- (void).cxx_destruct;
- (void)_acquisitionDidInvalidate:(id)arg1;
- (id)_dataLock_context;
- (id)_dataLock_copyState;
- (id)_initWithIdentifier:(id)arg1;
- (id)_syncLock_acquireForReason:(id)arg1 withContext:(id)arg2;
- (void)_syncLock_acquisitionDidInvalidate:(id)arg1;
- (id)acquireForReason:(id)arg1;
- (id)acquireForReason:(id)arg1 withContext:(id)arg2;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidate;
- (bool)isActive;
- (id)reasons;

@end
