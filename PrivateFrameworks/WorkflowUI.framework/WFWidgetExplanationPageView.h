/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFWidgetExplanationPageView : UIView {
    UIButton * _continueButton;
    <WFWidgetExplanationPageViewDelegate> * _delegate;
    WFWidgetExplanationSettings * _settings;
    UILabel * _sloganLabel;
    UILabel * _supplementaryLabel;
}

@property (nonatomic) UIButton *continueButton;
@property (nonatomic) <WFWidgetExplanationPageViewDelegate> *delegate;
@property (nonatomic, retain) WFWidgetExplanationSettings *settings;
@property (nonatomic) UILabel *sloganLabel;
@property (nonatomic) UILabel *supplementaryLabel;

- (void).cxx_destruct;
- (void)completedOnboarding;
- (id)continueButton;
- (void)continueButtonPressed;
- (id)delegate;
- (id)initWithSettings:(id)arg1;
- (void)layoutSubviews;
- (void)setContinueButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSloganLabel:(id)arg1;
- (void)setSupplementaryLabel:(id)arg1;
- (id)settings;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sloganLabel;
- (struct CGSize { double x1; double x2; })sloganSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)supplementaryLabel;
- (struct CGSize { double x1; double x2; })supplementarySizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
