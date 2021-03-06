/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBFloatingApplicationInlineAppExposeLiveContentOverlayView : NSObject <SBFloatingApplicationLiveContentOverlayView> {
    SBInlineAppExposeContainerViewController * _inlineAppExposeContainerViewController;
}

@property (nonatomic, readonly) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBInlineAppExposeContainerViewController *inlineAppExposeContainerViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureWithWorkspaceEntity:(id)arg1 referenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 interfaceOrientation:(long long)arg3;
- (id)contentOverlayView;
- (id)contentViewController;
- (void)disableAsynchronousRenderingForNextCommit;
- (id)inlineAppExposeContainerViewController;
- (void)invalidate;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (long long)rasterizationStyle;
- (void)setHomeGrabberHidden:(bool)arg1 animated:(bool)arg2;
- (void)setLiveContentRasterizationDisabled:(bool)arg1;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(bool)arg2;
- (void)setStatusBarHidden:(bool)arg1 nubViewHidden:(bool)arg2 animator:(id /* block */)arg3;
- (void)setUsesBrightSceneViewBackgroundMaterial:(bool)arg1;

@end
