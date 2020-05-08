/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CacheDeleteVolume : NSObject {
    unsigned int  _block_size;
    int  _dev;
    NSString * _fsType;
    unsigned long long  _initialFreespace;
    bool  _isRoot;
    NSString * _mountPoint;
}

@property (readonly) unsigned int block_size;
@property (readonly) int dev;
@property (nonatomic, readonly) NSString *fsType;
@property (readonly) unsigned long long initialFreespace;
@property (readonly) bool isRoot;
@property (nonatomic, readonly) NSString *mountPoint;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSDictionary *thresholds;

+ (id)mountPointForUUID:(id)arg1;
+ (id)rootVolume;
+ (long long)stateForPath:(id)arg1;
+ (id)validateVolumeAtPath:(id)arg1;
+ (id)volumeWithMountpoint:(id)arg1;
+ (id)volumeWithPath:(id)arg1;

- (void).cxx_destruct;
- (id)FSEventsUUID;
- (unsigned long long)amountPurged;
- (unsigned int)block_size;
- (id)description;
- (int)dev;
- (unsigned long long)freespace;
- (id)fsType;
- (unsigned long long)hash;
- (id)initWithPath:(id)arg1;
- (unsigned long long)initialFreespace;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTo:(id)arg1;
- (bool)isRoot;
- (id)mountPoint;
- (unsigned long long)size;
- (long long)state;
- (id)thresholds;
- (id)uuid;
- (bool)validate;

@end
