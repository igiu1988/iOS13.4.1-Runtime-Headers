/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

@interface APUIShortLookViewController : UIViewController <APUIIntentHandlingViewControllerDelegate, APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate, CRKCardPresentationDelegate, CRKCardViewControllerDelegate, PLClickPresentationInteractionManagerDelegate, PLClickPresentationInteractionPresenting, SearchUIResultShortLook> {
    bool  _acceptPlatterTaps;
    bool  _actionCompletedSuccessfully;
    ATXAction * _atxAction;
    NSString * _bundleId;
    CRKCardPresentation * _cardPresentation;
    PLClickPresentationInteractionManager * _clickPresentationInteractionManager;
    UIViewController<CRKCardViewControlling> * _currentCardViewController;
    <APUIShortLookViewControllerDelegate> * _delegate;
    long long  _dismissalReason;
    bool  _hasShownLongLook;
    INIntent * _intent;
    APUIIntentHandlingViewController * _intentHandlingViewController;
    INInteraction * _interaction;
    double  _preferredPlatterContentHeight;
    APUILongLookViewController<PLClickPresentationInteractionPresentable> * _presentableViewController;
    bool  _representsVoiceShortcut;
    SFSearchResult * _searchResult;
    APUITVIntentHandler * _tvIntentHandler;
    NSUserActivity * _userActivity;
    NSUserDefaults * _userDefaults;
    bool  _wasPresentedImmediately;
}

@property (nonatomic, retain) ATXAction *atxAction;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, retain) CRKCardPresentation *cardPresentation;
@property (nonatomic, readonly) <CRKCardViewControllerDelegate> *cardViewControllerDelegate;
@property (nonatomic, readonly) PLClickPresentationInteractionManager *clickPresentationInteractionManager;
@property (nonatomic, retain) UIViewController<CRKCardViewControlling> *currentCardViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APUIShortLookViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finalDismissedFrameOfViewForPreview;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finalPresentedFrameOfViewForPreview;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialPresentedFrameOfViewForPreview;
@property (nonatomic, retain) INIntent *intent;
@property (nonatomic, retain) APUIIntentHandlingViewController *intentHandlingViewController;
@property (nonatomic, retain) INInteraction *interaction;
@property (nonatomic, retain) SFSearchResult *searchResult;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUserActivity *userActivity;
@property (nonatomic, readonly) UIView *viewForPreview;

- (void).cxx_destruct;
- (long long)_actionTypeForMetrics;
- (bool)_canShowWhileLocked;
- (id)_cardContentWithIntentResponse:(id)arg1;
- (id)_debugStringForNSUA;
- (id)_defaults;
- (void)_dismissLongLookWithReason:(long long)arg1 completion:(id /* block */)arg2;
- (void)_handleActionButtonForIntent;
- (id)_intentConfirmationActions;
- (bool)_isDoNotDisturbIntent;
- (void)_resetRepresentedObjectState;
- (bool)_shouldAcceptPlatterTaps;
- (bool)_shouldTellDelegateToClearActionOnDismissal:(long long)arg1;
- (id)_titleForLongLookViewController:(id)arg1;
- (id)appIconImageForLongLook:(id)arg1;
- (id)atxAction;
- (id)bundleId;
- (id)bundleIdentifierForAppIconInLongLook:(id)arg1;
- (id)cardPresentation;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (id)cardViewControllerDelegate;
- (void)cardViewControllerDidLoad:(id)arg1;
- (id)clickPresentationInteractionManager;
- (void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1;
- (bool)clickPresentationInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1;
- (id)containerViewForclickPresentationInteractionManager:(id)arg1;
- (id)currentCardViewController;
- (id)delegate;
- (bool)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(id /* block */)arg2;
- (void)handOverIntentHandlingToApp;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)intent;
- (id)intentHandlingViewController;
- (void)intentHandlingViewController:(id)arg1 didComplete:(bool)arg2;
- (void)intentHandlingViewController:(id)arg1 requiresConfirmationWithResponse:(id)arg2 confirmationActionTitle:(id)arg3;
- (void)intentHandlingViewController:(id)arg1 wantsPreferredSize:(struct CGSize { double x1; double x2; })arg2;
- (void)intentHandlingViewController:(id)arg1 willContinueInAppForIntent:(id)arg2 completion:(id /* block */)arg3;
- (void)intentHandlingViewControllerDidFailAuthorizationCheck:(id)arg1;
- (id)interaction;
- (id)interfaceActionsForLongLook:(id)arg1;
- (void)longLookPlatterDidReceiveTap:(id)arg1;
- (void)longLookPlatterDidTapUtilityButton:(id)arg1;
- (bool)longLookPlatterShouldShowUtilityButton:(id)arg1;
- (double)preferredContentHeightForLongLook:(id)arg1;
- (bool)presentImmediately:(id /* block */)arg1;
- (id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;
- (id)searchResult;
- (void)setAtxAction:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setCardPresentation:(id)arg1;
- (void)setCurrentCardViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setIntentHandlingViewController:(id)arg1;
- (void)setInteraction:(id)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (void)setView:(id)arg1;
- (id)titleForLongLookHeaderInLongLook:(id)arg1;
- (id)userActivity;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewForPreview;

@end
