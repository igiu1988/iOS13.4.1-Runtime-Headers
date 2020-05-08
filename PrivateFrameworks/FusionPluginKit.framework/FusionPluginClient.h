/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FusionPluginKit.framework/FusionPluginKit
 */

@interface FusionPluginClient : NSObject <FusionPluginClientInterface> {
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)initClientConnection:(id)arg1;
- (void)sendMessage:(id)arg1 response:(id*)arg2;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
