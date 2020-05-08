/* Generated by EzioChiu.
 */

@protocol CKDContextInfoProvider <NSObject>

@required

- (NSString *)applicationBundleID;
- (NSString *)applicationBundleIDForPush;
- (NSString *)applicationBundleIDForServer;
- (NSString *)applicationFrameworkCachesDirectory;
- (NSString *)applicationPackageStagingDirectory;
- (NSString *)applicationVersion;
- (NSString *)apsEnvironmentString;
- (NSString *)associatedApplicationBundleID;
- (CKDZoneGatekeeper *)backgroundZoneGatekeeper;
- (NSURL *)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (bool)bypassPCSEncryption;
- (bool)canAccessProtectionData;
- (bool)canAuthWithCloudKit;
- (CKDServerConfiguration *)config;
- (CKContainerID *)containerID;
- (NSString *)containerScopedUserID;
- (long long)contextType;
- (NSString *)deviceIDForOperation:(CKDOperation *)arg1;
- (NSString *)deviceName;
- (void)fetchConfigurationForOperation:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: CKDOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKDServerConfiguration *, NSError *, void*
- (void)fetchImportantUserIDsForOperation:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 9: CKDOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)fetchPrivateURLForServerType:(void *)arg1 operation:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: long long, CKDOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)fetchPublicURLForServerType:(void *)arg1 operation:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: long long, CKDOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)fetchServerEnvironmentForOperation:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: CKDOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (CKDFlowControlManager *)flowControlManager;
- (CKDZoneGatekeeper *)foregroundZoneGatekeeper;
- (NSString *)hardwareID;
- (bool)hasSystemServiceEntitlement;
- (NSString *)languageCode;
- (CKDPCSManager *)pcsManager;
- (void)performRequest:(CKDURLRequest *)arg1;
- (NSString *)personaID;
- (NSString *)processName;
- (NSString *)regionCode;
- (NSString *)sourceApplicationBundleID;

@end
