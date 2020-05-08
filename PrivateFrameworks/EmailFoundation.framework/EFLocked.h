/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFLocked : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _object;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; }*unfairLockForTesting;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithObject:(id)arg1;
- (void)performWhileLocked:(id /* block */)arg1;
- (void)setObject:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; }*)unfairLockForTesting;

@end
