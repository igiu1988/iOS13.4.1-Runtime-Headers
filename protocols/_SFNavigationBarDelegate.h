/* Generated by EzioChiu.
 */

@protocol _SFNavigationBarDelegate <NSObject>

@required

- (void)compressedNavigationBarWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarCancelButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarReaderButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarReloadButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarStopLoadingButtonWasTapped:(_SFNavigationBar *)arg1;
- (NSURL *)navigationBarURLForSharing:(_SFNavigationBar *)arg1;

@optional

- (NSUUID *)currentContentUUIDForNavigationBar:(_SFNavigationBar *)arg1;
- (long long)dataOwnerForNavigationBar:(_SFNavigationBar *)arg1;
- (NSItemProvider *)itemProviderForNavigationBar:(_SFNavigationBar *)arg1;
- (void)navigationBar:(_SFNavigationBar *)arg1 didCreateLeadingToolbar:(UIToolbar *)arg2 trailingToolbar:(UIToolbar *)arg3;
- (void)navigationBar:(_SFNavigationBar *)arg1 didProduceNavigationIntent:(_SFNavigationIntent *)arg2;
- (void)navigationBarDidUpdateBackdropEffect:(_SFNavigationBar *)arg1;
- (void)navigationBarDoneButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarFormatMenuButtonBecameUnavailable:(_SFNavigationBar *)arg1;
- (void)navigationBarFormatMenuButtonStartedInteraction:(_SFNavigationBar *)arg1;
- (void)navigationBarFormatMenuButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarMediaCaptureMuteButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarMetricsDidChange:(_SFNavigationBar *)arg1;
- (void)navigationBarURLWasTapped:(_SFNavigationBar *)arg1;

@end
