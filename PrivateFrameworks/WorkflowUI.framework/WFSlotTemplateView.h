/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFSlotTemplateView : UIView <UIGestureRecognizerDelegate, WFSlotTemplateTextStorageDelegate, WFSlotTemplateTypingTextViewDelegate, WFTextAttachmentInteractionDelegate> {
    NSArray * _accessibilityElements;
    WFTextAttachmentInteraction * _attachmentInteraction;
    <WFSlotTemplateViewDelegate> * _delegate;
    bool  _enabled;
    double  _horizontalPadding;
    unsigned long long  _lastLayoutManagerLineCount;
    WFSlotTemplateLayoutManager * _layoutManager;
    NSTextContainer * _textContainer;
    WFSlotTemplateTextStorage * _textStorage;
    bool  _typingAllowsMultipleLines;
    WFTextAttachmentInteraction * _typingAttachmentInteraction;
    WFSlotTemplateLayoutManager * _typingLayoutManager;
    WFSlotIdentifier * _typingSlotIdentifier;
    NSTextContainer * _typingTextContainer;
    WFSlotTemplateTextStorage * _typingTextStorage;
    WFSlotTemplateTypingTextView * _typingTextView;
}

@property (nonatomic, retain) NSArray *accessibilityElements;
@property (nonatomic, retain) WFTextAttachmentInteraction *attachmentInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFSlotTemplateViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *disabledSlotBackgroundColor;
@property (nonatomic, readonly) UIColor *disabledSlotTitleColor;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) bool extendSlotBackgroundOffEdges;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) unsigned long long lastLayoutManagerLineCount;
@property (nonatomic, retain) WFSlotTemplateLayoutManager *layoutManager;
@property (nonatomic, copy) NSParagraphStyle *paragraphStyle;
@property (nonatomic, readonly) WFSlotIdentifier *selectedSlotIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) NSTextContainer *textContainer;
@property (nonatomic, retain) WFSlotTemplateTextStorage *textStorage;
@property (nonatomic) bool typingAllowsMultipleLines;
@property (nonatomic, retain) WFTextAttachmentInteraction *typingAttachmentInteraction;
@property (nonatomic, retain) WFSlotTemplateLayoutManager *typingLayoutManager;
@property (nonatomic, readonly) WFSlotIdentifier *typingSlotIdentifier;
@property (nonatomic, retain) NSTextContainer *typingTextContainer;
@property (nonatomic, retain) WFSlotTemplateTextStorage *typingTextStorage;
@property (nonatomic, retain) WFSlotTemplateTypingTextView *typingTextView;
@property (nonatomic, retain) UIFont *unpopulatedFont;

+ (double)heightForWidth:(double)arg1 withContents:(id)arg2 horizontalPadding:(double)arg3 font:(id)arg4 unpopulatedFont:(id)arg5 paragraphStyle:(id)arg6;

- (void).cxx_destruct;
- (void)_deselectSlotAndNotifyDelegate:(bool)arg1;
- (void)_selectSlot:(id)arg1 notifyDelegate:(bool)arg2;
- (id)accessibilityElements;
- (void)accessibilityShiftFocusBackToView;
- (id)attachmentInteraction;
- (void)beginTypingInSlotWithIdentifier:(id)arg1;
- (id)delegate;
- (void)deselectSlot;
- (id)disabledSlotBackgroundColor;
- (id)disabledSlotTitleColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)endTyping;
- (bool)extendSlotBackgroundOffEdges;
- (id)firstSlotIdentifierWithParameterKey:(id)arg1;
- (id)font;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleTouch:(id)arg1;
- (bool)hasSlotWithIdentifier:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)horizontalPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (bool)isEnabled;
- (unsigned long long)lastLayoutManagerLineCount;
- (id)layoutManager;
- (void)layoutSubviews;
- (id)paragraphStyle;
- (void)performFadeTransition:(id /* block */)arg1;
- (void)positionTypingAboveSlot:(id)arg1;
- (void)resetTextView;
- (void)selectSlotWithIdentifier:(id)arg1;
- (id)selectedSlot;
- (id)selectedSlotIdentifier;
- (void)setAccessibilityElements:(id)arg1;
- (void)setAttachmentInteraction:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContents:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDisabledSlotTitleColor:(id)arg1 backgroundColor:(id)arg2 animated:(bool)arg3;
- (void)setEnabled:(bool)arg1;
- (void)setExtendSlotBackgroundOffEdges:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHorizontalPadding:(double)arg1;
- (void)setLastLayoutManagerLineCount:(unsigned long long)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setParagraphStyle:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextContainer:(id)arg1;
- (void)setTextStorage:(id)arg1;
- (void)setTypingAllowsMultipleLines:(bool)arg1;
- (void)setTypingAttachmentInteraction:(id)arg1;
- (void)setTypingLayoutManager:(id)arg1;
- (void)setTypingTextContainer:(id)arg1;
- (void)setTypingTextStorage:(id)arg1;
- (void)setTypingTextView:(id)arg1;
- (void)setUnpopulatedFont:(id)arg1;
- (id)slotAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)slotIdentifierForAttachmentInteraction:(id)arg1 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)slotTemplateStorageDidInvalidateDisplay:(id)arg1;
- (void)slotTemplateTypingTextViewDidCopy:(id)arg1 withOriginalBlock:(id /* block */)arg2;
- (void)slotTemplateTypingTextViewDidCut:(id)arg1 withOriginalBlock:(id /* block */)arg2;
- (void)slotTemplateTypingTextViewDidDelete:(id)arg1;
- (void)slotTemplateTypingTextViewDidPaste:(id)arg1 withOriginalBlock:(id /* block */)arg2;
- (id)slotWithIdentifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRectForSlot:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRectForSlotWithIdentifier:(id)arg1;
- (void)textAttachmentInteraction:(id)arg1 didTapTextAttachment:(id)arg2 inCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)textAttachmentInteraction:(id)arg1 shouldRecognizeTapOnTextAttachment:(id)arg2 inCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)textColor;
- (id)textContainer;
- (id)textStorage;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (bool)typingAllowsMultipleLines;
- (id)typingAttachmentInteraction;
- (id)typingLayoutManager;
- (id)typingParagraphStyleForParagraphStyle:(id)arg1;
- (id)typingSlotIdentifier;
- (id)typingTextContainer;
- (id)typingTextStorage;
- (id)typingTextView;
- (id)unpopulatedFont;
- (void)updateAccessibilityElements;
- (void)updateTintColorInTextStorage;

@end
