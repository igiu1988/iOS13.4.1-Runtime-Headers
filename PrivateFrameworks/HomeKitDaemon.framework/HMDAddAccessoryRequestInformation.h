/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAddAccessoryRequestInformation : NSObject <NSSecureCoding> {
    HMDAccessory * _accessory;
    HMAccessoryCategory * _accessoryCategory;
    HMSetupAccessoryDescription * _accessoryDescription;
    NSString * _accessoryName;
    NSString * _bundleID;
    HMFTimer * _cleanupTimer;
    NSUUID * _identifier;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly) HMAccessoryCategory *accessoryCategory;
@property (nonatomic, readonly) HMSetupAccessoryDescription *accessoryDescription;
@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) HMFTimer *cleanupTimer;
@property (nonatomic, readonly) NSUUID *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryCategory;
- (id)accessoryDescription;
- (id)accessoryName;
- (id)bundleID;
- (void)cancelCleanupTimer;
- (id)cleanupTimer;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithAccessoryName:(id)arg1 category:(id)arg2 bundleID:(id)arg3 accessoryDescription:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)startCleanupTimerForDelegate:(id)arg1;
- (void)storeIdentifierFromUnassociatedAccessory:(id)arg1 setupCode:(id)arg2;

@end
