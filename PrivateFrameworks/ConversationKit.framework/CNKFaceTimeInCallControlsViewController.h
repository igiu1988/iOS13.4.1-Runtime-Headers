/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface CNKFaceTimeInCallControlsViewController : UIViewController {
    void audioIsEnabled;
    void controlsButtonRowCount;
    void delegate;
    void effectsAreAvailable;
    void effectsAreEnabled;
    void groupName;
    void isExpanded;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  localParticipant;
    void mode;
    void participantDelegate;
    void participantsTableViewController;
    void participantsViewControllerDelegate;
    void representedLegacyCallIdentifier;
    void shouldShowJoinButton;
    void tableViewSeparator;
    void topInset;
    void videoIsEnabled;
    void viewContent;
}

@property (nonatomic, readonly) UIView *audioButton;
@property (nonatomic) bool audioIsEnabled;
@property (nonatomic) <CNKFaceTimeInCallControlsViewControllerDelegate> *delegate;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool effectsAreAvailable;
@property (nonatomic) bool effectsAreEnabled;
@property (nonatomic) bool isExpanded;
@property (nonatomic) bool shouldShowJoinButton;
@property (nonatomic) bool videoButtonIsEnabled;
@property (nonatomic) bool videoIsEnabled;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)accessibilityCameraButton;
- (id)accessibilityCameraLabel;
- (id)accessibilityDisableVideoButton;
- (id)accessibilityDisableVideoLabel;
- (id)accessibilityEffectsButton;
- (id)accessibilityEffectsLabel;
- (id)accessibilityHotdog;
- (id)accessibilityJoinLeaveButton;
- (id)accessibilityMuteAudioButton;
- (id)accessibilityMuteAudioLabel;
- (id)accessibilityRouteButton;
- (id)accessibilityRouteLabel;
- (id)audioButton;
- (bool)audioIsEnabled;
- (id)delegate;
- (id)description;
- (void)didTapAudioRouteButton:(id)arg1;
- (void)didTapEffectsButton:(id)arg1;
- (void)didTapFlipCameraButton:(id)arg1;
- (void)didTapJoinLeaveButton:(id)arg1;
- (void)didTapMuteButton:(id)arg1;
- (void)didTapToggleCameraButton:(id)arg1;
- (bool)effectsAreAvailable;
- (bool)effectsAreEnabled;
- (void)embedEffectsBrowserViewController:(id)arg1;
- (void)handleLegacyCallStatusDidChangeNotification:(id)arg1;
- (id)initWithActiveCall:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isExpanded;
- (void)loadView;
- (void)setAudioIsEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectsAreAvailable:(bool)arg1;
- (void)setEffectsAreEnabled:(bool)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setShouldShowJoinButton:(bool)arg1;
- (void)setVideoButtonIsEnabled:(bool)arg1;
- (void)setVideoIsEnabled:(bool)arg1;
- (bool)shouldShowJoinButton;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAudioRouteButtonFor:(id)arg1;
- (void)updateControlsVisibilityForExpandedState:(bool)arg1;
- (void)updateToRepresentLegacyCall:(id)arg1;
- (bool)videoButtonIsEnabled;
- (bool)videoIsEnabled;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;

@end
