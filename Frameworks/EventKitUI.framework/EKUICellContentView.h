/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUICellContentView : UIView {
    bool  _drawsOwnRowSeparators;
    UIColor * _rowSeparatorColor;
    UIVisualEffectView * _rowSeparatorParentView;
    UIVisualEffect * _rowSeparatorVisualEffect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorInset;
    EKUICellRowSeparatorView * _separatorViewForNonOpaqueContainers;
    bool  _usesInsetMargin;
}

@property (nonatomic) bool drawsOwnRowSeparators;
@property (nonatomic, retain) UIColor *rowSeparatorColor;
@property (nonatomic, retain) UIVisualEffect *rowSeparatorVisualEffect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInset;
@property (nonatomic) bool usesInsetMargin;

+ (double)rowSeparatorThickness;
+ (bool)vibrant;

- (void).cxx_destruct;
- (void)_layoutSeparator;
- (void)_setMarginExtendsToFullWidth:(bool)arg1;
- (void)_setMarginWidth:(double)arg1;
- (bool)drawsOwnRowSeparators;
- (void)layoutSubviews;
- (id)rowSeparatorColor;
- (id)rowSeparatorVisualEffect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setDrawsOwnRowSeparators:(bool)arg1;
- (void)setRowSeparatorColor:(id)arg1;
- (void)setRowSeparatorVisualEffect:(id)arg1;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUsesInsetMargin:(bool)arg1;
- (bool)usesInsetMargin;

@end
