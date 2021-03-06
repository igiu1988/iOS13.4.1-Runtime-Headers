/* Generated by EzioChiu.
 */

@protocol _UISearchBarVisualProvidingDelegate <NSObject>

@required

- (_UINavigationControllerPalette *)_containingNavigationPalette;
- (UISearchBarTextField *)_searchBarTextField;
- (UISearchController *)_searchController;
- (UIView *)_viewForChildViews;
- (long long)barPosition;
- (<UISearchBarDelegate><UISearchBarDelegate_Private> *)delegate;
- (void)setDelegate:(id <UISearchBarDelegate><UISearchBarDelegate_Private>)arg1;
- (UITextInputTraits *)textInputTraits;

@end
