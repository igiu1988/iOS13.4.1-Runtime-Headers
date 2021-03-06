/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface _EMRemoteInterfaceDistantObject : NSObject <EMXPCProxyCreating> {
    id /* block */  _reattemptHandler;
    EMRemoteConnection * _remoteInterface;
    bool  _synchronous;
}

@property (nonatomic, readonly, copy) id /* block */ reattemptHandler;
@property (nonatomic, readonly) EMRemoteConnection *remoteInterface;
@property (getter=isSynchronous, nonatomic, readonly) bool synchronous;

- (void).cxx_destruct;
- (void)_forwardStackInvocation:(id)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithRemoteInterface:(id)arg1 synchronous:(bool)arg2 reattemptHandler:(id /* block */)arg3;
- (bool)isSynchronous;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id /* block */)reattemptHandler;
- (id)reattemptingRemoteObjectProxy;
- (id)reattemptingRemoteObjectProxyWithReattemptHandler:(id /* block */)arg1;
- (id)remoteInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
