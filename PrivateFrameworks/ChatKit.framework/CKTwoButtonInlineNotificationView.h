/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTwoButtonInlineNotificationView : CKInlineNotificationView {
    UIView * _contentView;
    UILabel * _descriptionLabel;
    UIButton * _failureButton;
    UILabel * _headerLabel;
    UIView * _horizontalDivider;
    UIButton * _leftButton;
    UIView * _leftGrayoutView;
    UIButton * _rightButton;
    UIView * _rightGrayoutView;
    UIView * _verticalDivider;
}

@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NSString *descriptionText;
@property (nonatomic, retain) UIButton *failureButton;
@property (nonatomic, retain) UILabel *headerLabel;
@property (nonatomic, retain) NSString *headerText;
@property (nonatomic, retain) UIView *horizontalDivider;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) UIButton *leftButton;
@property (nonatomic) bool leftButtonIsGrayedOut;
@property (nonatomic, retain) NSString *leftButtonText;
@property (nonatomic, retain) UIView *leftGrayoutView;
@property (nonatomic, retain) UIButton *rightButton;
@property (nonatomic) bool rightButtonIsGrayedOut;
@property (nonatomic, retain) NSString *rightButtonText;
@property (nonatomic, retain) UIView *rightGrayoutView;
@property (nonatomic, retain) UIView *verticalDivider;

- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_handleTouchDown:(id)arg1;
- (void)_handleTouchUpInside:(id)arg1;
- (void)_handleTouchUpOutside:(id)arg1;
- (double)_heightForBottomBoxWithContainerWidth:(double)arg1 startingYOffset:(double)arg2 leftButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 rightButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 dividerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 leftGrayoutViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg6 rightGrayoutViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7;
- (double)_heightForTopBoxWithContainerWidth:(double)arg1 failureButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 labelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 descriptionFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (void)_updateFonts;
- (id)contentView;
- (struct CGSize { double x1; double x2; })contentViewSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (id)descriptionLabel;
- (id)descriptionText;
- (id)failureButton;
- (id)headerLabel;
- (id)horizontalDivider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leftButton;
- (bool)leftButtonIsGrayedOut;
- (id)leftButtonText;
- (id)leftGrayoutView;
- (id)rightButton;
- (bool)rightButtonIsGrayedOut;
- (id)rightButtonText;
- (id)rightGrayoutView;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setFailureButton:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHorizontalDivider:(id)arg1;
- (void)setLeftButton:(id)arg1;
- (void)setLeftButtonIsGrayedOut:(bool)arg1;
- (void)setLeftButtonText:(id)arg1;
- (void)setLeftGrayoutView:(id)arg1;
- (void)setRightButton:(id)arg1;
- (void)setRightButtonIsGrayedOut:(bool)arg1;
- (void)setRightButtonText:(id)arg1;
- (void)setRightGrayoutView:(id)arg1;
- (void)setVerticalDivider:(id)arg1;
- (id)verticalDivider;

@end
