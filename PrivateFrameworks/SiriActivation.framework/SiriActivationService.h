/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@interface SiriActivationService : NSObject <AFMyriadDelegate, SASBulletinManagerDelegate, SASHeaterDelegate, SASLockStateMonitorDelegate, SASRequestOptionsBuilderDataSource, SASStateChangeListener, SBUIActiveOrientationObserver> {
    NSTimer * _B188ActivationTimer;
    AFWatchdogTimer * _activationTimer;
    double  _activationTimestamp;
    NSMutableSet * _activePresentations;
    AFPreferences * _afPreferences;
    NSMutableDictionary * _avExternalButtonEvents;
    SASBulletinManager * _bulletinManager;
    bool  _buttonDownHasOccurredSinceActivation;
    id /* block */  _buttonTrigger;
    bool  _canActivateFromDirectActionSource;
    AFWatchdogTimer * _dismissalTimer;
    SASHeater * _heater;
    SASLockStateMonitor * _lockStateMonitor;
    AFMyriadCoordinator * _myriad;
    SASMyriadController * _myriadController;
    bool  _pocketStateFetchingInProgressForHeadsetActivation;
    NSString * _preheatedPresentation;
    double  _preparationTimestamp;
    NSMutableDictionary * _preparingPresentations;
    NSMutableDictionary * _presentations;
    SASRemoteRequestManager * _remoteRequestManager;
    long long  _requestState;
    AFSiriTether * _siriTether;
    bool  _siriTetherIsAttached;
    NSMutableDictionary * _sources;
    SASSystemState * _systemState;
    SASTestingInputController * _testingInputController;
    NSObject<OS_dispatch_queue> * _voiceTriggerDispatchQueue;
    int  _voiceTriggerNotifyToken;
    bool  _voiceTriggerNotifyTokenIsValid;
    NSObject<OS_dispatch_queue> * _watchdogQueue;
    bool  _xcTestingActive;
}

@property (nonatomic, retain) AFWatchdogTimer *activationTimer;
@property (nonatomic) double activationTimestamp;
@property (nonatomic, retain) NSMutableSet *activePresentations;
@property (nonatomic, retain) AFPreferences *afPreferences;
@property (nonatomic, retain) NSMutableDictionary *avExternalButtonEvents;
@property (nonatomic, retain) SASBulletinManager *bulletinManager;
@property (nonatomic) bool buttonDownHasOccurredSinceActivation;
@property (nonatomic) bool canActivateFromDirectActionSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AFWatchdogTimer *dismissalTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SASHeater *heater;
@property (nonatomic, retain) SASLockStateMonitor *lockStateMonitor;
@property (getter=_pocketStateFetchingInProgressForHeadsetActivation, setter=_setPocketStateFetchingInProgressForHeadsetActivation:, nonatomic) bool pocketStateFetchingInProgressForHeadsetActivation;
@property (nonatomic) double preparationTimestamp;
@property (nonatomic, retain) NSMutableDictionary *preparingPresentations;
@property (nonatomic, retain) NSMutableDictionary *presentations;
@property (nonatomic, retain) SASRemoteRequestManager *remoteRequestManager;
@property (nonatomic) long long requestState;
@property (nonatomic, retain) AFSiriTether *siriTether;
@property (nonatomic) bool siriTetherIsAttached;
@property (nonatomic, retain) NSMutableDictionary *sources;
@property (readonly) Class superclass;
@property (nonatomic, retain) SASSystemState *systemState;
@property (nonatomic, retain) SASTestingInputController *testingInputController;
@property (nonatomic) bool voiceTriggerNotifyTokenIsValid;
@property (nonatomic) bool xcTestingActive;

+ (id)new;
+ (id)service;

