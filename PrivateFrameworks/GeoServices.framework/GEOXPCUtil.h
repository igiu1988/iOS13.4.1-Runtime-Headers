/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOXPCUtil : NSObject

+ (id)createServerConnectionWithDebugIdentifier:(id)arg1 eventHandler:(id /* block */)arg2;
+ (id)createServerConnectionWithPort:(const char *)arg1 queue:(id)arg2 debugIdentifier:(id)arg3 eventHandler:(id /* block */)arg4;
+ (id)createServerConnectionWithQueue:(id)arg1 debugIdentifier:(id)arg2 eventHandler:(id /* block */)arg3;
+ (id /* block */)daemonXPCConnectionCreationBlock;
+ (id)defaultXPCServerConnectionQueue;
+ (void)setDaemonXPCConnectionCreationBlock:(id /* block */)arg1;
+ (void)setDefaultXPCServerConnectionQueue:(id)arg1;

@end
