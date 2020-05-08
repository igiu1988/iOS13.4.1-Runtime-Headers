/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface DispatchGroupWrapper : NSObject {
    NSObject<OS_dispatch_group> * _dispatchGroup;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *dispatchGroup;

- (void)dealloc;
- (id)dispatchGroup;
- (void)executeWithDispatchGroup:(id /* block */)arg1;
- (id)init;
- (void)notify:(id /* block */)arg1;
- (void)setDispatchGroup:(id)arg1;

@end
