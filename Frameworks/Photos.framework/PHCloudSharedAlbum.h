/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCloudSharedAlbum : PHAssetCollection {
    short  _cloudAlbumSubtype;
    bool  _cloudMultipleContributorsEnabled;
    NSNumber * _cloudOwnerEmailKey;
    NSString * _cloudOwnerFirstName;
    NSString * _cloudOwnerFullName;
    NSString * _cloudOwnerLastName;
    bool  _owned;
}

@property (nonatomic, readonly) short cloudAlbumSubtype;
@property (getter=isCloudMultipleContributorsEnabled, nonatomic, readonly) bool cloudMultipleContributorsEnabled;
@property (nonatomic, readonly, retain) NSNumber *cloudOwnerEmailKey;
@property (nonatomic, readonly, retain) NSString *cloudOwnerFirstName;
@property (nonatomic, readonly, retain) NSString *cloudOwnerFullName;
@property (nonatomic, readonly, retain) NSString *cloudOwnerLastName;
@property (getter=isOwned, nonatomic, readonly) bool owned;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)canPerformEditOperation:(long long)arg1;
- (Class)changeRequestClass;
- (short)cloudAlbumSubtype;
- (id)cloudOwnerEmailKey;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerFullName;
- (id)cloudOwnerLastName;
- (bool)collectionHasFixedOrder;
- (id)description;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isCloudMultipleContributorsEnabled;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isOwned;
- (bool)isOwnedCloudSharedAlbum;
- (id)localizedSharedByLabelAllowsEmail:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)px_debugDictionary;

@end
