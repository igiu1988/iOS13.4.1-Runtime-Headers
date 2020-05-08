/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXMagicalMomentsNowPlayingUpdateMonitor : NSObject {
    ATXActionResolution * _actionResolver;
    INUIAppIntentDeliverer * _currentAppIntentDeliverer;
    PETScalarEventTracker * _mmEngaged;
    PETScalarEventTracker * _mmError;
    PETScalarEventTracker * _mmTriggered;
    PMMPredictionNotification * _mmUpdateListener;
    NSObject<OS_dispatch_queue> * _queue;
    _PASLock * nowPlayingLock;
    NSDictionary * plistParameters;
}

+ (bool)bundleIdsMatchForDonationEvent:(id)arg1 nowPlayingEvent:(id)arg2;
+ (bool)eventOrderingIsSaneForNowPlayingEvent:(id)arg1 donationEvent:(id)arg2;
+ (bool)isRecentDonationEvent:(id)arg1 maxAgeInHours:(double)arg2;
+ (bool)isRecentNowPlayingEvent:(id)arg1 maxAgeInHours:(double)arg2;
+ (bool)receivedDonationForMostRecentlyPlayingBundleIdGivenNowPlayingEvent:(id)arg1 donationEvent:(id)arg2;
+ (double)secondsSinceDate:(id)arg1;

- (void).cxx_destruct;
- (bool)actionPredictionIsValidForPredictedIntent:(id)arg1 withScore:(float)arg2;
- (bool)appSupportsUpcomingMediaForBundleId:(id)arg1;
- (bool)createMagicalMomentsNowPlayingExperienceWithMMAppPrediction:(id)arg1 consumer:(unsigned long long)arg2;
- (id)finalMMIntentPredictionGivenCandidatePrediction:(id)arg1;
- (bool)foundMatchingUpcomingMediaItemForINPlayMediaIntent:(id)arg1 upcomingMediaContainer:(id)arg2;
- (id)getINPlayMediaIntentFromMostRecentDonationEvent:(id)arg1;
- (id)getIntentEventForMostRecentINPlayMediaIntentDonation;
- (id)getPlayMediaActionPredictionsForBundleId:(id)arg1;
- (id)getUpcomingMediaContainerForBundleId:(id)arg1;
- (id)getValidUpcomingMediaMatchingINPlayMediaIntent:(id)arg1 upcomingMediaContainer:(id)arg2;
- (id)hydrateNowPlayingAppPrediction:(id)arg1;
- (id)init;
- (id)initWithActionResolver:(id)arg1;
- (bool)intentExistsInUpcomingMediaForIntent:(id)arg1 upcomingMediaItems:(id)arg2;
- (id)magicalMomentsPredictionGivenMostRecentDonation:(id)arg1 mostRecentNowPlayingEvent:(id)arg2 predictedIntent:(id)arg3;
- (bool)magicalMomentsPredictionIsValidForPredictionItem:(id)arg1;
- (double)maxAgeInHoursToBeConsideredAVeryRecentNowPlayingEvent;
- (double)maxAgeInHoursToLookForNowPlayingHistory;
- (double)minActionResolutionScoreThreshold;
- (double)minMagicalMomentsConfidenceThreshold;
- (id)mostRecentNowPlayingDuetEvent;
- (id)predictionForUpcomingMediaAppGivenRecentDonation:(id)arg1 mostRecentNowPlayingEvent:(id)arg2 predictedIntent:(id)arg3;
- (bool)predictionIsBlacklisted:(id)arg1;
- (id)prepareNowPlayingInfoFromNowPlayingInfoDictionary:(id)arg1 andIntent:(id)arg2;
- (void)primeApplicationWithHydratedPlayMediaIntent:(id)arg1;
- (void)resignFallbackNowPlayingInfoCenter;
- (void)setupNowPlayingPlayerChangedUpdateListener;
- (void)setupPredictionUpdateListener;
- (bool)trackTitlesMatchForDonationEvent:(id)arg1 nowPlayingEvent:(id)arg2;
- (bool)userHasNotListenedToContentForALongTimeGivenNowPlayingEvent:(id)arg1 donationEvent:(id)arg2;
- (bool)userVeryRecentlyListenedToContentGivenNowPlayingEvent:(id)arg1;

@end
