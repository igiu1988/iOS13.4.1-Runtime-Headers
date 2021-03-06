/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHResourceAvailabilityRequest : PHAvailabilityRequest {
    <PLResourceIdentity> * _resourceIdentity;
}

@property (nonatomic, readonly) <PLResourceIdentity> *resourceIdentity;

- (void).cxx_destruct;
- (id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 resourceIdentity:(id)arg3;
- (id)plistDictionary;
- (id)resourceIdentity;

@end
