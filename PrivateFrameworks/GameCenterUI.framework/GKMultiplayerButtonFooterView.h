/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKMultiplayerButtonFooterView : UIView {
    UIColor * _blueColor;
    NSLayoutConstraint * _buttonHeightConstraint;
    NSLayoutConstraint * _buttonWidthConstraint;
    bool  _forcingAutomatch;
    UIButton * _inviteFriendsButton;
    UIButton * _playNowButton;
    NSLayoutConstraint * _viewHeightConstraint;
}

@property (nonatomic, retain) UIColor *blueColor;
@property (nonatomic, retain) NSLayoutConstraint *buttonHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *buttonWidthConstraint;
@property (nonatomic) bool forcingAutomatch;
@property (nonatomic, retain) UIButton *inviteFriendsButton;
@property (nonatomic, retain) UIButton *playNowButton;
@property (nonatomic, retain) NSLayoutConstraint *viewHeightConstraint;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)blueColor;
- (id)buttonHeightConstraint;
- (id)buttonWidthConstraint;
- (void)configureForMatchRequest:(id)arg1;
- (void)configureViewsAndConstraintsForCurrentTraitCollection;
- (bool)forcingAutomatch;
- (id)inviteFriendsButton;
- (id)playNowButton;
- (void)setAction:(SEL)arg1 forTarget:(id)arg2 onButtonWithType:(long long)arg3;
- (void)setBlueColor:(id)arg1;
- (void)setButtonHeightConstraint:(id)arg1;
- (void)setButtonWidthConstraint:(id)arg1;
- (void)setButtonsEnabled:(bool)arg1;
- (void)setForcingAutomatch:(bool)arg1;
- (void)setInviteFriendsButton:(id)arg1;
- (void)setPlayNowButton:(id)arg1;
- (void)setViewHeightConstraint:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewHeightConstraint;

@end
