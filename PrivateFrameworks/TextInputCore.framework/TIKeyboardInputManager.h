/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManager : TIKeyboardInputManagerBase <TILanguageSelectionControllerDelegate, TIRevisionHistoryDelegate> {
    NSCharacterSet * _allowPredictionCharacterSet;
    TILRUDictionary * _autocorrectionForCurrentStem;
    TILRUDictionary * _autocorrectionHistory;
    TILRUDictionary * _autocorrectionListsForWordsInDocument;
    TILRUDictionary * _autocorrectionListsSuggestedForCurrentInput;
    TIAutoshiftRegularExpressionLoader * _autoshiftRegexLoader;
    NSMutableDictionary * _cachedLayoutTags;
    id /* block */  _candidateGenerationCompletionHandler;
    <TICandidateHandler> * _candidateHandlerForOpenRequest;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _candidateRange;
    TICharacterSetDescription * _closingQuotes;
    TIKeyboardInputManagerConfig * _config;
    TIKeyboardInputManagerState * _currentState;
    long long  _deleteKeyCount;
    bool  _didInitialSync;
    TIEmojiCandidateGenerator * _emojiCandidateGenerator;
    TIKeyboardCandidate * _hitTestCorrectedInputMatchingCandidate;
    bool  _isEditingWordPrefix;
    TIKeyboardLayout * _keyLayout;
    TIKeyboardFeatureSpecialization * _keyboardFeatureSpecialization;
    TIKeyboardState * _keyboardState;
    TILanguageSelectionController * _languageSelectionController;
    TIKeyboardCandidate * _lastAcceptedText;
    TIAutocorrectionList * _lastContinuousPathAutocorrection;
    int  _lastHitTestKeycode;
    unsigned long long  _lastNumCandidatesRequest;
    TIKeyboardLayoutState * _layoutState;
    unsigned long long  _linguisticResourceStatus;
    TICharacterSetDescription * _openingQuotes;
    id /* block */  _proactiveSuggestionsGenerationBlock;
    TILRUDictionary * _recentAutocorrections;
    TILRUDictionary * _recentPredictiveInputSelections;
    TILRUDictionary * _rejectedAutocorrections;
    NSMutableSet * _rejectedConversionsForCurrentContinuousPath;
    TILRUDictionary * _rejectedDisplayedAutocorrectionsForCurrentStem;
    TIRevisionHistory * _revisionHistory;
    TISKMetricCollector * _skMetricCollector;
    TISmartPunctuationOptions * _smartOptions;
    TISmartSelector * _smartSelector;
    TIInputContextHistory * _synchronizedInputContextHistory;
    TITextCheckerExemptions * _textCheckerExemptions;
    TITypingSessionMonitor * _typingSessionMonitor;
    long long  _userInterfaceIdiom;
    TIUserModel * _userModel;
    TICharacterSetDescription * _wordCharacters;
    bool  _wordLearningEnabled;
    NSMutableString * m_composedText;
    struct TIInputManager { int (**x1)(); struct vector<KB::Input, std::__1::allocator<KB::Input> > { struct Input {} *x_2_1_1; struct Input {} *x_2_1_2; struct __compressed_pair<KB::Input *, std::__1::allocator<KB::Input> > { struct Input {} *x_3_2_1; } x_2_1_3; } x2; struct String { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned char x_3_1_4; char *x_3_1_5; BOOL x_3_1_6[16]; } x3; struct String { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned char x_4_1_4; char *x_4_1_5; BOOL x_4_1_6[16]; } x4; unsigned int x5; struct String { unsigned short x_6_1_1; unsigned short x_6_1_2; unsigned short x_6_1_3; unsigned char x_6_1_4; char *x_6_1_5; BOOL x_6_1_6[16]; } x6; struct retain_ptr<const __CFLocale *> { struct __CFLocale {} *x_7_1_1; } x7; struct ConfidenceModel { struct Params { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; int x_1_2_6; int x_1_2_7; } x_8_1_1; } x8; struct LockedInput { unsigned int x_9_1_1; unsigned int x_9_1_2; } x9; struct unique_ptr<TI::Favonius::StrokeBuildManager, std::__1::default_delete<TI::Favonius::StrokeBuildManager> > { struct __compressed_pair<TI::Favonius::StrokeBuildManager *, std::__1::default_delete<TI::Favonius::StrokeBuildManager> > { struct StrokeBuildManager {} *x_1_2_1; } x_10_1_1; } x10; } * m_impl;
    unsigned long long  m_initialSelectedIndex;
    struct shared_ptr<KB::LanguageModel> { 
        struct LanguageModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_lightweight_language_model;
    struct shared_ptr<KB::TypologyLogger> { 
        struct TypologyLogger {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_typology_recorder;
}

@property (nonatomic, readonly) NSCharacterSet *allowPredictionCharacterSet;
@property (nonatomic, retain) TILRUDictionary *autocorrectionForCurrentStem;
@property (nonatomic, readonly) TILRUDictionary *autocorrectionHistory;
@property (nonatomic, readonly) TILRUDictionary *autocorrectionListsForWordsInDocument;
@property (nonatomic, readonly) TILRUDictionary *autocorrectionListsSuggestedForCurrentInput;
@property (nonatomic, retain) TIAutoshiftRegularExpressionLoader *autoshiftRegexLoader;
@property (nonatomic, copy) id /* block */ candidateGenerationCompletionHandler;
@property (nonatomic, retain) <TICandidateHandler> *candidateHandlerForOpenRequest;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } candidateRange;
@property (nonatomic, readonly) TIKeyboardInputManagerConfig *config;
@property (nonatomic, readonly) TIKeyboardInputManagerState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long deleteKeyCount;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TIEmojiCandidateGenerator *emojiCandidateGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TIKeyboardCandidate *hitTestCorrectedInputMatchingCandidate;
@property (nonatomic) bool isEditingWordPrefix;
@property (nonatomic, retain) TIKeyboardLayout *keyLayout;
@property (nonatomic, readonly) TIKeyboardFeatureSpecialization *keyboardFeatureSpecialization;
@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic, readonly) NSArray *languageModelAssets;
@property (nonatomic, readonly) TILanguageSelectionController *languageSelectionController;
@property (nonatomic, copy) TIKeyboardCandidate *lastAcceptedText;
@property (nonatomic, retain) TIAutocorrectionList *lastContinuousPathAutocorrection;
@property (nonatomic) unsigned long long lastNumCandidatesRequest;
@property (nonatomic, readonly) unsigned long long linguisticResourceStatus;
@property (nonatomic, copy) id /* block */ proactiveSuggestionsGenerationBlock;
@property (nonatomic, readonly) TILRUDictionary *recentAutocorrections;
@property (nonatomic, readonly) TILRUDictionary *recentPredictiveInputSelections;
@property (nonatomic, readonly) TILRUDictionary *rejectedAutocorrections;
@property (nonatomic, retain) NSMutableSet *rejectedConversionsForCurrentContinuousPath;
@property (nonatomic, retain) TILRUDictionary *rejectedDisplayedAutocorrectionsForCurrentStem;
@property (nonatomic, readonly) TIRevisionHistory *revisionHistory;
@property (nonatomic, retain) TISKMetricCollector *skMetricCollector;
@property (nonatomic, readonly) TISmartPunctuationOptions *smartOptions;
@property (nonatomic, retain) TISmartSelector *smartSelector;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TITextCheckerExemptions *textCheckerExemptions;
@property (nonatomic, retain) TITypingSessionMonitor *typingSessionMonitor;
@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic, retain) TIUserModel *userModel;
@property (getter=isWordLearningEnabled, nonatomic) bool wordLearningEnabled;

