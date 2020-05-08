/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface _PSSuggester : NSObject {
    _PSSuggesterConfiguration * _configuration;
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) _PSSuggesterConfiguration *configuration;

+ (id)suggesterWithDaemon;

- (void).cxx_destruct;
- (id)configuration;
- (void)dealloc;
- (id)hourOfDayProbabilitiesToInteractWithContact:(id)arg1;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithDaemonUsingConfiguration:(id)arg1;
- (void)provideFeedbackForMessagesZkwSuggestions:(id)arg1;
- (void)provideFeedbackForSuggestions:(id)arg1;
- (id)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2;
- (id)rankedGlobalSuggestionsFromContext:(id)arg1 contactsOnly:(bool)arg2;
- (id)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2;
- (id)rankedZKWSuggestionsFromContext:(id)arg1;
- (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2;
- (id)shareExtensionSuggestionsFromContext:(id)arg1;
- (id)shareSheetInteractionsFromContext:(id)arg1;
- (id)shareSheetInteractionsFromContext:(id)arg1 maximumNumberOfSuggestions:(long long)arg2;
- (id)suggestInteractionsFromContext:(id)arg1;

@end
