/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPNamedEntityBackfiller : NSObject {
    PPNamedEntityStore * _namedEntityStore;
    PPTopicStore * _topicStore;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)backfillEntityMappingAndDonation;
- (id)initWithNamedEntityStore:(id)arg1 topicStore:(id)arg2;

@end
