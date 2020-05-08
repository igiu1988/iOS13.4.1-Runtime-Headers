/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HROnboardingElectrocardiogramSetupCompleteViewController : HROnboardingBaseViewController <HRLinkTextViewDelegate, HRStackedButtonViewDelegate> {
    UIActivityIndicatorView * _activityIndicatorView;
    UILabel * _bodyLabel;
    UILabel * _classificationLabel;
    NSLayoutConstraint * _contentViewBottomConstraint;
    HKElectrocardiogram * _electrocardiogram;
    UITapGestureRecognizer * _electrocardiogramCardTapGestureRecognizer;
    HKElectrocardiogramCardView * _electrocardiogramCardView;
    HKAnchoredObjectQuery * _electrocardiogramQuery;
    HRStackedButtonView * _stackedButtonView;
    long long  _state;
    UILabel * _titleLabel;
    NSLayoutYAxisAnchor * _viewBottomAnchor;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) UILabel *classificationLabel;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic, retain) HKElectrocardiogram *electrocardiogram;
@property (nonatomic, retain) UITapGestureRecognizer *electrocardiogramCardTapGestureRecognizer;
@property (nonatomic, retain) HKElectrocardiogramCardView *electrocardiogramCardView;
@property (nonatomic, retain) HKAnchoredObjectQuery *electrocardiogramQuery;
@property (nonatomic, retain) HRStackedButtonView *stackedButtonView;
@property (nonatomic) long long state;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutYAxisAnchor *viewBottomAnchor;

- (void).cxx_destruct;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (id)_classificationAttributedTextForElectrocardiogram:(id)arg1;
- (double)_classificationTextDistance;
- (void)_electrocardiogramCardViewTapped:(id)arg1;
- (void)_recomputeState;
- (void)_resetUI;
- (void)_setUpConstraints;
- (void)_setUpElectrocardiogramQuery;
- (void)_setUpUI;
- (void)_setupBodyLabelForSetupCompleteState:(long long)arg1;
- (void)_stopElectrocardiogramQuery;
- (id)_subheadlineFont;
- (void)_updateUIForElectrocardiogram:(id)arg1;
- (id)activityIndicatorView;
- (id)bodyLabel;
- (id)classificationLabel;
- (id)contentViewBottomConstraint;
- (id)electrocardiogram;
- (id)electrocardiogramCardTapGestureRecognizer;
- (id)electrocardiogramCardView;
- (id)electrocardiogramQuery;
- (id)initForOnboarding:(bool)arg1;
- (void)linkTextView:(id)arg1 didTapOnLinkInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setBodyLabel:(id)arg1;
- (void)setClassificationLabel:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setElectrocardiogram:(id)arg1;
- (void)setElectrocardiogramCardTapGestureRecognizer:(id)arg1;
- (void)setElectrocardiogramCardView:(id)arg1;
- (void)setElectrocardiogramQuery:(id)arg1;
- (void)setStackedButtonView:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setViewBottomAnchor:(id)arg1;
- (id)stackedButtonView;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (long long)state;
- (id)titleLabel;
- (id)viewBottomAnchor;
- (void)viewDidLoad;

@end
