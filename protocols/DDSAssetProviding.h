/* Generated by EzioChiu.
 */

@protocol DDSAssetProviding <NSObject>

@required

- (NSArray *)allContentItemsMatchingQuery:(DDSAssetQuery *)arg1 error:(id*)arg2;
- (NSArray *)assetsForQuery:(DDSAssetQuery *)arg1 errorPtr:(id*)arg2;
- (void)beginDownloadForAssertions:(NSSet *)arg1;
- (NSArray *)contentItemsFromAssets:(NSArray *)arg1 matchingFilter:(DDSAttributeFilter *)arg2;
- (<DDSAssetProvidingDelegate> *)delegate;
- (void)removeAssetsForAssertions:(NSSet *)arg1;
- (void)removeOldAssetsForAssertions:(NSSet *)arg1;
- (void)setDelegate:(id <DDSAssetProvidingDelegate>)arg1;
- (void)updateCatalogForAssetTypes:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
