/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardAutocorrectionController : NSObject {
    TIAutocorrectionList * _autocorrectionList;
    NSHashTable * _autocorrectionObservers;
    bool  _deferredAutocorrection;
    bool  _needsAutocorrection;
    bool  _requestedAutocorrection;
    unsigned long long  _signpostToken;
    TIAutocorrectionList * _textSuggestionList;
}

@property (nonatomic, readonly) TIKeyboardCandidate *autocorrection;
@property (nonatomic, retain) TIAutocorrectionList *autocorrectionList;
@property (nonatomic, retain) NSHashTable *autocorrectionObservers;
@property (nonatomic) bool deferredAutocorrection;
@property (nonatomic) bool needsAutocorrection;
@property (nonatomic) bool requestedAutocorrection;
@property (nonatomic, retain) TIAutocorrectionList *textSuggestionList;

- (void).cxx_destruct;
- (void)_notifyObserversOfClearedAutocorrectionList;
- (void)_notifyObserversOfUpdatedAutocorrectionList:(id)arg1;
- (void)_setAutocorrectionList:(id)arg1 notifyObserver:(bool)arg2;
- (void)addAutocorrectionObserver:(id)arg1;
- (id)autocorrection;
- (id)autocorrectionList;
- (id)autocorrectionObservers;
- (void)clearAutocorrection;
- (void)clearAutocorrectionAndNotifyObservers:(bool)arg1;
- (void)clearAutofillAndTextSuggestions;
- (bool)deferredAutocorrection;
- (bool)hasAutocorrection;
- (bool)hasAutofillCandidates;
- (bool)hasCaseableAutocorrection;
- (bool)hasContinuousPathConversions;
- (bool)hasProactiveCandidates;
- (id)init;
- (bool)needsAutocorrection;
- (void)removeAutocorrectionObserver:(id)arg1;
- (void)requestAutocorrectionWithExecutionContext:(id)arg1;
- (bool)requestedAutocorrection;
- (void)setAutocorrectionList:(id)arg1;
- (void)setAutocorrectionObservers:(id)arg1;
- (void)setDeferredAutocorrection:(bool)arg1;
- (void)setNeedsAutocorrection;
- (void)setNeedsAutocorrection:(bool)arg1;
- (void)setRequestedAutocorrection:(bool)arg1;
- (void)setTextSuggestionList:(id)arg1;
- (id)textSuggestionList;
- (void)updateSuggestionViews;

@end
