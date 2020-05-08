/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUILegacyCardSectionViewController : CRKCardSectionViewController <SiriUISnippetViewControllerDelegate, SiriUISnippetViewControllerDelegatePrivate> {
    SiriUISnippetViewController * _containingSnippetViewController;
    SiriUISnippetViewController * _snippetViewController;
}

@property (nonatomic, readonly) SiriUISnippetViewController *backingSnippetViewController;
@property (nonatomic) SiriUISnippetViewController *containingSnippetViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SiriUICardSectionView *view;

+ (id)cardSectionClasses;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_createReusableViewIfNeededWithClass:(Class)arg1;
- (id)_interaction;
- (void)_loadCardSectionView;
- (bool)_shouldAttemptToConnectToRemoteViewController;
- (void)_updateContentSize;
- (id)additionalSpeechInterpretationsForSiriViewController:(id)arg1;
- (id)backingSnippetViewController;
- (void)cancelRequestForSiriSnippetViewController:(id)arg1;
- (void)cancelSpeakingForSiriViewController:(id)arg1;
- (id)containingSnippetViewController;
- (id)localeForSiriViewController:(id)arg1;
- (id)persistentDataStoreForSiriViewController:(id)arg1;
- (id)persistentStoreForSiriViewController:(id)arg1;
- (void)removeSiriViewController:(id)arg1;
- (void)setContainingSnippetViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)siriDeviceLockStateForSnippetViewController:(id)arg1;
- (id)siriEnabledAppListForSiriViewController:(id)arg1;
- (void)siriSnippetViewController:(id)arg1 didDismissViewController:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 didPresentViewController:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 didRequestKeyboardWithVisibility:(bool)arg2;
- (void)siriSnippetViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;
- (void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(id /* block */)arg2;
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(bool)arg2 animated:(bool)arg3;
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(bool)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(bool)arg2;
- (void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(id /* block */)arg3;
- (void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2;
- (double)siriSnippetViewControllerExpectedWidth:(id)arg1;
- (bool)siriSnippetViewControllerIsVisible:(id)arg1;
- (void)siriSnippetViewControllerViewDidLoad:(id)arg1;
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1;
- (void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2;
- (void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2;
- (id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3;
- (id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2;
- (id)siriViewController:(id)arg1 filteredDisambiguationListItems:(id)arg2;
- (id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2;
- (bool)siriViewController:(id)arg1 openPunchOut:(id)arg2;
- (bool)siriViewController:(id)arg1 openURL:(id)arg2;
- (void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(id /* block */)arg3;
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2;
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2 completion:(id /* block */)arg3;
- (void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2;
- (void)siriViewController:(id)arg1 setContentOffset:(double)arg2;
- (void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;
- (void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(id /* block */)arg3;
- (void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })siriViewControllerBackgroundInsets:(id)arg1;
- (void)siriViewControllerDidEndEditing:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1;
- (id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1;
- (double)siriViewControllerExpectedWidth:(id)arg1;
- (void)siriViewControllerHeightDidChange:(id)arg1;
- (void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(bool)arg2;
- (void)siriViewControllerRequestTearDownEditingViewController:(id)arg1;
- (bool)siriViewControllerShouldPreventUserInteraction:(id)arg1;
- (struct CGSize { double x1; double x2; })siriViewControllerVisibleContentArea:(id)arg1;
- (void)siriViewControllerWillBeginEditing:(id)arg1;
- (double)statusBarHeightForSiriViewController:(id)arg1;
- (id)updatedUserUtteranceForSiriViewController:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
