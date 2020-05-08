/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAgentExtension : NSObject <NEAgentSessionDelegate, NEExtensionProviderHostDelegate, NEPluginDriver> {
    bool  _appsUpdateEnding;
    bool  _appsUpdateStarted;
    NSXPCInterface * _driverProtocol;
    NSExtension * _extension;
    NSString * _extensionIdentifier;
    NSArray * _extensionUUIDs;
    bool  _isAppExtensionHost;
    <NEPluginManagerObjectFactory> * _managerObjectFactory;
    NSXPCInterface * _managerProtocol;
    id /* block */  _pendingDisposeCompletion;
    NSString * _pluginType;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _sendFailedTimer;
    NEExtensionProviderHostContext * _sessionContext;
    NSUUID * _sessionRequestIdentifier;
}

@property bool appsUpdateEnding;
@property bool appsUpdateStarted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCInterface *driverInterface;
@property (readonly) NSXPCInterface *driverProtocol;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, readonly) NSString *extensionIdentifier;
@property (nonatomic, readonly) NSArray *extensionUUIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAppExtensionHost;
@property (nonatomic, readonly) NSXPCInterface *managerInterface;
@property (readonly) <NEPluginManagerObjectFactory> *managerObjectFactory;
@property (readonly) NSXPCInterface *managerProtocol;
@property (copy) id /* block */ pendingDisposeCompletion;
@property (nonatomic, readonly) NSString *pluginType;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) int requiredEntitlement;
@property (retain) NSObject<OS_dispatch_source> *sendFailedTimer;
@property (nonatomic, retain) NEExtensionProviderHostContext *sessionContext;
@property (nonatomic, retain) NSUUID *sessionRequestIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *uuids;

- (void).cxx_destruct;
- (bool)appsUpdateEnding;
- (bool)appsUpdateStarted;
- (void)cleanupExtensionWithRequestIdentifier:(id)arg1;
- (void)dealloc;
- (id)driverInterface;
- (id)driverProtocol;
- (id)extension;
- (void)extension:(id)arg1 didFailWithError:(id)arg2;
- (void)extension:(id)arg1 didStartWithError:(id)arg2;
- (void)extensionDidStop:(id)arg1;
- (id)extensionIdentifier;
- (id)extensionUUIDs;
- (void)handleAppsUninstalled:(id)arg1;
- (void)handleAppsUpdateBegins:(id)arg1;
- (void)handleAppsUpdateEnding:(id)arg1;
- (void)handleAppsUpdateEnds:(id)arg1;
- (void)handleCancel;
- (void)handleDisposeWithCompletionHandler:(id /* block */)arg1;
- (void)handleExtensionExit:(id)arg1;
- (void)handleExtensionStartedWithCompletionHandler:(id /* block */)arg1;
- (void)handleInitWithCompletionHandler:(id /* block */)arg1;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginUUID:(id)arg4 queue:(id)arg5 factory:(id)arg6;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5;
- (bool)isAppExtensionHost;
- (bool)isSignedWithDeveloperID:(id)arg1;
- (id)managerInterface;
- (id)managerObjectFactory;
- (id)managerProtocol;
- (id /* block */)pendingDisposeCompletion;
- (id)pluginType;
- (id)queue;
- (int)requiredEntitlement;
- (void)sendExtensionFailed;
- (id)sendFailedTimer;
- (id)sessionContext;
- (id)sessionRequestIdentifier;
- (void)setAppsUpdateEnding:(bool)arg1;
- (void)setAppsUpdateStarted:(bool)arg1;
- (void)setExtension:(id)arg1;
- (void)setPendingDisposeCompletion:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setSendFailedTimer:(id)arg1;
- (void)setSessionContext:(id)arg1;
- (void)setSessionRequestIdentifier:(id)arg1;
- (bool)shouldAllowUnentitledExtension:(id)arg1;
- (void)sleepWithCompletionHandler:(id /* block */)arg1;
- (void)startWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateConfiguration:(id)arg1;
- (id)uuids;
- (void)wakeup;

@end
