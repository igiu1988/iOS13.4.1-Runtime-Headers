/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAppSuggestionManager : NSObject <SBAttentionAwarenessClientDelegate, UABestAppSuggestionManagerDelegate> {
    UABestAppSuggestion * _continuityCurrentBestSuggestion;
    UABestAppSuggestionManager * _continuitySuggestionManager;
    SBBestAppSuggestion * _currentBestSuggestion;
    _DECResult * _currentExpertBestSuggestion;
    _DECConsumer * _expertCenterSuggestionMonitor;
    SBAttentionAwarenessClient * _idleTouchAwarenessClient;
    bool  _isListeningForContinuitySuggestion;
    bool  _isListeningForExpertCenterSuggestion;
    NSCountedSet * _listeningReasons;
    bool  _screenOnAndLookingForEvent;
    bool  _screenOnDueToUserEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_calculateBestSuggestionAndNotifyListeners;
- (void)_createSuggestionSources;
- (void)_destroySuggestionSources;
- (void)_evaluateSuggestionUpdates:(id)arg1;
- (void)_handleAppUninstall:(id)arg1;
- (void)_handleInitialSpringBoardLaunch;
- (void)_listenForNotifications;
- (void)_screenDidDim:(id)arg1;
- (void)_screenDidUndim:(id)arg1;
- (void)_setContinuitySuggestionUpdatesEnabled:(bool)arg1 expertCenterSuggestionUpdatesEnabled:(bool)arg2;
- (void)_stopListeningForNotifications;
- (unsigned long long)_supportedExpertCenterCategories;
- (void)bestAppSuggestionChanged:(id)arg1;
- (void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4;
- (void)clientDidResetForUserAttention:(id)arg1;
- (id)currentSuggestedApp;
- (void)dealloc;
- (void)disableListeningForUpdatesForReason:(id)arg1;
- (void)enableListeningForUpdatesForReason:(id)arg1;
- (void)expertCenterSuggestionChanged:(id)arg1;
- (id)init;
- (void)noteActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)noteNotActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)performWithCurrentSuggestedAppAndApplication:(id /* block */)arg1;
- (void)startFetchingPayloadForAppSuggestion:(id)arg1;

@end
