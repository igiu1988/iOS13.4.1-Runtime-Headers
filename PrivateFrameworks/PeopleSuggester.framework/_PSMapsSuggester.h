/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface _PSMapsSuggester : NSObject {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)deleteMapsFeedbackEventsMatchingHandle:(id)arg1 contactId:(id)arg2 startLocationId:(id)arg3 endLocationId:(id)arg4;
- (id)init;
- (void)provideMapsFeedback:(id)arg1;
- (id)suggestionsFromContext:(id)arg1 maxSuggestions:(unsigned long long)arg2;

@end