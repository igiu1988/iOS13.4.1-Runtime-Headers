/* Generated by EzioChiu.
 */

@protocol UITextInteraction_AssistantDelegate <UITextAutoscrolling, NSObject>

@required

- (_UIKeyboardTextSelectionController *)activeSelectionController;
- (bool)autoscrolled;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)canBeginDragCursor:(UIDragRecognizer *)arg1;
- (void)checkEditabilityAndSetFirstResponderIfNecessary;
- (void)clearStashedSelection;
- (bool)containerAllowsSelectionTintOnly;
- (bool)containerIsPlainStyleAtom;
- (bool)containerIsTextField;
- (void)didEndSelectionInteraction;
- (bool)didUseStashedSelection;
- (void)endFloatingCursor;
- (bool)expectingCommit;
- (void)extendSelectionToLoupeOrSetToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)extendSelectionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)grabberSuppressionAssertion;
- (bool)hasActiveSelectionInteraction;
- (void)lollipopGestureWithState:(long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg3 forTouchType:(long long)arg4;
- (struct CGPoint { double x1; double x2; })loupeGestureEndPoint;
- (bool)needsGestureUpdate;
- (void)notifyKeyboardSelectionChanged;
- (UITextRange *)rangeForTextReplacement:(UITextRange *)arg1;
- (void)resetWillHandoffLoupeMagnifier;
- (void)scheduleDictationReplacementsForAlternatives:(NSTextAlternatives *)arg1 range:(UITextRange *)arg2;
- (void)scheduleReplacementsForRange:(UITextRange *)arg1 withOptions:(unsigned long long)arg2;
- (void)scrollSelectionToVisible;
- (void)selectWordWithoutShowingCommands;
- (UITextSelectionView *)selectionView;
- (void)setAutomaticSelectionCommandsSuppressedForPointerTouchType:(bool)arg1;
- (void)setAutoscrolled:(bool)arg1;
- (void)setExpectingCommit:(bool)arg1;
- (void)setFirstResponderIfNecessary;
- (void)setFirstResponderIfNecessaryActivatingSelection:(bool)arg1;
- (void)setGestureRecognizers;
- (void)setGrabberSuppressionAssertion:(id)arg1;
- (void)setLoupeGestureEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNeedsGestureUpdate:(bool)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSuppressSystemUI:(bool)arg1;
- (void)showSelectionCommandsForSecondaryClickAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stashCurrentSelection;
- (bool)supportsIndirectInteractions;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateWithMagnifierTerminalPoint:(bool)arg1;
- (bool)useGesturesForEditableContent;
- (bool)usesAsynchronousSelectionController;
- (UIView *)view;
- (bool)viewCouldBecomeEditable:(UIResponder<UITextInput> *)arg1;
- (void)willBeginFloatingCursor:(bool)arg1;
- (void)willBeginSelectionInteraction;
- (bool)willHandoffLoupeMagnifier;

@optional

- (bool)overrideGestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (bool)overrideGestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1;

@end
