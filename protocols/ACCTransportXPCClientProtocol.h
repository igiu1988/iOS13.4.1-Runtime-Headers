/* Generated by EzioChiu.
 */

@protocol ACCTransportXPCClientProtocol <NSObject>

@required

- (void)authStateDidChange:(int)arg1 forConnectionWithUUID:(NSString *)arg2 previousAuthState:(int)arg3 authType:(int)arg4 connectionIsAuthenticated:(bool)arg5 connectionWasAuthenticated:(bool)arg6;
- (void)propertiesDidChange:(NSDictionary *)arg1 forConnectionWithUUID:(NSString *)arg2 previousProperties:(NSDictionary *)arg3;
- (void)propertiesDidChange:(NSDictionary *)arg1 forEndpointWithUUID:(NSString *)arg2 previousProperties:(NSDictionary *)arg3 connectionUUID:(NSString *)arg4;
- (void)sendOutgoingData:(void *)arg1 forEndpointWithUUID:(void *)arg2 connectionUUID:(void *)arg3 withReply:(void *)arg4; // needs 4 arg types, found 9: NSData *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
