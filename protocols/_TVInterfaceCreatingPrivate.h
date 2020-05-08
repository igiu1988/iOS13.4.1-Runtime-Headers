/* Generated by EzioChiu.
 */

@protocol _TVInterfaceCreatingPrivate <TVInterfaceCreating>

@optional

- (Class)_collectionViewCellClassForIKElement:(IKViewElement *)arg1;
- (TVImageProxy *)_imageProxyForElement:(TVViewElement *)arg1;
- (TVImageProxy *)_imageProxyForIKElement:(IKViewElement *)arg1 withLayout:(TVImageLayout *)arg2;
- (UINavigationController *)_navigationControllerForTabIdentifier:(NSString *)arg1;
- (void)_parseAppConfigurationForElement:(TVViewElement *)arg1;
- (void)_parseAppConfigurationForIKElement:(IKViewElement *)arg1;
- (NSURL *)_styleSheetURLForTemplate:(NSString *)arg1;
- (UIViewController *)_viewControllerForIKElement:(IKViewElement *)arg1 existingViewController:(UIViewController *)arg2;
- (UIView *)_viewForIKElement:(IKViewElement *)arg1 existingView:(UIView *)arg2;

@end
