/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardCurrencyAmountCell : PKDashboardCollectionViewCell {
    PKCurrencyAmount * _amount;
    PKCurrencyAmount * _currencyAmount;
    UILabel * _currencyLabel;
    NSString * _detailString;
    bool  _showsPositivePrefix;
    UILabel * _titleLabel;
    NSString * _titleString;
}

@property (nonatomic, copy) PKCurrencyAmount *amount;
@property (nonatomic, copy) NSString *detailString;
@property (nonatomic) bool showsPositivePrefix;
@property (nonatomic, copy) NSString *titleString;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_shouldUseStackedLayoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateCurrencyLabel;
- (id)amount;
- (id)defaultPrimaryColor;
- (id)defaultSecondaryColor;
- (id)detailString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)resetFonts;
- (void)setAmount:(id)arg1;
- (void)setDetailString:(id)arg1;
- (void)setShowsPositivePrefix:(bool)arg1;
- (void)setTitleString:(id)arg1;
- (bool)showsPositivePrefix;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleString;
- (void)traitCollectionDidChange:(id)arg1;

@end