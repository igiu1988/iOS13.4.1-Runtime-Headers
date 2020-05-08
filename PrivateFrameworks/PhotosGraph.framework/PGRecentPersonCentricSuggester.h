/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGRecentPersonCentricSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    NSDictionary * _assetsByPersonLocalIdentifier;
    NSEnumerator * _birthdayPersonPotentialSuggestionEnumerator;
    NSArray * _birthdayPersonPotentialSuggestions;
    NSEnumerator * _longTimeNoSeePersonPotentialSuggestionEnumerator;
    NSArray * _longTimeNoSeePersonPotentialSuggestions;
    PGSuggestionOptions * _options;
    NSEnumerator * _personPotentialSuggestionEnumerator;
    NSArray * _personPotentialSuggestions;
    NSMutableSet * _usedPersonLocalIdentifiers;
    NSDictionary * _verifiedPersonByPersonLocalIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (id)assetsByPersonLocalIdentifierWithOptions:(id)arg1;
- (id)assetsWithSinglePersonBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (id)assetsWithSinglePersonWithOptions:(id)arg1;
- (id)birthdayPersonPotentialSuggestionsWithOptions:(id)arg1;
- (id)lastAssetWithPerson:(id)arg1 beforeDate:(id)arg2;
- (id)longTimeNoSeePersonPotentialSuggestionsWithOptions:(id)arg1;
- (id)nextBirthdayPersonPotentialSuggestion;
- (id)nextLongTimeNoSeePersonPotentialSuggestion;
- (id)nextPersonPotentialSuggestion;
- (id)nextPotentialSuggestion;
- (id)nextSuggestion;
- (id)personPotentialSuggestionsWithOptions:(id)arg1;
- (void)reset;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionWithPotentialSuggestion:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (void)updateUsedPersonLocalIdentifiersFromPotentialSuggestions:(id)arg1;
- (id)verifiedPersonByPersonLocalIdentifier;

@end
