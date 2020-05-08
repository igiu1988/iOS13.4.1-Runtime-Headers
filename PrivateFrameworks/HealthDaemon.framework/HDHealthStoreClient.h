/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthStoreClient : NSObject {
    HDXPCClient * _XPCClient;
    HDClientAuthorizationOracle * _authorizationOracle;
    HKHealthStoreConfiguration * _configuration;
    NSString * _defaultSourceBundleIdentifier;
    HDProfile * _profile;
    NSString * _sourceBundleIdentifier;
}

@property (readonly) HDXPCClient *XPCClient;
@property (readonly) HDClientAuthorizationOracle *authorizationOracle;
@property (readonly, copy) HKHealthStoreConfiguration *configuration;
@property (readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *defaultSourceBundleIdentifier;
@property (readonly) _HKEntitlements *entitlements;
@property (readonly) HDProfile *profile;
@property (readonly, copy) NSString *sourceBundleIdentifier;

- (void).cxx_destruct;
- (id)XPCClient;
- (id)_watchKitAvailabilityFilter;
- (id)authorizationOracle;
- (id)baseDataEntityEncodingOptions;
- (id)configuration;
- (id)connection;
- (id)defaultSourceBundleIdentifier;
- (id)entitlements;
- (id)filterWithQueryFilter:(id)arg1 objectType:(id)arg2;
- (bool)hasEntitlement:(id)arg1;
- (bool)hasPrivateMetadataAccess;
- (bool)hasRequiredEntitlement:(id)arg1 error:(id*)arg2;
- (id)initWithXPCClient:(id)arg1 configuration:(id)arg2 profile:(id)arg3;
- (id)profile;
- (bool)shouldBypassAuthorization;
- (id)sourceBundleIdentifier;
- (id)sourceVersionWithDaemon:(id)arg1;
- (id)valueForEntitlement:(id)arg1;
- (bool)verifyHealthRecordsPermissionGrantedWithError:(id*)arg1;

@end
