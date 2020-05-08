/* Generated by EzioChiu.
 */

@protocol INKContentControllerObserver <NSObject>

@required

- (void)contentController:(INKContentController *)arg1 contentDidBecomeAvailable:(INKContent *)arg2 animated:(bool)arg3;
- (void)contentController:(INKContentController *)arg1 didFinishWithContent:(INKContent *)arg2 animated:(bool)arg3;

@optional

- (void)contentController:(INKContentController *)arg1 actionTapped:(INKContent *)arg2;
- (UIImage *)contentController:(INKContentController *)arg1 contentView:(INKContentView *)arg2 iconForCustomizationID:(long long)arg3;
- (void)contentController:(INKContentController *)arg1 contentViewNeedsLayout:(INKContentView *)arg2;

@end