+ (void)clearRecentsFileForIdentifier:(id)arg1;
+ (id)dynamicDictionaryFilePathForInputMode:(id)arg1;
+ (id)keyboardUserDirectory;
+ (id)offlineLearningHandleForInputMode:(id)arg1;
+ (id)recentsFilePathForIdentifier:(id)arg1;
+ (void)removeAllDynamicDictionaries;
+ (void)removeDynamicDictionaryForInputMode:(id)arg1;
+ (void)resetResponseKit;
+ (int)shiftContextForShiftState:(int)arg1 autocapitalizationType:(unsigned long long)arg2;
+ (id)userDictionaryWordKeyPairsFilePath;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_canStartSentenceAfterString:(id)arg1 maxRecursionDepth:(unsigned long long)arg2;
- (void)acceptCurrentCandidateIfSelectedWithContext:(id)arg1;
- (void)acceptCurrentCandidateWithContext:(id)arg1;
- (void)acceptInput;
- (bool)acceptInputString:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })acceptableRangeFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inText:(id)arg2 withSelectionLocation:(unsigned long long)arg3;
- (bool)acceptsCharacter:(unsigned int)arg1;
- (bool)acceptsRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2;
- (id)addInput:(id)arg1 flags:(unsigned int)arg2 point:(struct CGPoint { double x1; double x2; })arg3 firstDelete:(unsigned long long*)arg4;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (void)addItemToConversationHistoryWithText:(id)arg1 timestamp:(id)arg2 senderID:(id)arg3;
- (void)addSynthesizedTouchToInput:(id)arg1;
- (long long)addTouch:(id)arg1 shouldHitTest:(bool)arg2;
- (struct TITokenID { unsigned int x1; unsigned int x2; })addWord:(id)arg1 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg2 contextLength:(unsigned long long)arg3 surfaceFormPtr:(id*)arg4;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (id)allowPredictionCharacterSet;
- (bool)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1;
- (void)appendToInputContext:(id)arg1;
- (id)autocorrection;
- (id)autocorrectionCandidateForInput:(id)arg1 withCandidate:(const struct Candidate { struct Vector<KB::Word, 3> { unsigned long long x_1_1_1; struct VectorBuffer<KB::Word, 3> { struct Word {} *x_2_2_1; unsigned long long x_2_2_2; struct AlignedBuffer<480, 8> { BOOL x_3_3_1[480]; } x_2_2_3; } x_1_1_2; } x1; float x2; struct CandidateScoreFactors { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; float x_3_1_5; float x_3_1_6; } x3; unsigned int x4; unsigned int x5; struct LanguageModelContext { struct vector<TITokenID, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_1_2_1; struct TITokenID {} *x_1_2_2; struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_3_3_1; } x_1_2_3; } x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; } x6; struct String { unsigned short x_7_1_1; unsigned short x_7_1_2; unsigned short x_7_1_3; unsigned char x_7_1_4; char *x_7_1_5; BOOL x_7_1_6[16]; } x7; struct ByteString { union { struct { unsigned short x_1_3_1; char *x_1_3_2; } x_1_2_1; struct { unsigned short x_2_3_1; unsigned char x_2_3_2[14]; } x_1_2_2; } x_8_1_1; } x8; }*)arg2;
- (id)autocorrectionCandidateForInput:(id)arg1 withCandidate:(const struct Candidate { struct Vector<KB::Word, 3> { unsigned long long x_1_1_1; struct VectorBuffer<KB::Word, 3> { struct Word {} *x_2_2_1; unsigned long long x_2_2_2; struct AlignedBuffer<480, 8> { BOOL x_3_3_1[480]; } x_2_2_3; } x_1_1_2; } x1; float x2; struct CandidateScoreFactors { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; float x_3_1_5; float x_3_1_6; } x3; unsigned int x4; unsigned int x5; struct LanguageModelContext { struct vector<TITokenID, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_1_2_1; struct TITokenID {} *x_1_2_2; struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_3_3_1; } x_1_2_3; } x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; } x6; struct String { unsigned short x_7_1_1; unsigned short x_7_1_2; unsigned short x_7_1_3; unsigned char x_7_1_4; char *x_7_1_5; BOOL x_7_1_6[16]; } x7; struct ByteString { union { struct { unsigned short x_1_3_1; char *x_1_3_2; } x_1_2_1; struct { unsigned short x_2_3_1; unsigned char x_2_3_2[14]; } x_1_2_2; } x_8_1_1; } x8; }*)arg2 insertingSpace:(bool)arg3 sharedPrefixLength:(unsigned long long)arg4;
- (id)autocorrectionForCurrentStem;
- (id)autocorrectionHistory;
- (id)autocorrectionList;
- (id)autocorrectionListForEmptyInputWithDesiredCandidateCount:(unsigned long long)arg1;
- (id)autocorrectionListForSelectedText;
- (id)autocorrectionListWithCandidateCount:(unsigned long long)arg1;
- (id)autocorrectionListsForWordsInDocument;
- (id)autocorrectionListsSuggestedForCurrentInput;
- (id)autocorrectionRecordForWord:(id)arg1;
- (unsigned long long)autoquoteType;
- (id)autoshiftRegexLoader;
- (bool)canComputeSentenceContextForInputStem:(id)arg1;
- (bool)canHandleKeyHitTest;
- (bool)canRetrocorrectInputAtIndex:(unsigned int)arg1;
- (bool)canStartSentenceAfterString:(id)arg1;
- (bool)canTrimInputAtIndex:(unsigned int)arg1;
- (id /* block */)candidateGenerationCompletionHandler;
- (id)candidateHandlerForOpenRequest;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })candidateRange;
- (void)candidateRejected:(id)arg1;
- (id)candidateResultSet;
- (id)candidateResultSetFromCandidates:(id)arg1;
- (id)candidateResultSetFromCandidates:(id)arg1 proactiveTriggers:(id)arg2;
- (id)candidates;
- (id)candidatesForString:(id)arg1;
- (void)candidatesOfferedFeedback:(id)arg1 keyboardState:(id)arg2;
- (id)cannedResponseCandidatesForString:(id)arg1;
- (void)checkAutocorrectionDictionaries;
- (void)clearDynamicDictionary;
- (void)clearHumanReadableTrace;
- (void)clearIgnoredSuggestionForCurrentInput;
- (void)clearInput;
- (void)clearInputContext;
- (bool)closeCandidateGenerationContextWithResults:(id)arg1;
- (id)closingQuotes;
- (bool)commitsAcceptedCandidate;
- (id)completionCandidates:(unsigned long long)arg1;
- (id)config;
- (id)configurationPropertyList;
- (id)contextBeforeWithDesiredLength:(unsigned long long)arg1;
- (void)continuousPathCandidateRejected:(id)arg1;
- (id)continuousPathCandidates:(unsigned long long)arg1;
- (double)continuousPathLanguageWeight;
- (unsigned long long)countOfWordsIninputStem:(id)arg1;
- (id)currentInputModeIdentifier;
- (id)currentState;
- (id)currentWordStem;
- (void)dealloc;
- (void)decrementLanguageModelCount:(id)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg3 contextLength:(unsigned long long)arg4;
- (id)defaultCandidate;
- (bool)delayedCandidateList;
- (id)deleteFromInput:(unsigned long long*)arg1;
- (void)deleteFromInputWithContext:(id)arg1;
- (long long)deleteKeyCount;
- (id)deletedSuffixOfInputContext:(id)arg1 whenDeletingFromInputString:(id)arg2 withInputIndex:(unsigned long long)arg3 deletionCount:(unsigned long long)arg4;
- (bool)deletesComposedTextByComposedCharacterSequence;
- (id)deltaDictionaryPathForInputMode:(id)arg1;
- (bool)dictionaryContainsWord:(id)arg1;
- (id)dictionaryInputMode;
- (id)dictionaryPathForContentType:(id)arg1 inputMode:(id)arg2 filePrefix:(id)arg3;
- (id)dictionaryStringForExternalString:(id)arg1;
- (bool)dictionaryUsesExternalEncoding;
- (id)didAcceptCandidate:(id)arg1;
- (void)didDropInputStem;
- (void)didUpdateInputModeProbabilities:(id)arg1;
- (void)didUpdateInputModes:(id)arg1;
- (void)displayedCandidateRejected;
- (bool)documentState:(id)arg1 matchesDocumentState:(id)arg2;
- (bool)doesComposeText;
- (bool)doesSelectedTextGenerateEmojiCandidates;
- (void)dropInput;
- (void)dropInputPrefix:(unsigned int)arg1;
- (void)dynamicDictionariesRemoved:(id)arg1;
- (id)dynamicDictionaryPathForInputMode:(id)arg1;
- (id)dynamicResourcePath;
- (id)emojiCandidateGenerator;
- (bool)enablesProactiveQuickType;
- (void)enumerateWordSuffixesOfString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usingBlock:(id /* block */)arg3;
- (id)extendedAutocorrection:(id)arg1 spanningInputsForCandidates:(id)arg2 emojis:(id)arg3;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1;
- (id)externalStringForDictionaryString:(id)arg1;
- (id)externalStringToInternal:(id)arg1;
- (struct TITokenID { unsigned int x1; unsigned int x2; })findTokenIDForWord:(id)arg1 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned int)arg4;
- (struct TITokenID { unsigned int x1; unsigned int x2; })findTokenIDForWord:(id)arg1 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned int)arg4 surfaceFormPtr:(id*)arg5 hasCaseInsensitiveStaticVariant:(bool*)arg6;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withInput:(id)arg3;
- (void)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withInput:(id)arg3 async:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 candidateHandler:(id)arg3;
- (id)generateAutofillFormWithKeyboardState:(id)arg1;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)generateCannedResponseCandidatesAsyncForString:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)generateOneTimeCodeCandidatesWithKeyboardState:(id)arg1;
- (id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2;
- (struct RefPtr<KB::DictionaryContainer> { struct DictionaryContainer {} *x1; })getDictionary;
- (id)getTestingStateObject;
- (id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2;
- (void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(id /* block */)arg3;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (id)handleKeyboardInput:(id)arg1;
- (bool)hasLegacyInputStem;
- (bool)hasLegacyInputString;
- (id)hitTestCorrectedInputMatchingCandidate;
- (id)humanReadableTrace;
- (bool)ignoresDeadKeys;
- (bool)inHardwareKeyboardMode;
- (void)incrementLanguageModelCount:(id)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg3 contextLength:(unsigned long long)arg4 saveToDifferentialPrivacy:(int)arg5;
- (void)incrementUsageTrackingKey:(id)arg1;
- (void)incrementUsageTrackingKeyForAppWithIsSentence:(bool)arg1;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(id)arg1 autocorrectionTypes:(unsigned int)arg2;
- (void)incrementUsageTrackingKeysForDeleteFromInput;
- (id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2;
- (id)indexesOfDuplicatesInCandidates:(id)arg1;
- (struct TIInputManager { int (**x1)(); struct vector<KB::Input, std::__1::allocator<KB::Input> > { struct Input {} *x_2_1_1; struct Input {} *x_2_1_2; struct __compressed_pair<KB::Input *, std::__1::allocator<KB::Input> > { struct Input {} *x_3_2_1; } x_2_1_3; } x2; struct String { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned char x_3_1_4; char *x_3_1_5; BOOL x_3_1_6[16]; } x3; struct String { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned char x_4_1_4; char *x_4_1_5; BOOL x_4_1_6[16]; } x4; unsigned int x5; struct String { unsigned short x_6_1_1; unsigned short x_6_1_2; unsigned short x_6_1_3; unsigned char x_6_1_4; char *x_6_1_5; BOOL x_6_1_6[16]; } x6; struct retain_ptr<const __CFLocale *> { struct __CFLocale {} *x_7_1_1; } x7; struct ConfidenceModel { struct Params { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; int x_1_2_6; int x_1_2_7; } x_8_1_1; } x8; struct LockedInput { unsigned int x_9_1_1; unsigned int x_9_1_2; } x9; struct unique_ptr<TI::Favonius::StrokeBuildManager, std::__1::default_delete<TI::Favonius::StrokeBuildManager> > { struct __compressed_pair<TI::Favonius::StrokeBuildManager *, std::__1::default_delete<TI::Favonius::StrokeBuildManager> > { struct StrokeBuildManager {} *x_1_2_1; } x_10_1_1; } x10; }*)initImplementation;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;
- (id)initWithInputMode:(id)arg1 keyboardState:(id)arg2;
- (unsigned long long)initialCandidateBatchCount;
- (unsigned long long)initialSelectedIndex;
- (id)inputContext;
- (unsigned int)inputCount;
- (unsigned int)inputIndex;
- (void)inputLocationChanged;
- (id)inputStem;
- (id)inputString;
- (id)inputStringFromDocumentState:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })inputStringRangeFromRevisionHistory;
- (id)inputsToReject;
- (void)installTypologyTraceLogger;
- (unsigned long long)internalIndexOfInputStemSuffix:(id)arg1;
- (unsigned int)internalIndexToExternal:(unsigned int)arg1;
- (id)internalInputContext;
- (id)internalStringToExternal:(id)arg1;
- (bool)isContinuousPathCandidate:(id)arg1 replacementForOriginalConversion:(id)arg2;
- (bool)isEditingExistingWord;
- (bool)isEditingWordPrefix;
- (bool)isHardwareKeyboardAutocorrectionEnabled;
- (bool)isLinguisticResourceUpdateScheduled;
- (bool)isProgressivelyPathing;
- (bool)isTypologyEnabled;
- (bool)isWordLearningEnabled;
- (id)keyEventMap;
- (id)keyLayout;
- (id)keyboardBehaviors;
- (id)keyboardConfiguration;
- (id)keyboardConfigurationAccentKeyString;
- (bool)keyboardConfigurationAssertDefaultKeyPlane;
- (id)keyboardConfigurationLayoutTag;
- (id)keyboardFeatureSpecialization;
- (id)keyboardState;
- (id)languageModelAssets;
- (id)languageModelAssetsForInputMode:(id)arg1;
- (id)languageSelectionController;
- (id)lastAcceptedText;
- (id)lastContinuousPathAutocorrection;
- (unsigned long long)lastNumCandidatesRequest;
- (id)layoutTagsForLayout:(id)arg1;
- (void)learnRecentMessageUserIsRespondingTo;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })legacyInputRangeForTokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { struct String { unsigned short x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned char x_1_1_4; char *x_1_1_5; BOOL x_1_1_6[16]; } x1; struct String { unsigned short x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; unsigned char x_2_1_4; char *x_2_1_5; BOOL x_2_1_6[16]; } x2; struct String { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned char x_3_1_4; char *x_3_1_5; BOOL x_3_1_6[16]; } x3; struct String { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned char x_4_1_4; char *x_4_1_5; BOOL x_4_1_6[16]; } x4; struct String { unsigned short x_5_1_1; unsigned short x_5_1_2; unsigned short x_5_1_3; unsigned char x_5_1_4; char *x_5_1_5; BOOL x_5_1_6[16]; } x5; unsigned int x6; float x7; })lexiconInformation;
- (unsigned long long)linguisticResourceStatus;
- (void)loadDictionaries;
- (void)loadFavoniusTypingModel;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })loadedLightweightLanguageModel;
- (void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2;
- (void)logToTypologyRecorderWithString:(id)arg1;
- (id)markedText;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (unsigned long long)maximumShortcutLengthAllowed;
- (void)mobileAssetsChanged:(id)arg1;
- (bool)newInputAcceptsUserSelectedCandidate;
- (id)newInputManagerState;
- (bool)nextInputWouldStartSentence;
- (bool)nextInputWouldStartSentenceAfterInput:(id)arg1;
- (id)nonstopPunctuationCharacters;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)arg1;
- (id)openingQuotes;
- (id)originatingAutocorrectionListForCandidate:(id)arg1;
- (id)pathToDeltaStaticDictionary;
- (id)pathToDynamicDictionary;
- (id)pathToPhraseDictionary;
- (id)pathToStaticDictionary;
- (long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (unsigned long long)phraseBoundary;
- (id)phraseCandidateCompletedByWord:(const struct String { unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; char *x5; BOOL x6[16]; }*)arg1 allowNoSuggest:(bool)arg2 forAutocorrection:(bool)arg3 shiftContext:(int)arg4;
- (id)phraseDictionaryPathForInputMode:(id)arg1;
- (const struct USet { }*)precomposedCharacterSet;
- (id)predictionCandidates:(unsigned long long)arg1 predictionType:(int)arg2;
- (unsigned long long)prefixLengthOfInput:(id)arg1 sharedWithCandidate:(const struct Candidate { struct Vector<KB::Word, 3> { unsigned long long x_1_1_1; struct VectorBuffer<KB::Word, 3> { struct Word {} *x_2_2_1; unsigned long long x_2_2_2; struct AlignedBuffer<480, 8> { BOOL x_3_3_1[480]; } x_2_2_3; } x_1_1_2; } x1; float x2; struct CandidateScoreFactors { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; float x_3_1_5; float x_3_1_6; } x3; unsigned int x4; unsigned int x5; struct LanguageModelContext { struct vector<TITokenID, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_1_2_1; struct TITokenID {} *x_1_2_2; struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_3_3_1; } x_1_2_3; } x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; } x6; struct String { unsigned short x_7_1_1; unsigned short x_7_1_2; unsigned short x_7_1_3; unsigned char x_7_1_4; char *x_7_1_5; BOOL x_7_1_6[16]; } x7; struct ByteString { union { struct { unsigned short x_1_3_1; char *x_1_3_2; } x_1_2_1; struct { unsigned short x_2_3_1; unsigned char x_2_3_2[14]; } x_1_2_2; } x_8_1_1; } x8; }*)arg2;
- (unsigned long long)prefixLengthOfInput:(id)arg1 sharedWithCandidates:(const struct CandidateCollection { struct vector<KB::Candidate, std::__1::allocator<KB::Candidate> > { struct Candidate {} *x_1_1_1; struct Candidate {} *x_1_1_2; struct __compressed_pair<KB::Candidate *, std::__1::allocator<KB::Candidate> > { struct Candidate {} *x_3_2_1; } x_1_1_3; } x1; struct vector<KB::Candidate, std::__1::allocator<KB::Candidate> > { struct Candidate {} *x_2_1_1; struct Candidate {} *x_2_1_2; struct __compressed_pair<KB::Candidate *, std::__1::allocator<KB::Candidate> > { struct Candidate {} *x_3_2_1; } x_2_1_3; } x2; int x3; }*)arg2;
- (id)primaryInputMode;
- (id /* block */)proactiveSuggestionsGenerationBlock;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfUnclosedQuoteMatchingQuote:(id)arg1 inString:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)rawInputString;
- (id)recentAutocorrections;
- (id)recentPredictiveInputSelections;
- (void)reconcileCandidates:(struct CandidateCollection { struct vector<KB::Candidate, std::__1::allocator<KB::Candidate> > { struct Candidate {} *x_1_1_1; struct Candidate {} *x_1_1_2; struct __compressed_pair<KB::Candidate *, std::__1::allocator<KB::Candidate> > { struct Candidate {} *x_3_2_1; } x_1_1_3; } x1; struct vector<KB::Candidate, std::__1::allocator<KB::Candidate> > { struct Candidate {} *x_2_1_1; struct Candidate {} *x_2_1_2; struct __compressed_pair<KB::Candidate *, std::__1::allocator<KB::Candidate> > { struct Candidate {} *x_3_2_1; } x_2_1_3; } x2; int x3; }*)arg1 forTypedString:(struct String { unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; char *x5; BOOL x6[16]; }*)arg2 withPhraseCandidate:(struct Candidate { struct Vector<KB::Word, 3> { unsigned long long x_1_1_1; struct VectorBuffer<KB::Word, 3> { struct Word {} *x_2_2_1; unsigned long long x_2_2_2; struct AlignedBuffer<480, 8> { BOOL x_3_3_1[480]; } x_2_2_3; } x_1_1_2; } x1; float x2; struct CandidateScoreFactors { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; float x_3_1_5; float x_3_1_6; } x3; unsigned int x4; unsigned int x5; struct LanguageModelContext { struct vector<TITokenID, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_1_2_1; struct TITokenID {} *x_1_2_2; struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_3_3_1; } x_1_2_3; } x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; } x6; struct String { unsigned short x_7_1_1; unsigned short x_7_1_2; unsigned short x_7_1_3; unsigned char x_7_1_4; char *x_7_1_5; BOOL x_7_1_6[16]; } x7; struct ByteString { union { struct { unsigned short x_1_3_1; char *x_1_3_2; } x_1_2_1; struct { unsigned short x_2_3_1; unsigned char x_2_3_2[14]; } x_1_2_2; } x_8_1_1; } x8; }*)arg3 replacing:(const struct String { unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; char *x5; BOOL x6[16]; }*)arg4;
- (void)reconcileConversions:(id)arg1;
- (void)recordAcceptedAutocorrection:(id)arg1 fromPredictiveInputBar:(bool)arg2;
- (void)recordRejectedAutocorrectionForAcceptedText:(id)arg1 fromPredictiveInputBar:(bool)arg2;
- (void)recordSuggestedAutocorrectionList:(id)arg1;
- (void)refreshInputManagerState;
- (void)registerNegativeEvidence:(id)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg3 contextLength:(unsigned long long)arg4 intendedTokenID:(struct TITokenID { unsigned int x1; unsigned int x2; }*)arg5 hint:(int)arg6;
- (id)rejectedAutocorrections;
- (id)rejectedConversionsForCurrentContinuousPath;
- (id)rejectedDisplayedAutocorrectionsForCurrentStem;
- (void)releaseDynamicLanguageModel;
- (void)releaseMRLBuffers;
- (id)remainingInput;
- (bool)removeSuffixOfInputContext:(id)arg1;
- (id)replacementForDoubleSpace;
- (void)resetConversationHistory;
- (id)resourceInputModes;
- (void)resume;
- (id)revisionHistory;
- (id)revisionListFromAutocorrectionList:(id)arg1 afterAcceptingCandidate:(id)arg2;
- (void)runMaintenanceTask;
- (void)scheduleLinguisticResourceUpdate;
- (void)scheduleLinguisticResourceUpdateWithReason:(id)arg1;
- (id)searchStringForMarkedText;
- (struct LanguageModelContext { struct vector<TITokenID, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_1_1_1; struct TITokenID {} *x_1_1_2; struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; unsigned long long x3; })sentenceContextForInputStem:(id)arg1;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)sentenceTrailingCharacters;
- (void)setAutoCorrects:(bool)arg1;
- (void)setAutocapitalizationEnabled:(bool)arg1;
- (void)setAutocapitalizationType:(unsigned long long)arg1;
- (void)setAutocorrectionForCurrentStem:(id)arg1;
- (void)setAutoshiftFromInputContext;
- (void)setAutoshiftRegexLoader:(id)arg1;
- (void)setCandidateGenerationCompletionHandler:(id /* block */)arg1;
- (void)setCandidateHandlerForOpenRequest:(id)arg1;
- (void)setCandidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDeleteKeyCount:(long long)arg1;
- (void)setHitTestCorrectedInputMatchingCandidate:(id)arg1;
- (void)setInHardwareKeyboardMode:(bool)arg1;
- (void)setInSplitKeyboardMode:(bool)arg1;
- (void)setInput:(id)arg1;
- (void)setInputIndex:(unsigned int)arg1;
- (void)setInputStringFromDocumentState:(id)arg1 isDeleteEvent:(bool)arg2;
- (void)setIsEditingWordPrefix:(bool)arg1;
- (void)setKeyLayout:(id)arg1;
- (void)setKeyboardEventsLagging:(bool)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setLastAcceptedText:(id)arg1;
- (void)setLastContinuousPathAutocorrection:(id)arg1;
- (void)setLastNumCandidatesRequest:(unsigned long long)arg1;
- (void)setLearnsCorrection:(bool)arg1;
- (void)setLinguisticResourceStatus:(unsigned long long)arg1 reason:(id)arg2;
- (void)setMarkedText;
- (void)setOriginalInput:(id)arg1;
- (void)setPhraseBoundary:(unsigned long long)arg1;
- (void)setPhraseBoundaryIfNecessary;
- (void)setProactiveSuggestionsGenerationBlock:(id /* block */)arg1;
- (void)setRejectedConversionsForCurrentContinuousPath:(id)arg1;
- (void)setRejectedDisplayedAutocorrectionsForCurrentStem:(id)arg1;
- (void)setSkMetricCollector:(id)arg1;
- (void)setSmartSelector:(id)arg1;
- (void)setTypingSessionMonitor:(id)arg1;
- (void)setUserInterfaceIdiom:(long long)arg1;
- (void)setUserModel:(id)arg1;
- (void)setWordLearningEnabled:(bool)arg1;
- (id)shadowTyping;
- (int)shiftContext;
- (id)shortcutCompletionsForDocumentState:(id)arg1;
- (id)shortcutConversionForDocumentState:(id)arg1;
- (id)shortcutConversionForInput:(id)arg1 andExistingString:(id)arg2 existingStringStartsInMiddleOfWord:(bool)arg3;
- (id)shortcutConversionForString:(id)arg1 stringStartsInMiddleOfWord:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })shortcutSearchRangeForString:(id)arg1;
- (bool)shouldAddModifierSymbolsToWordCharacters;
- (bool)shouldAllowContextTokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg1;
- (bool)shouldAllowCorrectionOfAcceptedCandidate:(id)arg1;
- (bool)shouldAutocapitalizePredictionAfterSpace;
- (bool)shouldClearInputOnMarkedTextOutOfSync;
- (bool)shouldCommitInputString;
- (bool)shouldDelayUpdateComposedText;
- (bool)shouldDropInputStem;
- (bool)shouldExpectSentenceBoundaryAfterContext:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg1 contextLength:(unsigned long long)arg2;
- (bool)shouldExtendPriorWord;
- (bool)shouldFixupIncompleteRomaji;
- (bool)shouldGeneratePredictionsForCurrentContext;
- (bool)shouldGenerateSuggestionsForSelectedText;
- (bool)shouldInsertSpaceBeforeInput:(id)arg1;
- (bool)shouldInsertSpaceBeforePredictions;
- (bool)shouldLearnWord:(id)arg1;
- (bool)shouldSkipCandidateSelection;
- (bool)shouldSkipShortcutConversionForDocumentState:(id)arg1;
- (bool)shouldSuppressLanguageSelectionEvidence;
- (bool)shouldSuppressLearning;
- (bool)shouldSuppressTokenIDLookups;
- (bool)shouldUpdateDictionary;
- (bool)shouldUpdateLanguageModel;
- (unsigned int)simulateAutoshiftIfNecessaryForFlags:(unsigned int)arg1;
- (id)skMetricCollector;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (id)smartOptions;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })smartSelectionRangeForTextInDocument:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5;
- (id)smartSelector;
- (id)sortMethodIndexes;
- (id)sortMethodTitles;
- (id)sortMethodsGroupsForCandidates:(id)arg1;
- (id)sortMethodsShowExtensionCandidates;
- (id)sortingMethods;
- (bool)spaceAndNextInputWouldStartSentence;
- (id)staticDictionaryPathForInputMode:(id)arg1;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (bool)stringEndsWithClosingQuote:(id)arg1;
- (bool)stringEndsWord:(id)arg1;
- (id)suffixOfDesiredString:(id)arg1 toAppendToInputString:(id)arg2 withInputIndex:(unsigned long long)arg3 afterDeletionCount:(unsigned long long*)arg4;
- (bool)suggestionBlacklistMatchesStrings:(id)arg1;
- (bool)suppliesCompletions;
- (bool)supportsLearning;
- (bool)supportsNumberKeySelection;
- (bool)supportsSetPhraseBoundary;
- (bool)supportsShortcutConversion;
- (bool)suppressCompletionsForFieldEditor;
- (bool)suppressPlaceholderCandidate;
- (void)suspend;
- (void)syncInputStringToKeyboardState:(id)arg1 afterContextChange:(bool)arg2;
- (void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(bool)arg2;
- (void)syncToKeyboardState:(id)arg1;
- (bool)syncToKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(bool)arg3;
- (void)syncToLayoutState:(id)arg1;
- (void)synchronizeConversationHistoryWithInputContextHistory:(id)arg1;
- (id)terminatorsDeletingAutospace;
- (id)terminatorsPrecedingAutospace;
- (id)terminatorsPreventingAutocorrection;
- (void)textAccepted:(id)arg1 fromPredictiveInputBar:(bool)arg2 withInput:(id)arg3;
- (id)textCheckerExemptions;
- (id)titleForSortingMethod:(id)arg1;
- (struct TITokenID { unsigned int x1; unsigned int x2; })tokenIDForWordSeparator:(unsigned short)arg1;
- (void)trackProactiveMetrics:(id)arg1 keyboardState:(id)arg2;
- (void)transferErrorCorrectionFlagsToInputCandidate:(struct Candidate { struct Vector<KB::Word, 3> { unsigned long long x_1_1_1; struct VectorBuffer<KB::Word, 3> { struct Word {} *x_2_2_1; unsigned long long x_2_2_2; struct AlignedBuffer<480, 8> { BOOL x_3_3_1[480]; } x_2_2_3; } x_1_1_2; } x1; float x2; struct CandidateScoreFactors { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; float x_3_1_5; float x_3_1_6; } x3; unsigned int x4; unsigned int x5; struct LanguageModelContext { struct vector<TITokenID, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_1_2_1; struct TITokenID {} *x_1_2_2; struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_3_3_1; } x_1_2_3; } x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; } x6; struct String { unsigned short x_7_1_1; unsigned short x_7_1_2; unsigned short x_7_1_3; unsigned char x_7_1_4; char *x_7_1_5; BOOL x_7_1_6[16]; } x7; struct ByteString { union { struct { unsigned short x_1_3_1; char *x_1_3_2; } x_1_2_1; struct { unsigned short x_2_3_1; unsigned char x_2_3_2[14]; } x_1_2_2; } x_8_1_1; } x8; }*)arg1;
- (void)trimInput;
- (void)trimInputAfterLathamConversion;
- (id)trimmedInputStem;
- (id)trimmedInputStemAfterLathamConversion;
- (id)typedStringForEmptyAutocorrection;
- (id)typingSessionMonitor;
- (bool)updateAdaptationContextToKeyboardState:(id)arg1 from:(id)arg2;
- (void)updateComposedText;
- (void)updateDictionaryAndLanguageModel;
- (void)updateForRevisitedString:(id)arg1;
- (void)updateInputContext;
- (bool)updateLanguageModelForKeyboardState;
- (void)updateResponseModelForKeyboardState:(id)arg1;
- (id)usageTrackingKeyForStatistic:(id)arg1;
- (unsigned long long)userFrequencyOfWord:(id)arg1;
- (unsigned long long)userFrequencyOfWord:(id)arg1 lexiconID:(unsigned int)arg2;
- (long long)userInterfaceIdiom;
- (id)userModel;
- (bool)usesAutoDeleteWord;
- (bool)usesCandidateSelection;
- (bool)usesContinuousPath;
- (bool)usesLiveConversion;
- (bool)usesPunctuationKeysForRowNavigation;
- (bool)usesRetrocorrection;
- (void)willChangeToKeyboardState:(id)arg1 afterContextChange:(bool)arg2;
- (void)willDropInputStem;
- (id)wordCharacters;
- (id)wordSeparator;

@end
