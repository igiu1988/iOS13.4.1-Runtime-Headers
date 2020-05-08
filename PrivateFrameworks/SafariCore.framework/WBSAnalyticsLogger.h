/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> * _analyticsSynchronizationQueue;
    AWDServerConnection * _awdServer;
    NSMutableDictionary * _pageLoadStartTimes;
}

@property (nonatomic, readonly) AWDServerConnection *awdServer;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)sharedLogger;

- (void).cxx_destruct;
- (void)_didSelectFavoritesGridItemOfSection:(int)arg1 type:(int)arg2 atIndex:(unsigned long long)arg3 itemsPerRow:(unsigned long long)arg4 isNewTabPage:(bool)arg5;
- (void)_sendEvent:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)awdServer;
- (void)ckBookmarkSyncFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)didAutoFillCustomContactSetShowingMeCard:(bool)arg1;
- (void)didBanWebsiteWithMetadata:(id)arg1;
- (void)didDownvoteDataSourceWithMetadata:(id)arg1;
- (void)didFailToMigrateToCKBookmarksAsPrimaryMigrator:(bool)arg1 error:(id)arg2;
- (void)didModifyPerSitePreferenceWithIdentifier:(id)arg1 modificationLevel:(long long)arg2 type:(long long)arg3 method:(long long)arg4;
- (void)didMoveToBackgroundWithNumberOfOnGoingDownloads:(unsigned long long)arg1;
- (void)didOpenRecommendationWithMetadata:(id)arg1 withPosition:(long long)arg2;
- (void)didReceiveInvalidMessageFromWebProcess:(id)arg1;
- (void)didReceiveWebKitAnalyticsEventWithName:(id)arg1 payload:(id)arg2;
- (void)didRetrieveNumberOfFavorites:(unsigned long long)arg1;
- (void)didRetrieveNumberOfFrequentlyVisitedSites:(unsigned long long)arg1;
- (void)didRetrieveNumberOfRecommendations:(unsigned long long)arg1 numberOfTopics:(unsigned long long)arg2;
- (void)didRevealDownloadWithMIMEType:(id)arg1 uti:(id)arg2 result:(long long)arg3;
- (void)didSelectContactAutoFillSet:(int)arg1 hasPreviouslyCustomizedSet:(bool)arg2;
- (void)didSelectFavoritesGridFrequentlyVisitedItemAtIndex:(unsigned long long)arg1 itemsPerRow:(unsigned long long)arg2 isNewTabPage:(bool)arg3;
- (void)didSelectFavoritesGridItemOfType:(int)arg1 atIndex:(unsigned long long)arg2 itemsPerRow:(unsigned long long)arg3 isNewTabPage:(bool)arg4;
- (void)didSetDownloadFolderToProviderWithIdentifier:(id)arg1 isDefaultFolder:(bool)arg2;
- (void)didShowContactAutoFillSetsWithMeCardSets:(bool)arg1 showingPreviouslyCustomizedSet:(bool)arg2;
- (void)didStartMigratingToCKBookmarksAsPrimaryMigrator:(bool)arg1 localState:(long long)arg2 remoteState:(long long)arg3;
- (void)didSuccessfullyMigrateToCKBookmarksAsPrimaryMigrator:(bool)arg1;
- (void)didToggleDomainSpecificAutomaticReader:(bool)arg1;
- (void)didToggleGloballyUseAutomaticReader:(bool)arg1;
- (void)didToggleShowLessButtonForSection:(long long)arg1;
- (void)didToggleShowMoreButtonForSection:(long long)arg1;
- (id)initWithQueue:(id)arg1;
- (void)pageLoadCompleted:(unsigned long long)arg1;
- (void)pageLoadCompleted:(unsigned long long)arg1 withErrorCode:(long long)arg2;
- (void)pageLoadStarted:(unsigned long long)arg1;
- (void)performOnAnalyticsQueueWithDelay:(long long)arg1 block:(id /* block */)arg2;
- (void)recordSearchResultPageImpressionWithDefaultSearchProviderIdentifier:(id)arg1 searchProviderIdentifier:(id)arg2 isReferredByUnifiedField:(bool)arg3;
- (void)registerQueriableMetric:(unsigned int)arg1 callback:(id /* block */)arg2;
- (void)reportWeakPasswordWarningEvent:(long long)arg1;
- (void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)submitAutomaticReaderActivation:(int)arg1;
- (void)submitVersioningMetricWithVersion:(id)arg1 variant:(int)arg2;
- (void)unableToSilentlyMigrateToCKBookmarksWithReason:(int)arg1;
- (void)userDidParticipateInPasswordAutoFillWithInteraction:(int)arg1;
- (void)userDidReceiveSharedPasswordWithOutcome:(int)arg1;
- (void)userDidSharePasswordWithOutcome:(int)arg1;
- (void)userInteractedWithGeneratedPasswordWithInteractionType:(int)arg1;
- (void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)_sf_activatedHomeScreenQuickAction:(int)arg1;
- (void)_sf_authenticatedForAutoFillWithCategory:(int)arg1 onPageLoad:(bool)arg2 status:(int)arg3 client:(int)arg4;
- (void)_sf_authenticatedForAutoFillWithCategory:(int)arg1 onPageLoad:(bool)arg2 status:(int)arg3 error:(id)arg4 client:(int)arg5;
- (void)_sf_didBeginDownloadWithMIMEType:(id)arg1 uti:(id)arg2 downloadType:(long long)arg3 promptType:(long long)arg4 browserPersona:(unsigned long long)arg5;
- (void)_sf_didChooseIntervalFromAutomaticTabClosingFirstTimeExperiencePrompt:(id)arg1;
- (void)_sf_didCloseTabsAutomaticallyWithCount:(unsigned long long)arg1 tabClosingInterval:(id)arg2;
- (void)_sf_didTerminateWebProcessBeforeNavigationForReason:(int)arg1;
- (void)_sf_enteredTwoUpUsingMethod:(int)arg1;
- (void)_sf_launchedOrResumedSafariWhileInPrivateBrowsing:(bool)arg1;
- (void)_sf_longTappedOnSafariToolbarButton:(int)arg1;
- (void)_sf_longTappedOnSafariViewControllerToolbarButton:(int)arg1;
- (void)_sf_reportAutoFillRequiresAuthenticationPreference:(bool)arg1;
- (void)_sf_reportAutomaticTabClosingInterval:(id)arg1;
- (void)_sf_safariViewControllerDidDismissWithMethod:(int)arg1;
- (void)_sf_safariViewControllerDidPresentFromHostApp:(id)arg1;
- (void)_sf_tappedOnSafariToolbarButton:(int)arg1;
- (void)_sf_tappedOnSafariViewControllerToolbarButton:(int)arg1;
- (void)_sf_twoFingerTappedLinkWithOutcome:(int)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (void)reportNumberOfFlaggedPasswordsUsingSavedPasswordAuditorIfNeeded:(id)arg1;

@end
