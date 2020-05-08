/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSectionHeaderView : UICollectionReusableView {
    NSArray * _labelConstraints;
    UILabel * _titleLabel;
    NSString * _titleText;
}

@property (nonatomic, retain) NSArray *labelConstraints;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleText;

+ (id)_titleFont;
+ (double)estimatedHeight;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelConstraints;
- (void)prepareForReuse;
- (void)setLabelConstraints:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleLabel;
- (id)titleText;
- (void)updateConstraints;

@end
