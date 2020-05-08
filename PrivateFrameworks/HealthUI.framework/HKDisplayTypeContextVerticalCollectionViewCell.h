/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayTypeContextVerticalCollectionViewCell : UICollectionViewCell {
    UIStackView * _contentStackView;
    HKDisplayTypeContextItem * _contextItem;
    HKUIMetricColors * _currentMetricColors;
    NSLayoutConstraint * _heightConstraint;
    NSLayoutConstraint * _maxTitleWidthConstraint;
    long long  _mode;
    UILabel * _titleLabel;
    UILabel * _unitLabel;
    UILabel * _valueLabel;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic, retain) UIStackView *contentStackView;
@property (nonatomic, retain) HKDisplayTypeContextItem *contextItem;
@property (nonatomic, retain) HKUIMetricColors *currentMetricColors;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *maxTitleWidthConstraint;
@property (nonatomic) long long mode;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *unitLabel;
@property (nonatomic, retain) UILabel *valueLabel;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)_backgroundViewWithColor:(id)arg1;
- (void)_configureForContextItem:(id)arg1;
- (void)_configureForTraitCollection:(id)arg1;
- (id)_labelWithFont:(id)arg1 allowsMultiline:(bool)arg2 supportsDyanmicType:(bool)arg3;
- (id)_stackViewWithArrangedSubviews:(id)arg1;
- (id)_titleFont;
- (void)_updateUI:(bool)arg1;
- (id)_valueAndUnitFont;
- (id)contentStackView;
- (id)contextItem;
- (id)currentMetricColors;
- (id)heightConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)maxTitleWidthConstraint;
- (long long)mode;
- (void)prepareForReuse;
- (void)setContentStackView:(id)arg1;
- (void)setContextItem:(id)arg1;
- (void)setCurrentMetricColors:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setMaxTitleWidthConstraint:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUnitLabel:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unitLabel;
- (void)updateWithContextItem:(id)arg1 mode:(long long)arg2;
- (id)valueLabel;
- (id)widthConstraint;

@end
