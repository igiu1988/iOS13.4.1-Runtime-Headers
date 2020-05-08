/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryPairingEvent : HMDLogEvent <HMDAWDLogEvent> {
    NSString * _accessoryCategory;
    NSString * _accessoryModel;
    NSUUID * _accessoryUUID;
    bool  _addOperation;
    bool  _addViaWAC;
    NSString * _appIdentifier;
    unsigned long long  _authMethod;
    long long  _certificationStatus;
    HMDHome * _home;
    NSString * _identifier;
    long long  _linkType;
    bool  _networkRouterAdd;
    bool  _networkRouterReplace;
    HMDAccessory * _pairedAccessory;
    bool  _usedOwnershipProof;
    bool  _usedWiFiPPSK;
    bool  _wacLegacy;
}

@property (nonatomic, copy) NSString *accessoryCategory;
@property (nonatomic, copy) NSString *accessoryModel;
@property (nonatomic, copy) NSUUID *accessoryUUID;
@property (getter=isAddOperation, nonatomic, readonly) bool addOperation;
@property (getter=isAddViaWAC, nonatomic) bool addViaWAC;
@property (nonatomic, copy) NSString *appIdentifier;
@property (nonatomic) unsigned long long authMethod;
@property (nonatomic) long long certificationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long linkType;
@property (getter=isNetworkRouterAdd, nonatomic) bool networkRouterAdd;
@property (getter=isNetworkRouterReplace, nonatomic) bool networkRouterReplace;
@property (nonatomic, retain) HMDAccessory *pairedAccessory;
@property (readonly) Class superclass;
@property (getter=isUsedOwnershipProof, nonatomic) bool usedOwnershipProof;
@property (getter=isUsedWiFiPPSK, nonatomic) bool usedWiFiPPSK;
@property (getter=isWacLegacy, nonatomic) bool wacLegacy;

+ (void)initialize;
+ (id)pairingAccessory:(id)arg1 home:(id)arg2;
+ (id)pairingAccessoryWithDescription:(id)arg1 home:(id)arg2;
+ (id)removingAccessory:(id)arg1 hapAccessory:(id)arg2;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)accessoryCategory;
- (id)accessoryModel;
- (id)accessoryUUID;
- (id)appIdentifier;
- (unsigned long long)authMethod;
- (long long)certificationStatus;
- (id)home;
- (id)identifier;
- (id)initWithAccessoryDescription:(id)arg1 home:(id)arg2;
- (id)initWithUnpairedAccessory:(id)arg1 pairedAccessory:(id)arg2 hapAccessory:(id)arg3 home:(id)arg4 isAddOperation:(bool)arg5;
- (bool)isAddOperation;
- (bool)isAddViaWAC;
- (bool)isNetworkRouterAdd;
- (bool)isNetworkRouterReplace;
- (bool)isUsedOwnershipProof;
- (bool)isUsedWiFiPPSK;
- (bool)isWacLegacy;
- (long long)linkType;
- (id)metricForAWD;
- (id)pairedAccessory;
- (void)pairedAccessory:(id)arg1;
- (void)pairedToServer:(id)arg1 certificationStatus:(long long)arg2 addedViaWAC:(bool)arg3 legacyWAC:(bool)arg4;
- (void)setAccessoryCategory:(id)arg1;
- (void)setAccessoryModel:(id)arg1;
- (void)setAccessoryUUID:(id)arg1;
- (void)setAddViaWAC:(bool)arg1;
- (void)setAddedViaWAC:(bool)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setAuthMethod:(unsigned long long)arg1;
- (void)setAuthenticationMethod:(unsigned long long)arg1;
- (void)setCertificationStatus:(long long)arg1;
- (void)setHome:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLinkType:(long long)arg1;
- (void)setNetworkRouterAdd:(bool)arg1;
- (void)setNetworkRouterReplace:(bool)arg1;
- (void)setPairedAccessory:(id)arg1;
- (void)setUsedOwnershipProof:(bool)arg1;
- (void)setUsedWiFiPPSK:(bool)arg1;
- (void)setWacLegacy:(bool)arg1;
- (id)vendorDetails;

@end