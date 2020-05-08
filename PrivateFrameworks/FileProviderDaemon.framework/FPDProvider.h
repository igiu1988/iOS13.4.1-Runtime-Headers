/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDProvider : NSObject {
    NSSet * _blacklistedProcessNames;
    FPDProviderDescriptor * _descriptor;
    NSObject<OS_dispatch_queue> * _domainQueue;
    NSMutableDictionary * _domainsByID;
    NSURL * _domainsPlistURL;
    bool  _invalidated;
    FPDExtensionManager * _manager;
    NSURL * _providerPlistURL;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _requestedExtendedAttributes;
    FPDServer * _server;
    NSURL * _supportURL;
}

@property (nonatomic, readonly) FPDExtension *asAppExtensionBackedProvider;
@property (nonatomic, retain) NSSet *blacklistedProcessNames;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) FPDProviderDescriptor *descriptor;
@property (getter=isDisabledByFPFSSettings, nonatomic, readonly) bool disabledByFPFSSettings;
@property (nonatomic, readonly) NSMutableDictionary *domainsByID;
@property (nonatomic, readonly) NSURL *domainsPlistURL;
@property (nonatomic, readonly) NSArray *extensionStorageURLs;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) bool isAppExtensionReachable;
@property (nonatomic, readonly) FPDExtensionManager *manager;
@property (nonatomic, readonly) NSDictionary *nsDomainsByID;
@property (nonatomic, readonly) NSArray *providedItemsURLs;
@property (nonatomic, readonly) FPDProvider *providerIfNotDisabledByFPFSSettings;
@property (nonatomic, readonly) NSURL *providerPlistURL;
@property (nonatomic, readonly) NSString *purposeIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSDictionary *relevantDomainsByID;
@property (nonatomic, retain) NSArray *requestedExtendedAttributes;
@property (nonatomic, readonly) FPDServer *server;
@property (nonatomic, readonly) NSURL *supportURL;
@property (nonatomic, readonly) bool supportsEnumeration;
@property (nonatomic, readonly) bool supportsFPFS;

- (void).cxx_destruct;
- (void)_createSymlinkForDomain:(id)arg1;
- (void)_markDomainIfIndexShouldBeDropped:(id)arg1;
- (id)_recreateDefaultDomainIfNeeded;
- (void)_startOrClearDomain:(id)arg1 completion:(id /* block */)arg2;
- (bool)_supportsFPFS;
- (void)_writeDomainProperties;
- (void)_writeDomainPropertiesIfChangedFrom:(id)arg1;
- (void)addDomain:(id)arg1 byImportingDirectoryAtURL:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)addDomain:(id)arg1 byImportingDirectoryAtURL:(id)arg2 unableToStartup:(bool)arg3 reloadDomain:(bool)arg4 request:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)asAppExtensionBackedProvider;
- (id)blacklistedProcessNames;
- (id)bundleVersion;
- (id)defaultNSDomain;
- (id)description;
- (id)descriptor;
- (id)domainForIdentifier:(id)arg1;
- (id)domainForURL:(id)arg1;
- (id)domainsByID;
- (id)domainsPlistURL;
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(bool)arg2;
- (void)dumpValue:(id)arg1 forKey:(id)arg2 to:(id)arg3;
- (void)enableAllDomainsIfNoUserElection;
- (id)extensionStorageURLs;
- (id)identifier;
- (void)importDomainsFromDisk;
- (id)initWithDescriptor:(id)arg1 server:(id)arg2;
- (void)invalidate;
- (bool)invalidated;
- (bool)isAppExtensionReachable;
- (bool)isDisabledByFPFSSettings;
- (id)manager;
- (id)newDomainFromNSDomain:(id)arg1;
- (id)nsDomainsByID;
- (id)providedItemsURLs;
- (id)providerDomainForNSDomain:(id)arg1;
- (id)providerIfNotDisabledByFPFSSettings;
- (id)providerPlistURL;
- (id)purposeIdentifier;
- (id)queue;
- (id)relevantDomainsByID;
- (void)reloadDomain:(id)arg1 unableToStartup:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)removeAllDomainsForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDomain:(id)arg1 options:(unsigned long long)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)requestedExtendedAttributes;
- (id)server;
- (void)setBlacklistedProcessNames:(id)arg1;
- (void)setEjectable:(bool)arg1 forDomainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setEnabled:(bool)arg1 forDomainIdentifier:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setRequestedExtendedAttributes:(id)arg1;
- (void)startWithCompletion:(id /* block */)arg1;
- (id)supportURL;
- (bool)supportsEnumeration;
- (bool)supportsFPFS;
- (void)writeDomainProperties;

@end
