/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCXPCClient : NSObject <BRCForegroundClient, BRCNotificationPipeDelegate, BRCProcessMonitorDelegate> {
    NSCountedSet * _appLibraries;
    int  _clientPid;
    BRCClientPrivilegesDescriptor * _clientPriviledgesDescriptor;
    NSXPCConnection * _connection;
    bool  _dieOnInvalidate;
    unsigned int  _invalidated;
    unsigned int  _isForeground;
    bool  _isUsingUbiquity;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    BRCAccountSession * _session;
    brc_task_tracker * _tracker;
    struct { 
        unsigned int val[8]; 
    }  auditToken;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, retain) BRCClientPrivilegesDescriptor *clientPriviledgesDescriptor;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) BRMangledID *defaultMangledID;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dieOnInvalidate;
@property (nonatomic, readonly) NSSet *entitledAppLibraryIDs;
@property (nonatomic, readonly) bool hasPrivateSharingInterfaceEntitlement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isSandboxed;
@property (nonatomic) bool isUsingUbiquity;
@property (nonatomic, retain) BRCAccountSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addExternalDocumentReferenceTo:(id)arg1 underParent:(id)arg2 forceReparent:(bool)arg3 reply:(id /* block */)arg4;
- (void)_auditURL:(id)arg1;
- (id)_auditedURLFromPath:(id)arg1;
- (bool)_canCreateAppLibraryWithID:(id)arg1 error:(id*)arg2;
- (id)_createBookmarkWithTarget:(id)arg1 targetPath:(id)arg2 parentPath:(id)arg3 aliasName:(id)arg4 error:(id*)arg5;
- (bool)_entitlementBooleanValueForKey:(id)arg1;
- (id)_entitlementValueForKey:(id)arg1 ofClass:(Class)arg2;
- (bool)_hasAccessToAppLibraryID:(id)arg1 error:(id*)arg2;
- (bool)_hasPrivateIPCEntitlementForSelector:(SEL)arg1 error:(id*)arg2;
- (bool)_isAppLibraryProxyEntitled;
- (bool)_isAppLibraryProxyWithError:(id*)arg1;
- (bool)_isAutomationEntitled;
- (id)_setupAppLibrary:(id)arg1 error:(id*)arg2;
- (void)_setupAppLibraryAndZoneWithID:(id)arg1 recreateDocumentsIfNeeded:(bool)arg2 reply:(id /* block */)arg3;
- (id)_sharingOperationItemFromLookup:(id)arg1 url:(id)arg2 allowDirectory:(bool)arg3 error:(id*)arg4;
- (void)_startDownloadItemsAtURLs:(id)arg1 pos:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id)arg4 reply:(id /* block */)arg5;
- (void)_startMonitoringProcessIfNeeded;
- (void)_startSharingOperationAfterAcceptation:(id)arg1 client:(id)arg2 item:(id)arg3;
- (void)_stopMonitoringProcess;
- (void)_t_resetAllZones:(id)arg1 waitUntilIdle:(bool)arg2 reply:(id /* block */)arg3;
- (void)accessLogicalOrPhysicalURL:(id)arg1 accessKind:(long long)arg2 dbAccessKind:(long long)arg3 asynchronously:(bool)arg4 handler:(id /* block */)arg5;
- (void)addAppLibrary:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)bundleID;
- (bool)canAccessLogicalOrPhysicalURL:(id)arg1 accessKind:(long long)arg2;
- (bool)canAccessPath:(const char *)arg1 accessKind:(long long)arg2;
- (bool)canAccessPhysicalURL:(id)arg1;
- (id)clientPriviledgesDescriptor;
- (BOOL)cloudEnabledStatus;
- (id)connection;
- (id)defaultMangledID;
- (id)description;
- (bool)dieOnInvalidate;
- (void)dumpToContext:(id)arg1;
- (id)entitledAppLibraryIDs;
- (bool)hasPrivateSharingInterfaceEntitlement;
- (id)identifier;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (bool)isSandboxed;
- (bool)isUsingUbiquity;
- (id)issueContainerExtensionForURL:(id)arg1 error:(id*)arg2;
- (void)notificationPipe:(id)arg1 didObserveAppLibrary:(id)arg2;
- (void)notificationPipe:(id)arg1 willObserveAppLibrary:(id)arg2;
- (void)process:(int)arg1 didBecomeForeground:(bool)arg2;
- (void)removeAppLibrary:(id)arg1;
- (id)session;
- (void)setClientPriviledgesDescriptor:(id)arg1;
- (void)setIsUsingUbiquity:(bool)arg1;
- (void)setPrivilegesDescriptor:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setupNonSandboxedAccessForUbiquityContainers:(id)arg1 forBundleID:(id)arg2;
- (void)wait;

@end
