/* Generated by EzioChiu.
 */

@protocol HRFeatureRegulatoryPanelDisplayable <NSObject>

@required

- (long long)cellAccessoryType;
- (bool)isInteractive;
- (NSAttributedString *)titleString;
- (NSAttributedString *)valueString;

@optional

- (void)handleUserInteractionWithItemWithHostViewController:(UIViewController *)arg1;
- (void)setUpdateDelegate:(id <HRFeatureRegulatoryPanelDisplayUpdateDelegate>)arg1;
- (<HRFeatureRegulatoryPanelDisplayUpdateDelegate> *)updateDelegate;

@end
