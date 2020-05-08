/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITableViewCollectionCell : UITableViewCell <UICollectionViewTableAllRowAttributes>

@property (nonatomic) long long accessoryType;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } backgroundInset;
@property (nonatomic) double defaultLeadingCellMarginWidth;
@property (nonatomic) double defaultTrailingCellMarginWidth;
@property (nonatomic) bool drawsSeparatorAtBottomOfSection;
@property (nonatomic) bool drawsSeparatorAtTopOfSection;
@property (nonatomic) long long editingStyle;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) double indexBarExtentFromEdge;
@property (nonatomic) bool insetsContentViewsToSafeArea;
@property (nonatomic) bool layoutMarginsFollowReadableWidth;
@property (nonatomic) int sectionLocation;
@property (nonatomic, copy) UIColor *separatorColor;
@property (nonatomic, retain) UIVisualEffect *separatorEffect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInset;
@property (nonatomic) bool separatorInsetIsRelativeToCellEdges;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) bool shouldIndentWhileEditing;
@property (nonatomic) bool showsReorderControl;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInset;
- (double)defaultLeadingCellMarginWidth;
- (double)defaultTrailingCellMarginWidth;
- (bool)drawsSeparatorAtBottomOfSection;
- (bool)drawsSeparatorAtTopOfSection;
- (double)indexBarExtentFromEdge;
- (bool)insetsContentViewsToSafeArea;
- (id)separatorEffect;
- (bool)separatorInsetIsRelativeToCellEdges;
- (void)setBackgroundInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDefaultLeadingCellMarginWidth:(double)arg1;
- (void)setDefaultTrailingCellMarginWidth:(double)arg1;
- (void)setDrawsSeparatorAtBottomOfSection:(bool)arg1;
- (void)setDrawsSeparatorAtTopOfSection:(bool)arg1;
- (void)setIndexBarExtentFromEdge:(double)arg1;
- (void)setInsetsContentViewsToSafeArea:(bool)arg1;
- (void)setSeparatorEffect:(id)arg1;
- (void)setSeparatorInsetIsRelativeToCellEdges:(bool)arg1;

@end
