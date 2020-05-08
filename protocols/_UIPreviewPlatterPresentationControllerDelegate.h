/* Generated by EzioChiu.
 */

@protocol _UIPreviewPlatterPresentationControllerDelegate <UIAdaptivePresentationControllerDelegate>

@required

- (NSArray *)_accessoryViewsForPreviewPlatterPresentationController:(_UIPreviewPlatterPresentationController *)arg1;
- (void)_previewPlatterPresentationController:(_UIPreviewPlatterPresentationController *)arg1 beginDragWithTouch:(UITouch *)arg2;
- (void)_previewPlatterPresentationControllerDidBeginPanInteraction:(_UIPreviewPlatterPresentationController *)arg1;
- (void)_previewPlatterPresentationControllerDidEndPanInteraction:(_UIPreviewPlatterPresentationController *)arg1;
- (void)_previewPlatterPresentationControllerDidTapPreview:(_UIPreviewPlatterPresentationController *)arg1;
- (void)_previewPlatterPresentationControllerWantsToBeDismissed:(void *)arg1 withReason:(void *)arg2 alongsideActions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 12: _UIPreviewPlatterPresentationController *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (UIView *)actualPlatterContainerViewForPresentationController:(_UIPreviewPlatterPresentationController *)arg1;

@end
