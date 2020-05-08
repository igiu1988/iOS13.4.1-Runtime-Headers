/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIViewInteractionController : NSObject <TVPreviewInteractionController, UIContextMenuInteractionDelegate_Private> {
    UIContextMenuInteraction * _interaction;
    IKViewElement * _presentingElement;
    UIView * _presentingView;
    UIViewController * _presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIContextMenuInteraction *interaction;
@property (nonatomic) IKViewElement *presentingElement;
@property (nonatomic, readonly) UIView *presentingView;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (readonly) Class superclass;

+ (id)getHighlightedView;
+ (void)setContextMenuTemplateInterface:(id)arg1;
+ (void)updateContextMenuWithMenuItems:(id)arg1;

- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (id)_getPreviewViewControllerWithElement:(id)arg1;
- (id)_getViewAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_getViewElementWithContextMenuAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)dismissInteractionView;
- (id)initWithPresentingViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;
- (id)interaction;
- (id)presentingElement;
- (id)presentingView;
- (id)presentingViewController;
- (void)setInteraction:(id)arg1;
- (void)setPresentingElement:(id)arg1;
- (void)updatePresentingElement:(id)arg1;

@end
