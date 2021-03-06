/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface _PPNamedEntityNormalization : NSObject {
    PPMutableAggregatedItem * aggregatedRecord;
    NSMutableDictionary * countByCategory;
    NSCountedSet * countByName;
    PPNamedEntity * entity;
}

- (void).cxx_destruct;
- (unsigned long long)dominantCategory;
- (id)dominantEntityName;
- (id)initWithRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4;

@end
