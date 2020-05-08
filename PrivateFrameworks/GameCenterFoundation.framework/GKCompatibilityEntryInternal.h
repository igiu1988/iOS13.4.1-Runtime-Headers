/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKCompatibilityEntryInternal : GKInternalRepresentation {
    NSNumber * _adamID;
    NSString * _bundleID;
    long long  _platform;
    NSSet * _shortVersions;
    NSSet * _versions;
}

@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) long long platform;
@property (nonatomic, retain) NSSet *shortVersions;
@property (nonatomic, retain) NSSet *versions;

+ (id)secureCodedPropertyKeys;

- (id)adamID;
- (id)bundleID;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)platform;
- (void)setAdamID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setPlatform:(long long)arg1;
- (void)setShortVersions:(id)arg1;
- (void)setVersions:(id)arg1;
- (id)shortVersions;
- (id)versions;

@end
