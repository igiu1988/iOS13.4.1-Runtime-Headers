/* Generated by EzioChiu.
 */

@protocol WFSlotTemplateTextEntry <WFInputViewMutable, WFInputHintProvider, UITextInput>

@required

- (bool)clearsZeroWhenTyping;
- (UIFont *)font;
- (UIView *)inputHintView;
- (void)insertAttributedText:(NSAttributedString *)arg1;
- (void)setClearsZeroWhenTyping:(bool)arg1;
- (void)setInputHintView:(UIView *)arg1;

@end
