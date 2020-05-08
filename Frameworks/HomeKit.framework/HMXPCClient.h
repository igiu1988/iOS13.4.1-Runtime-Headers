/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMXPCClient : HMFMessageTransport <HMFMessageTransportDelegate> {
    NSXPCConnection * _connection;
    bool  _connectionValid;
    int  _notifyRegisterToken;
    bool  _notifyRegistered;
    id /* block */  _reconnectionHandler;
    bool  _requiresCheckin;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool connectionValid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int notifyRegisterToken;
@property (nonatomic) bool notifyRegistered;
@property (nonatomic, copy) id /* block */ reconnectionHandler;
@property (nonatomic) bool requiresCheckin;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (bool)connectionValid;
- (void)dealloc;
- (id)init;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (int)notifyRegisterToken;
- (bool)notifyRegistered;
- (id /* block */)reconnectionHandler;
- (void)registerReconnectionHandler:(id /* block */)arg1;
- (bool)requiresCheckin;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setConnectionValid:(bool)arg1;
- (void)setNotifyRegisterToken:(int)arg1;
- (void)setNotifyRegistered:(bool)arg1;
- (void)setReconnectionHandler:(id /* block */)arg1;
- (void)setRequiresCheckin:(bool)arg1;

@end
