/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXMagicalMomentsAppPredictor : NSObject {
    ATXCoreDuetContextHelper * _contextHelper;
    ATXTimeBucketedRateLimiter * _rateLimiter;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)addNowPlayingEventsToAppLaunches:(id)arg1;
- (id)fetchAppLaunchEventsForTraining;
- (id)generateAppLaunchCountedSetFromAppLaunches:(id)arg1;
- (id)init;
- (void)train;

@end
