/* Generated by EzioChiu.
 */

@protocol PDCloudStoreZoneManagerDataSource <NSObject>

@required

- (NSSet *)allPossibleSubscriptionIdentifiers;
- (NSSet *)allPossibleZoneNames;
- (NSSet *)cloudStoreZonesForCloudStoreItem:(NSObject<PKCloudStoreCoding> *)arg1;
- (NSSet *)cloudStoreZonesForCloudStoreItemType:(unsigned long long)arg1;
- (PKCloudStoreZone *)cloudStoreZonesForCloudStoreItemType:(unsigned long long)arg1 recordName:(NSString *)arg2;
- (NSString *)containerName;
- (NSString *)subscriptionIdentifierForZoneName:(NSString *)arg1;
- (NSString *)zoneNameForSubscriptionIdentifier:(NSString *)arg1;

@end
