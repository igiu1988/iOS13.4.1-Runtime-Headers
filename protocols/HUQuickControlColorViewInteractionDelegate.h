/* Generated by EzioChiu.
 */

@protocol HUQuickControlColorViewInteractionDelegate <HUQuickControlViewInteractionDelegate>

@required

- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 colorPaletteDidChange:(HFColorPalette *)arg2;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 didSelectColorAtIndexPath:(NSIndexPath *)arg2;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 showAuxiliaryView:(UIView<HUQuickControlAuxiliaryView> *)arg2;
- (void)hideAuxiliaryViewForControlView:(id <HUQuickControlInteractiveView>)arg1;
- (void)presentFullColorViewForControlView:(id <HUQuickControlInteractiveView>)arg1 selectedColorIndexPath:(NSIndexPath *)arg2;

@end
