/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXValueEstimator : NSObject

+ (void)_addEstimateToDictionary:(id)arg1 estimate:(double)arg2 donation:(id)arg3;
+ (bool)_addLazyEstimateToDictionary:(id)arg1 estimate:(id)arg2 donation:(id)arg3;
+ (void)_donationEstimation:(id)arg1 priorEstimates:(id)arg2;
+ (id)computeAndLogValueEstimates:(id)arg1;
+ (id)getEstimates:(id)arg1;
+ (id)getIntentEstimates:(id)arg1;
+ (id)getIntentSessions:(id)arg1;

@end
