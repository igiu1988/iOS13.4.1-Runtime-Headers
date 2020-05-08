/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface VCActionDonationFetcher : NSObject

+ (id)actionPredictionBlacklist;
+ (id)appPredictionBlacklist;
+ (id)donationFromEvent:(id)arg1;
+ (id)donationFromEvent:(id)arg1 filteringForTopLevel:(bool)arg2;
+ (id)donationWithUUID:(id)arg1;
+ (id)fetchDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(bool)arg3 filteringForIsEligibleForPrediction:(bool)arg4;
+ (id)fetchDonationsWithLimit:(unsigned long long)arg1 filteringForIsEligibleForPrediction:(bool)arg2;
+ (id)fetchDonationsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(bool)arg3;
+ (id)fetchEventsWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
+ (id)filterDonations:(id)arg1 forApplicationBundleIdentifier:(id)arg2;
+ (void)getPredicateForIntentsWithApplicationBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getPredicateForUserActivitiesWithApplicationBundleIdentifier:(id)arg1 filteringForIsEligibleForPrediction:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (id)isEligibleForPredictionPredicate;
+ (id)keyPathForStream:(id)arg1;
+ (bool)shouldFilterDonationsForAppWithApplicationBundleIdentifier:(id)arg1;
+ (bool)shouldKeepAction:(id)arg1 forAppWithBundleIdentifier:(id)arg2 filteringForTopLevel:(bool)arg3;
+ (bool)shouldKeepActionWithAppBundleIdentifierForDisplay:(id)arg1;
+ (void)sourceAppIdentifierArrayForApplicationBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)streams;

@end
