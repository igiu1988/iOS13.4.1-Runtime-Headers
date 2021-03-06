/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMNetworkRouterProfile : HMAccessoryProfile <_HMNetworkRouterProfileDelegate> {
    <HMNetworkRouterProfileDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMNetworkRouterProfileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_isConnected;
@property (nonatomic, readonly, copy) NSString *hf_statusLocalizedDescription;
@property (readonly) unsigned long long networkStatus;
@property (getter=isSatellite, readonly) bool satellite;
@property (readonly) NSArray *satelliteProfiles;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)delegate;
- (id)description;
- (id)identifiersForSatelliteProfiles;
- (id)initWithNetworkRouterProfile:(id)arg1;
- (bool)isSatellite;
- (id)networkRouterProfile;
- (unsigned long long)networkStatus;
- (void)routerProfileDidUpdateIdentifiersForSatellites:(id)arg1;
- (void)routerProfileDidUpdateNetworkStatus:(id)arg1;
- (id)satelliteProfiles;
- (id)services;
- (void)setDelegate:(id)arg1;
- (void)setIdentifiersForSatelliteProfiles:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_iconDescriptor;
- (bool)hf_isConnected;
- (id)hf_statusLocalizedDescription;

@end
