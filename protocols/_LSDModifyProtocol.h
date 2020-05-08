/* Generated by EzioChiu.
 */

@protocol _LSDModifyProtocol

@required

- (void)garbageCollectDatabaseWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)installApplication:(void *)arg1 atURL:(void *)arg2 withOptions:(void *)arg3 installType:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSURL *, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rebuildApplicationDatabasesForSystem:(void *)arg1 internal:(void *)arg2 user:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)registerContainerURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, NSError *, void*
- (void)registerExtensionPoint:(void *)arg1 platform:(void *)arg2 withInfo:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned int, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)registerItemInfo:(void *)arg1 alias:(void *)arg2 diskImageAlias:(void *)arg3 bundleURL:(void *)arg4 installationPlist:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 15: LSRegistrationInfo *, NSData *, NSData *, NSURL *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned int, NSArray *, bool, NSError *, void*
- (void)removeHandlerForContentType:(void *)arg1 roles:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeHandlerForURLScheme:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetServerStoreWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setDatabaseIsSeeded:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setHandler:(void *)arg1 version:(void *)arg2 forURLScheme:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, struct LSVersionNumber { unsigned char x1[32]; }, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setHandler:(void *)arg1 version:(void *)arg2 roles:(void *)arg3 forContentType:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: NSString *, struct LSVersionNumber { unsigned char x1[32]; }, unsigned int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setPreferenceValue:(void *)arg1 forKey:(void *)arg2 forApplicationAtURL:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: id, NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)synchronizeWithMobileInstallation;
- (void)uninstallApplication:(void *)arg1 withOptions:(void *)arg2 uninstallType:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)unregisterApplicationAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unregisterBundleUnit:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)unregisterExtensionPoint:(void *)arg1 platform:(void *)arg2 withVersion:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateContainerUnit:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)updateRecordForApp:(void *)arg1 withSINF:(void *)arg2 iTunesMetadata:(void *)arg3 placeholderMetadata:(void *)arg4 sendNotification:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSDictionary *, NSDictionary *, NSDictionary *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