- (void).cxx_destruct;
- (void)_B188ActivationEvent:(long long)arg1 context:(id)arg2 options:(id)arg3;
- (void)_activatePresentation:(id)arg1 requestOptions:(id)arg2 analyticsContext:(id)arg3;
- (void)_attachToTether;
- (bool)_buttonIsAVExternalButton:(long long)arg1;
- (void)_cancelActivationPreparationForSetup;
- (void)_cancelActivationPreparationIfNecessary;
- (void)_cancelPendingActivationEventWithReason:(unsigned long long)arg1;
- (void)_cancelTTS;
- (void)_dismissSiri:(id)arg1;
- (void)_handleDesignModeRequest;
- (void)_handlePocketStateFetchForScreenWakeForPresentationServer:(id)arg1 requestOptions:(id)arg2 presentationOptions:(id)arg3;
- (void)_handleTapSynthesisIfNeededForButtonIdentifier:(long long)arg1 buttonUpTimestamp:(double)arg2;
- (id)_init;
- (bool)_isInitialRequest;
- (void)_notifySourcesOfActiveChange:(bool)arg1;
- (void)_notifySourcesOfCanActivateFromDirectActionSourceChange:(bool)arg1;
- (void)_performOrEnqueueButtonAction:(id /* block */)arg1;
- (bool)_pocketStateFetchingInProgressForHeadsetActivation;
- (void)_preheatPresentation;
- (void)_recordTimeIfNeededForButtonIdentifier:(long long)arg1 buttonDownTimestamp:(double)arg2;
- (void)_registerForVoiceTrigger;
- (void)_setPocketStateFetchingInProgressForHeadsetActivation:(bool)arg1;
- (bool)_shouldRejectNewActivations:(long long)arg1;
- (bool)_siriIsEnabled;
- (void)_unregisterForVoiceTrigger;
- (void)_updateCanActivateFromDirectActionSource;
- (void)_watchdogQueue_startActivationWatchdogTimerForPresentationServer:(id)arg1;
- (void)_watchdogQueue_startDismissalWatchdogTimer;
- (void)_watchdogQueue_stopActivationWatchdogTimerIfNeeded;
- (void)_watchdogQueue_stopDismissalWatchdogTimerIfNeeded;
- (void)activationRequestFromBreadcrumb;
- (void)activationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2;
- (void)activationRequestFromContinuityWithContext:(id)arg1;
- (void)activationRequestFromDirectActionEvent:(long long)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)activationRequestFromSimpleActivation:(long long)arg1;
- (void)activationRequestFromSpotlightWithContext:(id)arg1;
- (oneway void)activationRequestFromTestRunnerWithContext:(id)arg1;
- (void)activationRequestFromTestingWithContext:(id)arg1;
- (void)activationRequestFromVoiceTrigger;
- (void)activationRequestFromVoiceTriggerWithContext:(id)arg1;
- (id)activationTimer;
- (double)activationTimestamp;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (id)activePresentations;
- (id)afPreferences;
- (id)allBulletins;
- (id)avExternalButtonEvents;
- (id)bulletinForIdentifier:(id)arg1;
- (id)bulletinManager;
- (void)bulletinManagerDidChangeBulletins:(id)arg1;
- (id)bulletinsOnLockScreen;
- (void)buttonDownFromButtonIdentifier:(long long)arg1 timestamp:(double)arg2;
- (bool)buttonDownHasOccurredSinceActivation;
- (void)buttonLongPressFromButtonIdentifier:(long long)arg1 context:(id)arg2;
- (void)buttonTapFromButtonIdentifier:(long long)arg1;
- (void)buttonUpFromButtonIdentifier:(long long)arg1 timestamp:(double)arg2;
- (void)callStateChangedToIsActive:(bool)arg1 isOutgoing:(bool)arg2;
- (bool)canActivateFromDirectActionSource;
- (void)cancelPrewarmFromButtonIdentifier:(long long)arg1;
- (void)deactivationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2 options:(id)arg3;
- (void)dealloc;
- (void)didChangeLockState:(unsigned long long)arg1;
- (void)dismissSiriWithOptions:(id)arg1;
- (id)dismissalTimer;
- (bool)handleActivationRequest:(id)arg1;
- (bool)handleActivationRequest:(id)arg1 systemState:(id)arg2;
- (id)heater;
- (void)heaterSuggestsDefrosting:(id)arg1;
- (void)heaterSuggestsPreheating:(id)arg1;
- (id)init;
- (bool)isConnectedTo188;
- (id)lockStateMonitor;
- (void)markBulletinWithIdentifier:(id)arg1 asRead:(bool)arg2;
- (double)preparationTimestamp;
- (id)preparingPresentations;
- (id)presentations;
- (bool)presentationsAreIdleAndQuiet;
- (void)prewarmFromButtonIdentifier:(long long)arg1 longPressInterval:(double)arg2;
- (void)registerActivationSource:(id)arg1 withIdentifier:(id)arg2;
- (void)registerSiriPresentation:(id)arg1 withIdentifier:(long long)arg2;
- (id)remoteRequestManager;
- (unsigned long long)requestOptionsBuilder:(id)arg1 currentLockStateForActivation:(id)arg2;
- (bool)requestOptionsBuilder:(id)arg1 isAcousticIdAllowedWithActiviation:(id)arg2;
- (bool)requestOptionsBuilder:(id)arg1 isPredictedRecordRouteIsZLLWithActiviation:(id)arg2;
- (bool)requestOptionsBuilder:(id)arg1 isRequestInitialWithActiviation:(id)arg2;
- (id)requestOptionsBuilder:(id)arg1 optionsForOverriding:(id)arg2 withActiviation:(id)arg3;
- (bool)requestOptionsBuilder:(id)arg1 shouldRequestUseAutomaticEndpointingWithActiviation:(id)arg2;
- (id)requestOptionsBuilder:(id)arg1 uiPresentationIdentifierWithActivation:(id)arg2 activationPresentation:(long long)arg3;
- (long long)requestState;
- (void)setActivationTimer:(id)arg1;
- (void)setActivationTimestamp:(double)arg1;
- (void)setActivePresentations:(id)arg1;
- (void)setAfPreferences:(id)arg1;
- (void)setAvExternalButtonEvents:(id)arg1;
- (void)setBulletinManager:(id)arg1;
- (void)setButtonDownHasOccurredSinceActivation:(bool)arg1;
- (void)setCanActivateFromDirectActionSource:(bool)arg1;
- (void)setDismissalTimer:(id)arg1;
- (void)setHeater:(id)arg1;
- (void)setLockStateMonitor:(id)arg1;
- (void)setPreparationTimestamp:(double)arg1;
- (void)setPreparingPresentations:(id)arg1;
- (void)setPresentations:(id)arg1;
- (void)setRemoteRequestManager:(id)arg1;
- (void)setRequestState:(long long)arg1;
- (void)setSiriTether:(id)arg1;
- (void)setSiriTetherIsAttached:(bool)arg1;
- (void)setSources:(id)arg1;
- (void)setSystemState:(id)arg1;
- (void)setTestingInputController:(id)arg1;
- (void)setVoiceTriggerNotifyTokenIsValid:(bool)arg1;
- (void)setXcTestingActive:(bool)arg1;
- (void)shouldAbortAnotherDeviceBetter:(id)arg1;
- (void)shouldContinue:(id)arg1;
- (void)siriPresentationDismissedWithIdentifier:(long long)arg1;
- (void)siriPresentationDisplayedWithIdentifier:(long long)arg1;
- (void)siriPresentationFailureWithIdentifier:(long long)arg1 error:(id)arg2;
- (void)siriPresentationWillDismissWithIdentifier:(long long)arg1;
- (id)siriTether;
- (bool)siriTetherIsAttached;
- (id)sources;
- (void)speechRequestStateDidChange:(long long)arg1;
- (void)startActivationWatchdogTimerForPresentationServer:(id)arg1;
- (void)startDismissalWatchdogTimer;
- (void)stopActivationWatchdogTimerIfNeeded;
- (void)stopDismissalWatchdogTimerIfNeeded;
- (id)systemState;
- (id)testingInputController;
- (void)unregisterActivationSourceIdentifier:(id)arg1;
- (void)unregisterSiriPresentationIdentifier:(long long)arg1;
- (bool)voiceTriggerNotifyTokenIsValid;
- (bool)xcTestingActive;

@end
