/* Generated by EzioChiu.
 */

@protocol PXPerson <NSObject>

@required

+ (void)px_loadRepresentativeFacesForPersons:(id <NSFastEnumeration>)arg1;

- (bool)isPersonModel;
- (bool)isVerified;
- (NSString *)name;
- (unsigned long long)numberOfAssets;
- (NSString *)px_displayName;
- (NSString *)px_localIdentifier;
- (NSString *)px_localizedName;
- (void)requestFaceTileImageWithTargetSize:(void *)arg1 cropFactor:(void *)arg2 style:(void *)arg3 cacheResult:(void *)arg4 boundFaceRect:(void *)arg5 completionBlock:(void *)arg6; // needs 6 arg types, found 13: struct CGSize { double x1; double x2; }, unsigned long long, unsigned long long, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, NSError *, void*

@optional

- (NSDate *)px_keyPhotoDate;

@end
