/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

@interface BSServiceConnection : NSObject <BSInvalidatable, BSServiceConnectionContext, BSXPCServiceConnectionMessaging> {
    BSXPCServiceConnection * _connection;
    NSString * _instance;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSAtomicSignal * _lock_activatedSignal;
    _BSServiceConnectionConfiguration * _lock_config;
    bool  _lock_invalidated;
    bool  _lock_noAssertInvalidatedOnDealloc;
    NSString * _service;
    <NSCopying> * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *instance;
@property (nonatomic, readonly) BSProcessHandle *remoteProcess;
@property (nonatomic, readonly) id remoteTarget;
@property (nonatomic, readonly, copy) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NSCopying> *userInfo;

+ (id)_connectionFromIncomingConnection:(id)arg1;
+ (id)_connectionWithEndpoint:(id)arg1 clientContextBuilder:(id /* block */)arg2;
+ (id)_currentConnection;
+ (id)_nameForService:(id)arg1 instance:(id)arg2 host:(bool)arg3;
+ (id)connectionWithEndpoint:(id)arg1;
+ (id)connectionWithEndpoint:(id)arg1 clientContextBuilder:(id /* block */)arg2;
+ (id)currentContext;

- (void).cxx_destruct;
- (id)_clientContext;
- (void)_configureConnection:(id /* block */)arg1;
- (id)_initWithConnection:(id)arg1 service:(id)arg2 instance:(id)arg3 clientContext:(id)arg4;
- (void)activate;
- (void)configureConnection:(id /* block */)arg1;
- (id)createMessage;
- (id)createMessageWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)instance;
- (void)invalidate;
- (id)remoteProcess;
- (id)remoteTarget;
- (id)service;
- (id)userInfo;

@end
