/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFLibraryWorkflowCell : WFBaseLibraryWorkflowCell {
    long long  _dragState;
    UIButton * _editButton;
    bool  _hideEditButton;
    bool  _jittering;
    WFLibraryWorkflowCellSelectionView * _selectionView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) <WFLibraryWorkflowCellDelegate> *delegate;
@property (nonatomic) long long dragState;
@property (nonatomic, readonly) UIButton *editButton;
@property (nonatomic) bool hideEditButton;
@property (getter=isJittering, nonatomic) bool jittering;
@property (nonatomic, copy) WFLibraryLayoutMetrics *layoutMetrics;
@property (nonatomic, readonly) WFLibraryWorkflowCellSelectionView *selectionView;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UIBezierPath *visiblePathForDragging;

+ (id)jitterRotationAnimation;
+ (id)jitterXTranslationAnimation;
+ (id)jitterYTranslationAnimation;

- (void).cxx_destruct;
- (id)accessibilityCustomActions;
- (bool)accessibilityDeleteWorkflow;
- (bool)accessibilityDuplicateWorkflow;
- (bool)accessibilityEditWorkflow;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityPath;
- (bool)accessibilityPerformMagicTap;
- (bool)accessibilityRenameWorkflow;
- (unsigned long long)accessibilityTraits;
- (void)cancelButtonPressed:(id)arg1;
- (long long)dragState;
- (void)dragStateDidChange:(long long)arg1;
- (id)editButton;
- (void)editButtonPressed:(id)arg1;
- (bool)hideEditButton;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (bool)isJittering;
- (void)layoutSubviews;
- (long long)lineCountForLabel:(id)arg1 labelType:(unsigned long long)arg2;
- (void)prepareForReuse;
- (id)selectionView;
- (void)setDragState:(long long)arg1;
- (void)setHideEditButton:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setJittering:(bool)arg1;
- (void)setLayoutMetrics:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setWorkflowDescription:(id)arg1;
- (void)setWorkflowName:(id)arg1;
- (id)subtitleFont;
- (id)subtitleLabel;
- (double)subtitleLineHeightMultiple;
- (id)textAttributesForLabelType:(unsigned long long)arg1 shouldTruncate:(bool)arg2;
- (id)titleFont;
- (id)titleLabel;
- (double)titleLineHeightMultiple;
- (void)updateEditButtonVisibility;
- (void)updateSelectionState;
- (id)visiblePathForDragging;

@end
