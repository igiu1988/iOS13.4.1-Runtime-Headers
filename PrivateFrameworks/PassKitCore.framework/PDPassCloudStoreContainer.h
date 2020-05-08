/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDPassCloudStoreContainer : PDCloudStoreContainer <PDCloudStoreZoneManagerDataSource> {
    bool  _canInitializeContainer;
    <PDCloudStorePassManager> * _passManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canInitializeContainer;
- (id)_catalogOfRecord;
- (bool)_isPassCatalogItemFromRecordType:(id)arg1;
- (bool)_isPassItemFromRecordType:(id)arg1;
- (bool)_isRemoteAssetItemFromRecordType:(id)arg1;
- (id)_ubiquitousCatalogOfRecord;
- (id)allPossibleSubscriptionIdentifiers;
- (id)allPossibleZoneNames;
- (bool)canInitializeContainer;
- (void)cloudStoreAccountChanged:(id)arg1;
- (id)cloudStoreZonesForCloudStoreItem:(id)arg1;
- (id)cloudStoreZonesForCloudStoreItemType:(unsigned long long)arg1;
- (id)cloudStoreZonesForCloudStoreItemType:(unsigned long long)arg1 recordName:(id)arg2;
- (id)containerName;
- (id)initWithDataSource:(id)arg1 passManager:(id)arg2;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 request:(id)arg3 completion:(id /* block */)arg4;
- (void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)shouldFetchAndStoreCloudDataAtStartupWithCompletion:(id /* block */)arg1;
- (id)subscriptionIdentifierForZoneName:(id)arg1;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 includeServerData:(bool)arg3 groupName:(id)arg4 groupNameSuffix:(id)arg5 qualityOfService:(long long)arg6 completion:(id /* block */)arg7;
- (id)zoneNameForSubscriptionIdentifier:(id)arg1;

@end