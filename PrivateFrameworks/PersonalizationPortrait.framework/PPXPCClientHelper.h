/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPXPCClientHelper : NSObject {
    id  _clientExportedObject;
    NSXPCConnection * _conn;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _connLock;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSString * _serviceName;
    NSXPCInterface * _whitelistedClientInterface;
    NSXPCInterface * _whitelistedServerInterface;
}

- (void).cxx_destruct;
- (void)_locked_establishConnection;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 whitelistedServerInterface:(id)arg2 whitelistedClientInterface:(id)arg3 clientExportedObject:(id)arg4 interruptionHandler:(id /* block */)arg5 invalidationHandler:(id /* block */)arg6;
- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
