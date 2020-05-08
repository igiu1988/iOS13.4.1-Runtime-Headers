/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIEnrollTrainingView : UIView {
    UIView * _containerView;
    <VTUIEnrollTrainingViewDelegate><SUICFlamesViewDelegate> * _delegate;
    UIButton * _endpointButton;
    bool  _endpointButtonEnabled;
    UIView * _flamesContainerView;
    NSLayoutConstraint * _flamesContainerViewHeightConstraint;
    NSLayoutConstraint * _flamesContainerViewTopConstraint;
    SUICFlamesView * _flamesView;
    bool  _flamesViewHidden;
    long long  _flamesViewState;
    VTUIPagedLabel * _instructionPagedLabel;
    UILabel * _pageLabel;
    SiriUIContentButton * _radarButton;
    bool  _radarButtonHidden;
    UIButton * _radarExitButton;
    UIButton * _skipButton;
    NSLayoutConstraint * _skipButtonBottomConstraint;
    bool  _skipButtonHidden;
    UILabel * _statusLabel;
    VTUITickMarkView * _tickMark;
    bool  _tickMarkViewHidden;
    VTPreferences * _vtPrefs;
    VTUIStyle * _vtStyle;
}

@property (nonatomic, retain) UIView *containerView;
@property (nonatomic) <VTUIEnrollTrainingViewDelegate><SUICFlamesViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *endpointButton;
@property (nonatomic) bool endpointButtonEnabled;
@property (nonatomic, retain) UIView *flamesContainerView;
@property (nonatomic, retain) NSLayoutConstraint *flamesContainerViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *flamesContainerViewTopConstraint;
@property (nonatomic, retain) SUICFlamesView *flamesView;
@property (nonatomic) bool flamesViewHidden;
@property (nonatomic) long long flamesViewState;
@property (nonatomic, retain) VTUIPagedLabel *instructionPagedLabel;
@property (nonatomic, retain) UILabel *pageLabel;
@property (nonatomic, retain) SiriUIContentButton *radarButton;
@property (nonatomic) bool radarButtonHidden;
@property (nonatomic, readonly) UIButton *radarExitButton;
@property (nonatomic, retain) UIButton *skipButton;
@property (nonatomic, retain) NSLayoutConstraint *skipButtonBottomConstraint;
@property (nonatomic) bool skipButtonHidden;
@property (nonatomic, readonly) UILabel *statusLabel;
@property (nonatomic, retain) VTUITickMarkView *tickMark;
@property (nonatomic) bool tickMarkViewHidden;

- (void).cxx_destruct;
- (void)_setupViews:(id)arg1 vtPrefs:(id)arg2;
- (bool)_shouldShowRadarButton;
- (id)_siriUIDebugBundle;
- (void)clearInstructionLabel;
- (id)containerView;
- (id)delegate;
- (id)endpointButton;
- (bool)endpointButtonEnabled;
- (id)flamesContainerView;
- (id)flamesContainerViewHeightConstraint;
- (id)flamesContainerViewTopConstraint;
- (id)flamesView;
- (bool)flamesViewHidden;
- (long long)flamesViewState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)instructionPagedLabel;
- (id)pageLabel;
- (id)radarButton;
- (bool)radarButtonHidden;
- (id)radarExitButton;
- (void)setContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndpointButton:(id)arg1;
- (void)setEndpointButtonEnabled:(bool)arg1;
- (void)setFlamesContainerView:(id)arg1;
- (void)setFlamesContainerViewHeightConstraint:(id)arg1;
- (void)setFlamesContainerViewTopConstraint:(id)arg1;
- (void)setFlamesView:(id)arg1;
- (void)setFlamesViewHidden:(bool)arg1;
- (void)setFlamesViewState:(long long)arg1;
- (void)setInstructionPagedLabel:(id)arg1;
- (void)setPageLabel:(id)arg1;
- (void)setRadarButton:(id)arg1;
- (void)setRadarButtonHidden:(bool)arg1;
- (void)setSkipButton:(id)arg1;
- (void)setSkipButtonBottomConstraint:(id)arg1;
- (void)setSkipButtonHidden:(bool)arg1;
- (void)setTickMark:(id)arg1;
- (void)setTickMarkViewHidden:(bool)arg1;
- (void)showRadarExitButton:(id)arg1;
- (id)skipButton;
- (id)skipButtonBottomConstraint;
- (bool)skipButtonHidden;
- (void)slideInText:(id)arg1 afterDelay:(double)arg2 completion:(id /* block */)arg3;
- (void)startTickMarkAnimation:(bool)arg1 completion:(id /* block */)arg2;
- (id)statusLabel;
- (id)tickMark;
- (bool)tickMarkViewHidden;
- (void)updateConstraints;

@end
