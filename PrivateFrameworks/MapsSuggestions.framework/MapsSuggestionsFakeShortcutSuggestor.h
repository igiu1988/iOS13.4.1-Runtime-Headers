/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsFakeShortcutSuggestor : NSObject <MapsSuggestionsShortcutSuggestor> {
    unsigned long long  _calledPropose;
    NSError * _configuredError;
    NSArray * _configuredResults;
    struct ReadWriteQueue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _rwQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)calledRequestSuggest;
- (void)configureError:(id)arg1;
- (void)configureResults:(id)arg1;
- (id)init;
- (void)reset;
- (bool)suggestShortcutsOfType:(long long)arg1 handler:(id /* block */)arg2;

@end
