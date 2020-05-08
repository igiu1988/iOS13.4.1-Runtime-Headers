/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKFusedDoubleCellView : UIView <PKPaymentDashboardCellActionHandleable> {
    long long  _accessibleLayout;
    <PKAccessibleLayoutObserverDelegate> * _accessibleLayoutObserverDelegate;
    bool  _animated;
    unsigned long long  _deferUpdateCounter;
    UIImageView * _disclosureView;
    bool  _enableDisclosure;
    bool  _isTemplateLayout;
    NSString * _leftDetail;
    UIColor * _leftDetailColor;
    long long  _leftDetailLineBreakMode;
    UILabel * _leftDetailView;
    NSString * _leftSubDetail;
    UIColor * _leftSubDetailColor;
    long long  _leftSubDetailLineBreakMode;
    UILabel * _leftSubDetailView;
    NSString * _leftTitle;
    UIColor * _leftTitleColor;
    long long  _leftTitleLineBreakMode;
    UILabel * _leftTitleView;
    double  _middlePadding;
    PKPaymentPass * _pass;
    NSString * _rightDetail;
    UIColor * _rightDetailColor;
    long long  _rightDetailLineBreakMode;
    UILabel * _rightDetailView;
    NSString * _rightSubDetail;
    UIColor * _rightSubDetailColor;
    long long  _rightSubDetailLineBreakMode;
    UILabel * _rightSubDetailView;
    NSString * _rightTitle;
    UIColor * _rightTitleColor;
    long long  _rightTitleLineBreakMode;
    UILabel * _rightTitleView;
    UIView * _separatorView;
    double  _topPadding;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableDisclosure;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *leftDetail;
@property (nonatomic, copy) UIColor *leftDetailColor;
@property (nonatomic) long long leftDetailLineBreakMode;
@property (nonatomic, copy) NSString *leftSubDetail;
@property (nonatomic, copy) UIColor *leftSubDetailColor;
@property (nonatomic) long long leftSubDetailLineBreakMode;
@property (nonatomic, copy) NSString *leftTitle;
@property (nonatomic, copy) UIColor *leftTitleColor;
@property (nonatomic) long long leftTitleLineBreakMode;
@property (nonatomic, copy) PKPaymentPass *pass;
@property (nonatomic, copy) NSString *rightDetail;
@property (nonatomic, copy) UIColor *rightDetailColor;
@property (nonatomic) long long rightDetailLineBreakMode;
@property (nonatomic, copy) NSString *rightSubDetail;
@property (nonatomic, copy) UIColor *rightSubDetailColor;
@property (nonatomic) long long rightSubDetailLineBreakMode;
@property (nonatomic, copy) NSString *rightTitle;
@property (nonatomic, copy) UIColor *rightTitleColor;
@property (nonatomic) long long rightTitleLineBreakMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_detailFont;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_leftNeedsThirdLine;
- (void)_performInit;
- (bool)_rightNeedsThirdLine;
- (void)_setupViews;
- (id)_subDetailFont;
- (id)_titleFont;
- (void)_updateContent:(bool)arg1;
- (void)beginUpdates;
- (bool)enableDisclosure;
- (void)endUpdates:(bool)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutIfNeededAnimated:(bool)arg1;
- (void)layoutSubviews;
- (id)leftDetail;
- (id)leftDetailColor;
- (long long)leftDetailLineBreakMode;
- (id)leftSubDetail;
- (id)leftSubDetailColor;
- (long long)leftSubDetailLineBreakMode;
- (id)leftTitle;
- (id)leftTitleColor;
- (long long)leftTitleLineBreakMode;
- (id)pass;
- (id)rightDetail;
- (id)rightDetailColor;
- (long long)rightDetailLineBreakMode;
- (id)rightSubDetail;
- (id)rightSubDetailColor;
- (long long)rightSubDetailLineBreakMode;
- (id)rightTitle;
- (id)rightTitleColor;
- (long long)rightTitleLineBreakMode;
- (void)setEnableDisclosure:(bool)arg1;
- (void)setLeftDetail:(id)arg1;
- (void)setLeftDetailColor:(id)arg1;
- (void)setLeftDetailLineBreakMode:(long long)arg1;
- (void)setLeftSubDetail:(id)arg1;
- (void)setLeftSubDetailColor:(id)arg1;
- (void)setLeftSubDetailLineBreakMode:(long long)arg1;
- (void)setLeftTitle:(id)arg1;
- (void)setLeftTitleColor:(id)arg1;
- (void)setLeftTitleLineBreakMode:(long long)arg1;
- (void)setPass:(id)arg1;
- (void)setRightDetail:(id)arg1;
- (void)setRightDetailColor:(id)arg1;
- (void)setRightDetailLineBreakMode:(long long)arg1;
- (void)setRightSubDetail:(id)arg1;
- (void)setRightSubDetailColor:(id)arg1;
- (void)setRightSubDetailLineBreakMode:(long long)arg1;
- (void)setRightTitle:(id)arg1;
- (void)setRightTitleColor:(id)arg1;
- (void)setRightTitleLineBreakMode:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
