/* Generated by EzioChiu.
 */

@protocol SBSwitcherContentViewControllerDataSource <NSObject>

@required

- (NSArray *)appLayoutsForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (long long)sbActiveInterfaceOrientation;
- (long long)shadowStyleForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (SBTransitionSwitcherModifierEvent *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 transitionEventForContext:(SBWorkspaceApplicationSceneTransitionContext *)arg2 identifier:(NSUUID *)arg3 phase:(unsigned long long)arg4 animated:(bool)arg5;
- (SBTransitionSwitcherModifierEvent *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 transitionEventForLayoutState:(SBMainDisplayLayoutState *)arg2 identifier:(NSUUID *)arg3 phase:(unsigned long long)arg4 animated:(bool)arg5;
- (long long)switcherInterfaceOrientationForContentController:(id <SBSwitcherContentViewControlling>)arg1;

@optional

- (SBAppLayout *)activeTransientOverlayPresentedAppLayoutForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (SBAppLayout *)appLayoutForWorkspaceTransientOverlay:(SBWorkspaceTransientOverlay *)arg1;
- (long long)backdropInterfaceStyleForContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (SBWorkspaceTransientOverlay *)createWorkspaceTransientOverlayForAppLayout:(SBAppLayout *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForInlineAppExposeItemAspectFill:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemWithRole:(long long)arg1 inMainAppLayout:(SBAppLayout *)arg2 interfaceOrientation:(long long)arg3;
- (long long)homeScreenInterfaceOrientation;
- (SBIconView *)iconViewForIconIdentifier:(NSString *)arg1;
- (bool)isInAppStatusBarRequestedHiddenForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (SBWindow *)mainSwitcherWindow;
- (NSArray *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 hiddenAppLayoutsForBundleIdentifier:(NSString *)arg2;
- (bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 isAppLayoutHigherPriorityInTetheredSwitcher:(SBAppLayout *)arg2;
- (bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 shouldMorphToPiPForTransitionContext:(SBWorkspaceApplicationSceneTransitionContext *)arg2;
- (bool)switcherContentControllerReloadsSnapshotsForActiveInterfaceOrientationChange:(id <SBSwitcherContentViewControlling>)arg1;
- (SBTransientOverlayViewController *)viewControllerForTransientOverlayAppLayout:(SBAppLayout *)arg1;

@end
