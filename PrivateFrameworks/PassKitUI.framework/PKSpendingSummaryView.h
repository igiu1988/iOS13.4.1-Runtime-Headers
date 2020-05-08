/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSpendingSummaryView : UIView {
    PKSpendingSummaryChartView * _chartView;
    PKSpendingSummaryChartView * _chartViewToFadeOut;
    UIImage * _downImage;
    bool  _isTemplateLayout;
    UILabel * _percentageLabel;
    UILabel * _spendingLabel;
    PKSpendingSummary * _summary;
    UILabel * _totalAmount;
    UIImage * _upImage;
    UIImageView * _upOrDownImage;
    bool  _visible;
}

@property (nonatomic, retain) UIImage *downImage;
@property (nonatomic, retain) UIImage *upImage;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_createSubviews;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_needsLayoutWithSummary:(id)arg1;
- (void)configureWithSummary:(id)arg1 presentationStyle:(unsigned long long)arg2;
- (id)downImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isVisible;
- (void)layoutSubviews;
- (void)setDownImage:(id)arg1;
- (void)setUpImage:(id)arg1;
- (void)setVisible:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)upImage;

@end
