/* Generated by EzioChiu.
 */

@protocol SUIKSearchResultsCollectionViewControllerDelegate

@required

- (void)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 didSelectURL:(NSURL *)arg2;
- (UIImage *)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 iconForCategory:(NSString *)arg2;
- (long long)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 sortCategory1:(NSString *)arg2 sortCategory2:(NSString *)arg3;

@optional

- (bool)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 shouldShowCategory:(NSString *)arg2;

@end