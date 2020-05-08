/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDeletedObject : NSObject <HDCoding, NSSecureCoding> {
    NSUUID * _UUID;
    long long  _externalSyncObjectCode;
    NSDictionary * _metadata;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long externalSyncObjectCode;
@property (readonly) unsigned long long hash;
@property (copy) NSDictionary *metadata;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_deletedObjectWithUUID:(id)arg1 metadata:(id)arg2;
+ (id)_metadataWithSyncIdentifier:(id)arg1 syncVersion:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)externalSyncObjectCode;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (void)setExternalSyncObjectCode:(long long)arg1;
- (void)setMetadata:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end
