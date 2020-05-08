/* Generated by EzioChiu.
 */

@protocol UITextInput_Internal

@required

- (unsigned int)_characterAfterCaretSelection;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterInRelationToPosition:(UITextPosition *)arg1 amount:(int)arg2;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (UITextPosition *)_clampedpositionFromPosition:(UITextPosition *)arg1 offset:(int)arg2;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(bool)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToEndOfParagraph;
- (void)_deleteToStartOfLine;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (UITextPosition *)_findPleasingWordBoundaryFromPosition:(UITextPosition *)arg1;
- (UIFont *)_fontForCaretSelection;
- (UITextRange *)_fullRange;
- (NSString *)_fullText;
- (bool)_hasMarkedText;
- (bool)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(UITextPosition *)arg1;
- (UITextRange *)_intersectionOfRange:(UITextRange *)arg1 andRange:(UITextRange *)arg2;
- (bool)_isEmptySelection;
- (void)_moveCurrentSelection:(int)arg1;
- (UITextInputArrowKeyHistory *)_moveDown:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveLeft:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveRight:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfDocument:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfLine:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfParagraph:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfWord:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfDocument:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfLine:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfParagraph:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfWord:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveUp:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (NSString *)_normalizedStringForRangeComparison:(NSString *)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nsrangeForTextRange:(UITextRange *)arg1;
- (UITextPosition *)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(UITextPosition *)arg2;
- (UITextPosition *)_positionFromPosition:(UITextPosition *)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(bool)arg4;
- (UITextPosition *)_positionFromPosition:(UITextPosition *)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (UITextPosition *)_positionWithinRange:(UITextRange *)arg1 farthestInDirection:(long long)arg2;
- (UIResponder<UITextInput> *)_proxyTextInput;
- (bool)_range:(UITextRange *)arg1 containsRange:(UITextRange *)arg2;
- (bool)_range:(UITextRange *)arg1 intersectsRange:(UITextRange *)arg2;
- (UITextRange *)_rangeFromCurrentRangeWithDelta:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (UITextRange *)_rangeOfEnclosingWord:(UITextPosition *)arg1;
- (UITextRange *)_rangeOfLineEnclosingPosition:(UITextPosition *)arg1;
- (UITextRange *)_rangeOfParagraphEnclosingPosition:(UITextPosition *)arg1;
- (UITextRange *)_rangeOfSentenceEnclosingPosition:(UITextPosition *)arg1;
- (UITextRange *)_rangeOfSmartSelectionIncludingRange:(UITextRange *)arg1;
- (UITextRange *)_rangeOfText:(NSString *)arg1 endingAtPosition:(UITextPosition *)arg2;
- (UITextRange *)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(UITextPosition *)arg2;
- (UITextRange *)_rangeSpanningTextUnit:(long long)arg1 andPosition:(UITextPosition *)arg2;
- (void)_replaceCurrentWordWithText:(NSString *)arg1;
- (void)_replaceDocumentWithText:(NSString *)arg1;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_selectAll;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedNSRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedRangeWithinMarkedText;
- (long long)_selectionAffinity;
- (bool)_selectionAtDocumentEnd;
- (bool)_selectionAtDocumentStart;
- (bool)_selectionAtWordStart;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_setAttributedMarkedText:(NSAttributedString *)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setGestureRecognizers;
- (void)_setMarkedText:(NSString *)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setSelectedTextRange:(UITextRange *)arg1 withAffinityDownstream:(bool)arg2;
- (void)_setSelectionToPosition:(UITextPosition *)arg1;
- (bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(NSString *)arg2 checkAutocorrection:(bool)arg3;
- (UIColor *)_textColorForCaretSelection;
- (UITextRange *)_textRangeFromNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_transpose;
- (void)_unmarkText;
- (bool)_usesAsynchronousProtocol;
- (NSString *)_wordContainingCaretSelection;

@optional

- (bool)_isInteractiveTextSelectionDisabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lastRectForRange:(UITextRange *)arg1;
- (void)_setInternalGestureRecognizers;
- (bool)_shouldSuppressSelectionHandles;
- (UIView<UITextInputPrivate> *)_textSelectingContainer;

@end
