/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPMTopicDonation : NSObject {
    PETDistributionEventTracker * _tracker;
}

@property (nonatomic, readonly) PETDistributionEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(double)arg1 source:(struct PPMTopicDonationSource_ { unsigned long long x1; })arg2 algorithm:(struct PPMTopicAlgorithm_ { unsigned long long x1; })arg3;
- (id)tracker;

@end
