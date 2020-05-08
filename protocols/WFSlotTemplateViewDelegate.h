/* Generated by EzioChiu.
 */

@protocol WFSlotTemplateViewDelegate <NSObject>

@optional

- (void)slotTemplateView:(WFSlotTemplateView *)arg1 deletePressedOnUnpopulatedSlotWithIdentifier:(WFSlotIdentifier *)arg2;
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 didChangeText:(NSAttributedString *)arg2 forSlotWithIdentifier:(WFSlotIdentifier *)arg3;
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 didDeselectSlotWithIdentifier:(WFSlotIdentifier *)arg2;
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 didEndTypingInSlotWithIdentifier:(WFSlotIdentifier *)arg2;
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 didLongPressSlotWithIdentifier:(WFSlotIdentifier *)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 textAttachmentToSelect:(NSTextAttachment *)arg4;
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 didSelectSlotWithIdentifier:(WFSlotIdentifier *)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 didTapTextAttachment:(NSTextAttachment *)arg2 inSlotWithIdentifier:(WFSlotIdentifier *)arg3;
- (bool)slotTemplateView:(WFSlotTemplateView *)arg1 shouldChangeText:(NSAttributedString *)arg2 forSlotWithIdentifier:(WFSlotIdentifier *)arg3;
- (bool)slotTemplateView:(WFSlotTemplateView *)arg1 shouldLongPressSlotWithIdentifier:(WFSlotIdentifier *)arg2;
- (bool)slotTemplateView:(WFSlotTemplateView *)arg1 shouldTapTextAttachment:(NSTextAttachment *)arg2 inSlotWithIdentifier:(WFSlotIdentifier *)arg3;
- (void)slotTemplateView:(void *)arg1 typingDidCopyWithOriginalBlock:(void *)arg2; // needs 2 arg types, found 6: WFSlotTemplateView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)slotTemplateView:(void *)arg1 typingDidCutWithOriginalBlock:(void *)arg2; // needs 2 arg types, found 6: WFSlotTemplateView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)slotTemplateView:(void *)arg1 typingDidPasteWithOriginalBlock:(void *)arg2; // needs 2 arg types, found 6: WFSlotTemplateView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 willBeginTypingInSlotWithIdentifier:(WFSlotIdentifier *)arg2 usingTextEntry:(UIView<WFSlotTemplateTextEntry> *)arg3 allowMultipleLines:(bool*)arg4;
- (void)slotTemplateViewDidInvalidateSize:(WFSlotTemplateView *)arg1;

@end
