/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardTitleHeaderView : PKDashboardCollectionViewCell {
    id /* block */  _action;
    UIButton * _actionButton;
    NSString * _actionTitle;
    bool  _isCompactUI;
    bool  _isTemplateLayout;
    UILabel * _titleLabel;
    bool  _useCompactTopInset;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) bool useCompactTopInset;

+ (id)defaultBackgroundColor;
+ (double)defaultHorizontalInset;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id /* block */)action;
- (id)actionTitle;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)resetFonts;
- (void)setAction:(id /* block */)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setUseCompactTopInset:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useCompactTopInset;

@end
