/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUnassociatedMediaAccessory : HMDUnassociatedAccessory <HMFLogging> {
    HMDAccessoryAdvertisement * _advertisement;
}

@property (retain) HMDAccessoryAdvertisement *advertisement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (Class)modelClass;

- (void).cxx_destruct;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (id)advertisement;
- (long long)associationOptions;
- (id)dumpDescription;
- (unsigned long long)hash;
- (id)initWithAdvertisement:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isHAPAirPlay2Accessory;
- (id)logIdentifier;
- (void)setAdvertisement:(id)arg1;
- (void)updateAdvertisementData:(id)arg1;

@end