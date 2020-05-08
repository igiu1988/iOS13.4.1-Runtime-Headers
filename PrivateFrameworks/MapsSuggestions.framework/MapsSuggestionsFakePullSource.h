/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsFakePullSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {
    unsigned long long  _calledFeedbackForEntry;
    unsigned long long  _calledStart;
    unsigned long long  _calledStop;
    unsigned long long  _calledUpdateSuggestionEntries;
    unsigned long long  _calledUserRemove;
    long long  _calledUserRemoveBehavior;
    unsigned long long  _calledfeedbackForContact;
    unsigned long long  _calledfeedbackForMapItem;
    double  _configFrequency;
    bool  _configSendCopies;
    NSArray * _entriesToPull;
    NSSet * _fakeCanProduceEntriesOfType;
    id /* block */  _handlerForFeedback;
    struct ReadWriteQueue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _readwrite;
    unsigned long long  _totalAdded;
}

@property (readonly) unsigned long long calledFeedbackForEntry;
@property (readonly) unsigned long long calledStart;
@property (readonly) unsigned long long calledStop;
@property (readonly) unsigned long long calledUpdateSuggestionEntries;
@property (readonly) unsigned long long calledUserRemove;
@property (readonly) long long calledUserRemoveBehavior;
@property (readonly) unsigned long long calledfeedbackForContact;
@property (readonly) unsigned long long calledfeedbackForMapItem;
@property double configFrequency;
@property bool configSendCopies;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) unsigned long long totalAdded;
@property (nonatomic, readonly) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_addEntries:(id)arg1;
- (id)_copyEntriesIfNecessary:(id)arg1;
- (unsigned long long)calledFeedbackForEntry;
- (unsigned long long)calledStart;
- (unsigned long long)calledStop;
- (unsigned long long)calledUpdateSuggestionEntries;
- (unsigned long long)calledUserRemove;
- (long long)calledUserRemoveBehavior;
- (unsigned long long)calledfeedbackForContact;
- (unsigned long long)calledfeedbackForMapItem;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (void)configCanProduceEntriesOfType:(id)arg1;
- (double)configFrequency;
- (bool)configSendCopies;
- (void)configureHandlerForFeedbackBlock:(id /* block */)arg1;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;
- (void)pushEntries:(id)arg1;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)setConfigFrequency:(double)arg1;
- (void)setConfigSendCopies:(bool)arg1;
- (void)setPullResponseEntries:(id)arg1;
- (void)start;
- (void)startDebugTest;
- (void)stop;
- (unsigned long long)totalAdded;
- (double)updateSuggestionEntries;

@end
