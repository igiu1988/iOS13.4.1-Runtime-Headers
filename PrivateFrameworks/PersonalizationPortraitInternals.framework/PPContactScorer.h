/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPContactScorer : NSObject

+ (id)_contactRankMapWithRankedIdentifiers:(id)arg1;
+ (id)_contactsWithIdentifiers:(id)arg1;
+ (id)_scoreAndSortContacts:(id)arg1 rankMap:(id)arg2;
+ (double)_scoreWithInitialScore:(double)arg1 identifier:(id)arg2 rankMap:(id)arg3;
+ (id)_scoredLabeledValues:(id)arg1;
+ (id)mostRelevantContacts;
+ (id)mostRelevantContactsWithName:(id)arg1;
+ (void)scoreContactNameRecords:(id)arg1;
+ (id)scoredContactsWithContacts:(id)arg1;

@end
