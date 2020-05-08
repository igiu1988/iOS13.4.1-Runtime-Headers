/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBMutableCloudDatabaseConfiguration : HMBCloudDatabaseConfiguration

@property (nonatomic, retain) HMFScheduler *apsRegistrationScheduler;
@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property (getter=isManateeContainer) bool manateeContainer;
@property (copy) NSString *sourceApplicationBundleIdentifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
