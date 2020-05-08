/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDVIPManager : NSObject <EFLoggable, EMVIPManager> {
    EAEmailAddressSet * _cachedEmailAddresses;
    CNContactStore * _contactStore;
    NSUbiquitousKeyValueStore * _keyValueStore;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSObject<OS_dispatch_queue> * _operationQueue;
    NSURL * _plistURL;
    NSMutableDictionary * _vipsByIdentifier;
}

@property (nonatomic, readonly, copy) EAEmailAddressSet *allVIPEmailAddresses;
@property (nonatomic, readonly, copy) NSSet *allVIPs;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasVIPs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUbiquitousKeyValueStore *keyValueStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *operationQueue;
@property (nonatomic, readonly) NSURL *plistURL;
@property (readonly) Class superclass;

+ (id)_contactDescriptors;
+ (id)log;

- (void).cxx_destruct;
- (id)_allVIPEmailAddresses;
- (id)_cloudKeyForIdentifier:(id)arg1;
- (id)_contactForName:(id)arg1 emailAddresses:(id)arg2;
- (id)_contactFromContacts:(id)arg1 matchingMostAddresses:(id)arg2;
- (bool)_isVIPForContact:(id)arg1 orAddresses:(id)arg2;
- (void)_keyValueStoreChanged:(id)arg1;
- (void)_loadVIPs;
- (void)_mergeVIPs;
- (void)_removeVIPsWithIdentifiers:(id)arg1;
- (void)_saveVIPs;
- (void)_saveVIPsLocally;
- (id)_serializedData;
- (void)_synchronizeKVStore;
- (void)_updateCloudWithLocal;
- (void)_updateLocalWithCloud:(id)arg1 refresh:(bool)arg2;
- (id)_validatedCloudVIPFromStore:(id)arg1 withCloudKey:(id)arg2;
- (id)_vipsDictionary;
- (id)allVIPEmailAddresses;
- (id)allVIPs;
- (id)contactStore;
- (void)dealloc;
- (bool)hasVIPs;
- (id)initWithDirectoryURL:(id)arg1;
- (id)initWithDirectoryURL:(id)arg1 keyValueStore:(id)arg2 contactStore:(id)arg3;
- (bool)isVIPAddress:(id)arg1;
- (id)keyValueStore;
- (id)notificationQueue;
- (id)operationQueue;
- (id)plistURL;
- (void)removeVIPsWithEmailAddresses:(id)arg1;
- (void)removeVIPsWithIdentifiers:(id)arg1;
- (void)saveVIPs:(id)arg1;
- (id)vipWithIdentifier:(id)arg1;

@end
