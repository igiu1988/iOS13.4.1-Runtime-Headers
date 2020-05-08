/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionViewTableCell : UICollectionViewCell <UITable_UITableViewCellDelegate> {
    long long  _accessoryType;
    UIShadowView * _borderShadowBottomView;
    UIShadowView * _borderShadowTopView;
    bool  _borderShadowVisible;
    UICollectionViewLayout * _currentLayout;
    bool  _editing;
    bool  _interactiveMoveEffectsVisible;
    double  _offsetForRevealingDeleteConfirmationButton;
    double  _reorderingCenterX;
    UIView * _selectedBackgroundViewToRestoreWhenInteractiveMoveEnds;
    UITableViewCell * _swipeToDeleteCell;
    UIView * _swipeableView;
    UITableViewCollectionCell * _tableViewCell;
    NSMutableSet * _trackedAnimators;
    bool  _transitioningLayouts;
}

@property (getter=_accessoryBaseColor, nonatomic, readonly) UIColor *accessoryBaseColor;
@property (nonatomic) long long accessoryType;
@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, readonly) bool allowsMultipleSelection;
@property (nonatomic, readonly) bool allowsMultipleSelectionDuringEditing;
@property (getter=_backgroundInset, nonatomic, readonly) double backgroundInset;
@property (nonatomic) bool borderShadowVisible;
@property (getter=_bottomPadding, nonatomic, readonly) double bottomPadding;
@property (nonatomic, readonly) bool canBeEdited;
@property (nonatomic, readonly) bool cellLayoutMarginsFollowReadableWidth;
@property (getter=_cellSafeAreaInsets, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cellSafeAreaInsets;
@property (nonatomic) UICollectionViewLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic) long long editingAccessoryType;
@property (nonatomic, retain) UIView *editingAccessoryView;
@property (getter=_isEditingForSwipeDeletion, nonatomic, readonly) bool editingForSwipeDeletion;
@property (nonatomic, readonly) long long editingStyle;
@property (nonatomic, readonly) double estimatedRowHeight;
@property (nonatomic, readonly) double estimatedSectionFooterHeight;
@property (nonatomic, readonly) double estimatedSectionHeaderHeight;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (getter=_isInModalViewController, nonatomic, readonly) bool inModalViewController;
@property (getter=isInTableLayout, nonatomic, readonly) bool inTableLayout;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) double indentationWidth;
@property (getter=_indexBarExtentFromEdge, nonatomic, readonly) double indexBarExtentFromEdge;
@property (getter=_indexFrame, nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } indexFrame;
@property (nonatomic) bool interactiveMoveEffectsVisible;
@property (nonatomic, retain) UIView *multipleSelectionBackgroundView;
@property (getter=_multiselectCheckmarkColor, nonatomic, readonly) UIColor *multiselectCheckmarkColor;
@property (getter=_numberOfSections, nonatomic, readonly) long long numberOfSections;
@property (getter=_offsetForRevealingDeleteConfirmationButton, setter=_setOffsetForRevealingDeleteConfirmationButton:, nonatomic) double offsetForRevealingDeleteConfirmationButton;
@property (nonatomic, readonly) bool overlapsSectionHeaderViews;
@property (getter=_popoverControllerStyle, nonatomic, readonly) long long popoverControllerStyle;
@property (getter=_rawSectionContentInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } rawSectionContentInset;
@property (getter=_rawSeparatorInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } rawSeparatorInset;
@property (nonatomic, readonly) double rowHeight;
@property (getter=_rowSpacing, nonatomic, readonly) double rowSpacing;
@property (getter=_scrollView, nonatomic, readonly) UIScrollView *scrollView;
@property (getter=_sectionContentInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionContentInset;
@property (getter=_sectionContentInsetFollowsLayoutMargins, nonatomic, readonly) bool sectionContentInsetFollowsLayoutMargins;
@property (getter=_sectionCornerRadius, nonatomic, readonly) double sectionCornerRadius;
@property (nonatomic, readonly) double sectionFooterHeight;
@property (nonatomic, readonly) double sectionHeaderHeight;
@property (nonatomic) long long selectionStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInset;
@property (getter=_separatorInsetIsRelativeToCellEdges, nonatomic, readonly) bool separatorInsetIsRelativeToCellEdges;
@property (nonatomic) bool shouldIndentWhileEditing;
@property (nonatomic, readonly) bool showingDeleteConfirmation;
@property (getter=_isShowingIndex, nonatomic, readonly) bool showingIndex;
@property (nonatomic) bool showsReorderControl;
@property (readonly) Class superclass;
@property (getter=_swipeToDeleteCell, setter=_setSwipeToDeleteCell:, nonatomic, retain) UITableViewCell *swipeToDeleteCell;
@property (nonatomic, readonly) UIView *swipeableView;
@property (getter=_tableAttributes, nonatomic, readonly) UICollectionViewTableLayoutAttributes *tableAttributes;
@property (getter=_tableLayout, nonatomic, readonly) UICollectionViewTableLayout *tableLayout;
@property (getter=_tableStyle, nonatomic, readonly) long long tableStyle;
@property (nonatomic, retain) UITableViewCollectionCell *tableViewCell;
@property (nonatomic, readonly) UILabel *textLabel;
@property (getter=_topPadding, nonatomic, readonly) double topPadding;
@property (nonatomic) bool transitioningLayouts;
@property (nonatomic, readonly) bool usesVariableMargins;
@property (getter=_wasEditing, nonatomic, readonly) bool wasEditing;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_accessoryBaseColor;
- (void)_accessoryButtonAction:(id)arg1;
- (void)_animateDeletionOfRowAtIndexPath:(id)arg1;
- (void)_animateDeletionOfRowWithCell:(id)arg1;
- (double)_backgroundInset;
- (bool)_beginReorderingForCell:(id)arg1 touch:(id)arg2;
- (double)_bottomPadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calloutTargetRectForCell:(id)arg1;
- (bool)_canFocusCell:(id)arg1;
- (bool)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (void)_cellDidBecomeFocused:(id)arg1;
- (void)_cellDidBecomeUnfocused:(id)arg1;
- (void)_cellDidHideSelectedBackground:(id)arg1;
- (void)_cellDidShowSelectedBackground:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cellSafeAreaInsets;
- (void)_commonSetupTableCell;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentViewInset;
- (void)_didInsertRowForTableCell:(id)arg1;
- (void)_draggingReorderingCell:(id)arg1 yDelta:(double)arg2 touch:(id)arg3;
- (void)_endReorderingForCell:(id)arg1 wasCancelled:(bool)arg2 animated:(bool)arg3;
- (void)_highlightCell:(id)arg1 animated:(bool)arg2 scrollPosition:(long long)arg3 highlight:(bool)arg4;
- (void)_highlightDidEndForCell:(id)arg1 withInteraction:(id)arg2;
- (double)_indexBarExtentFromEdge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indexFrame;
- (void)_insertInteractiveMoveShadowViews;
- (bool)_isCellReorderable:(id)arg1;
- (bool)_isEditingForSwipeDeletion;
- (bool)_isInModalViewController;
- (bool)_isInteractiveMoveShadowInstalled;
- (bool)_isReorderControlActiveForCell:(id)arg1;
- (bool)_isShowingIndex;
- (void)_layoutInteractiveMoveShadow;
- (void)_layoutTableViewCell;
- (id)_multiselectCheckmarkColor;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (long long)_numberOfSections;
- (double)_offsetForRevealingDeleteConfirmationButton;
- (void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (long long)_popoverControllerStyle;
- (void)_prepareHighlightForCell:(id)arg1 withInteraction:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_rawSectionContentInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_rawSeparatorInset;
- (void)_removeInteractiveMoveShadowViews;
- (id)_reorderingCell;
- (double)_rowSpacing;
- (id)_scrollView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_sectionContentInset;
- (bool)_sectionContentInsetFollowsLayoutMargins;
- (double)_sectionCornerRadius;
- (double)_selectionAnimationDuration;
- (bool)_separatorInsetIsRelativeToCellEdges;
- (void)_setOffsetForRevealingDeleteConfirmationButton:(double)arg1;
- (void)_setSwipeToDeleteCell:(id)arg1;
- (void)_setupForEditing:(bool)arg1 atIndexPath:(id)arg2 multiselect:(bool)arg3 editingStyle:(long long)arg4 shouldIndentWhileEditing:(bool)arg5 showsReorderControl:(bool)arg6 accessoryType:(long long)arg7 updateSeparators:(bool)arg8;
- (bool)_shouldDrawThickSeparators;
- (bool)_shouldHaveFooterViewForSection:(long long)arg1;
- (bool)_shouldHaveHeaderViewForSection:(long long)arg1;
- (bool)_shouldShowMenuForCell:(id)arg1;
- (id)_swipeToDeleteCell;
- (void)_swipeToDeleteCell:(id)arg1;
- (id)_tableAttributes;
- (id)_tableLayout;
- (long long)_tableStyle;
- (id)_titleForDeleteConfirmationButton:(id)arg1;
- (double)_topPadding;
- (void)_trackAnimator:(id)arg1;
- (void)_updateCell:(id)arg1 withValue:(id)arg2;
- (void)_updateCollectionViewInteractiveMovementTargetPositionForTouch:(id)arg1;
- (void)_updateEditing;
- (void)_updateInternalCellForTableLayout:(bool)arg1 animated:(bool)arg2;
- (void)_userSelectCell:(id)arg1;
- (bool)_wasEditing;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (long long)accessoryType;
- (id)accessoryView;
- (bool)allowsMultipleSelection;
- (bool)allowsMultipleSelectionDuringEditing;
- (void)applyLayoutAttributes:(id)arg1;
- (void)awakeFromNib;
- (id)backgroundColor;
- (id)backgroundView;
- (bool)borderShadowVisible;
- (bool)canBeEdited;
- (bool)cellLayoutMarginsFollowReadableWidth;
- (id)currentLayout;
- (id)detailTextLabel;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)didTransitionToState:(unsigned long long)arg1;
- (long long)editingAccessoryType;
- (id)editingAccessoryView;
- (long long)editingStyle;
- (double)estimatedRowHeight;
- (double)estimatedSectionFooterHeight;
- (double)estimatedSectionHeaderHeight;
- (long long)focusStyle;
- (id)imageView;
- (long long)indentationLevel;
- (double)indentationWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)insetsContentViewsToSafeArea;
- (bool)interactiveMoveEffectsVisible;
- (bool)isEditing;
- (bool)isHighlighted;
- (bool)isInTableLayout;
- (bool)isSelected;
- (void)layoutSubviews;
- (id)multipleSelectionBackgroundView;
- (bool)overlapsSectionHeaderViews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (double)rowHeight;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (id)selectedBackgroundView;
- (long long)selectionStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setAccessoryType:(long long)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBorderShadowVisible:(bool)arg1;
- (void)setCurrentLayout:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEditingAccessoryType:(long long)arg1;
- (void)setEditingAccessoryView:(id)arg1;
- (void)setFocusStyle:(long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIndentationLevel:(long long)arg1;
- (void)setIndentationWidth:(double)arg1;
- (void)setInteractiveMoveEffectsVisible:(bool)arg1;
- (void)setMultipleSelectionBackgroundView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedBackgroundView:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShouldIndentWhileEditing:(bool)arg1;
- (void)setShowsReorderControl:(bool)arg1;
- (void)setTableViewCell:(id)arg1;
- (void)setTransitioningLayouts:(bool)arg1;
- (bool)shouldIndentWhileEditing;
- (bool)showingDeleteConfirmation;
- (bool)showsReorderControl;
- (id)swipeableView;
- (id)tableViewCell;
- (id)textLabel;
- (bool)transitioningLayouts;
- (void)updateCellForTableLayout:(bool)arg1;
- (bool)usesVariableMargins;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
