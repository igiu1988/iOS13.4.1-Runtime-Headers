/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncFetchOperationResult : NSObject <NSCopying> {
    HDCloudSyncOperationConfiguration * _configuration;
    HDCloudSyncZone * _primaryPushZone;
    long long  _status;
    NSDictionary * _zonesByIdentifier;
}

@property (nonatomic, readonly) HDCloudSyncOperationConfiguration *configuration;
@property (nonatomic, readonly) long long minimumSupportedProtocolVersion;
@property (nonatomic, readonly) HDCloudSyncZone *primaryPushZone;
@property (nonatomic, readonly) NSSet *pullZones;
@property (nonatomic, readonly) NSSet *seizedZones;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSDictionary *zonesByIdentifier;

- (void).cxx_destruct;
- (id)_storeDescriptionForZone:(id)arg1;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithStatus:(long long)arg1 configuration:(id)arg2 zonesByIdentifier:(id)arg3;
- (id)masterZoneForContainerID:(id)arg1;
- (long long)minimumSupportedProtocolVersion;
- (id)primaryPushZone;
- (id)pullZones;
- (id)seizedZones;
- (long long)status;
- (id)zonesByIdentifier;

@end
