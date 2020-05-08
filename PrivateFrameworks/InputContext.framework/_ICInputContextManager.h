/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICInputContextManager : NSObject <_ICFeedbackManaging, _ICLexiconManaging, _ICPredictionManaging> {
    struct _LXLexicon { } * _durableNamedEntityLexicon;
    NSObject<_ICLexiconManaging> * _lexiconManager;
    _ICPredictionManager * _predictionManager;
    struct _LXLexicon { } * _recentNamedEntityLexicon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id /* block */)addContactObserver:(id /* block */)arg1;
- (void)doInitLexiconManager;
- (void)doInitPredictionManager;
- (id)getLexiconManager;
- (id)getPredictionManager;
- (void)hibernate;
- (id)initForIntegrationTesting;
- (void)initLexiconManager;
- (void)initPredictionManager;
- (id)initWithPredictionSource:(id)arg1;
- (id)lastCachedResultWithInitialCharacters:(id)arg1;
- (id)loadLexicons:(id /* block */)arg1;
- (id)loadLexiconsUsingFilter:(id /* block */)arg1;
- (void)predictedItemSelected:(id)arg1;
- (void)provideLexiconFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)providePredictionFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)removeContactObserver:(id /* block */)arg1;
- (void)reset;
- (id)searchForMeCardEmailAddresses;
- (id)searchForMeCardRegions;
- (id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7;
- (void)unloadLexicons;
- (void)warmUp;

@end
