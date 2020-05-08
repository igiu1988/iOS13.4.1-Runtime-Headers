/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIEnrollTrainingViewController : UIViewController <AFMyriadDelegate, AFUIDebugControllerDelegate, AFUISiriLanguageDelegate, CSVTUITrainingManagerDelegate, SUICFlamesViewDelegate, VTUIEnrollTrainingViewDelegate, VTUIEnrollmentSetupIntroViewDelegate, VTUISiriDataSharingOptInPresentationDelegate> {
    unsigned long long  _AVVCRetryCount;
    UIView * _aboutTappedSender;
    VTUIAudioHintPlayer * _audioHintPlayer;
    float  _audioRms;
    unsigned long long  _badMicRetryCount;
    long long  _consecutiveTimeoutCount;
    long long  _currentTrainingState;
    <AFUIDebugControlling> * _debugController;
    <VTUIEnrollTrainingViewControllerDelegate> * _delegate;
    bool  _disambiguateLanguageOptionsForTesting;
    VTUIEnrollTrainingView * _enrollTrainingView;
    long long  _enrollmentMode;
    bool  _hasPHSInCloud;
    id /* block */  _hasPHSInCloudFetchBlock;
    NSObject<OS_dispatch_queue> * _hasPHSInCloudFetchQueue;
    bool  _hasRetriedTraining;
    bool  _hasSkippedTraining;
    VTUIEnrollmentSetupIntroView * _introView;
    bool  _isResignedActive;
    VTUIEnrollmentLanguageOptionsView * _languageOptionsView;
    AFMyriadCoordinator * _myriadCoordinator;
    unsigned long long  _sessionId;
    bool  _shouldTurnOnMyriad;
    VTUISiriDataSharingOptInPresenter * _siriDataSharingOptInPresenter;
    UIView * _siriDataSharingOptInView;
    AFUISiriLanguage * _siriLanguage;
    NSArray * _siriLanguageOptions;
    bool  _skipToEndForTesting;
    bool  _skipToSiriDataSharingOptInForTesting;
    NSString * _spokenLanguageCode;
    VTUIEnrollmentSuccessView * _successView;
    CSVTUITrainingManager * _trainingManager;
    NSArray * _trainingPageInstructions;
}

@property (nonatomic) unsigned long long AVVCRetryCount;
@property (nonatomic, retain) UIView *aboutTappedSender;
@property (nonatomic, retain) VTUIAudioHintPlayer *audioHintPlayer;
@property (nonatomic) float audioRms;
@property (nonatomic) unsigned long long badMicRetryCount;
@property (nonatomic) long long currentTrainingState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VTUIEnrollTrainingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disambiguateLanguageOptionsForTesting;
@property (nonatomic, retain) VTUIEnrollTrainingView *enrollTrainingView;
@property (nonatomic) bool hasRetriedTraining;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VTUIEnrollmentSetupIntroView *introView;
@property (nonatomic, retain) VTUIEnrollmentLanguageOptionsView *languageOptionsView;
@property (nonatomic, retain) AFMyriadCoordinator *myriadCoordinator;
@property (nonatomic, readonly) unsigned long long sessionId;
@property (nonatomic) bool shouldTurnOnMyriad;
@property (nonatomic) bool skipToEndForTesting;
@property (nonatomic) bool skipToSiriDataSharingOptInForTesting;
@property (nonatomic, retain) NSString *spokenLanguageCode;
@property (nonatomic, retain) VTUIEnrollmentSuccessView *successView;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSVTUITrainingManager *trainingManager;
@property (nonatomic, retain) NSArray *trainingPageInstructions;

- (void).cxx_destruct;
- (unsigned long long)AVVCRetryCount;
- (void)VTUITrainingManagerAudioSessionTerminatedInStatus:(int)arg1;
- (void)VTUITrainingManagerFeedLevel:(float)arg1;
- (void)VTUITrainingManagerStopListening;
- (void)_advanceState;
- (void)_becomeActive;
- (void)_checkForPHSCloudDataIfNecessary:(id)arg1;
- (void)_cleanupHelper;
- (void)_cleanupTrainingManagerWithCompletion:(id /* block */)arg1;
- (void)_cleanupTrainingManagerWithCompletion:(id /* block */)arg1 status:(long long)arg2;
- (void)_clearAggdScalar:(id)arg1;
- (void)_continueFromIntro:(id)arg1;
- (void)_continueFromLanguageOptions:(id)arg1;
- (void)_createTrainingManagerIfNeeded;
- (void)_didEnterBackground;
- (void)_finishFromLanguageOptions:(id)arg1;
- (void)_finishSiriSetup:(id)arg1;
- (id)_getSetupModeString;
- (void)_handleTrainingResultForNonRetryablePhraseWithStatus:(int)arg1;
- (void)_handleTrainingResultForRetryablePhraseWithStatus:(int)arg1 shouldShowCheckMark:(bool)arg2;
- (bool)_hasPHSCloudDataForSpokenLanguage;
- (void)_hideInstruction;
- (void)_initialSetup;
- (bool)_isLocaleSupported:(id)arg1;
- (bool)_isTrainingInProgress;
- (void)_logAggdCount:(long long)arg1 forKey:(id)arg2;
- (void)_logAggdScalar:(long long)arg1 forKey:(id)arg2;
- (void)_presentRadarView;
- (void)_resetEnrollment;
- (void)_resetIdleTimer;
- (void)_resetTrainingManager;
- (void)_resignActive;
- (void)_resumeGLDrawing;
- (void)_resumeTraining:(bool)arg1;
- (void)_retryAfterBadMicAlert;
- (void)_retryInstruction:(bool)arg1;
- (void)_setAssistantEnabled:(bool)arg1;
- (void)_setLanguageOptionsAndContinue:(id)arg1;
- (void)_setPHSEnrollmentPrefEnabled:(bool)arg1;
- (void)_setupEnrollTrainingView;
- (void)_setupMode;
- (void)_setupTrainingStates;
- (bool)_shouldShowSiriDataSharingOptInView;
- (bool)_shouldSpeakAudioHint;
- (void)_showBadMicAlertCompletion:(id /* block */)arg1;
- (void)_showBadMicAlertWithCompletion:(id /* block */)arg1;
- (void)_showEnrollmentSuccessView;
- (void)_showInstruction:(long long)arg1 isRetry:(bool)arg2;
- (void)_showIntroView;
- (void)_showRadarExitButton;
- (void)_showResultMark:(bool)arg1 completion:(id /* block */)arg2;
- (void)_showSiriDataSharingOptIn;
- (void)_showStatusMessage:(id)arg1 afterDelay:(double)arg2 completion:(id /* block */)arg3;
- (void)_showTrainingInstruction:(long long)arg1 afterDelay:(double)arg2 isRetry:(bool)arg3 animate:(bool)arg4;
- (void)_showUnsupportedLocaleAlert;
- (void)_showUnsupportedLocaleAlertCompletion:(id /* block */)arg1;
- (bool)_siriLanguageIsIncompatibleWithPairedWatch;
- (void)_startEnrollment;
- (void)_startTraining;
- (void)_stopGLDrawing;
- (void)_tearDownDataSharingViews;
- (void)_updateFlamesForStatus:(long long)arg1;
- (void)_updatePageNumberForInstruction:(long long)arg1;
- (void)_warnForLanguageCompatibilityIfNecessary:(id /* block */)arg1;
- (void)_willEnterForeground;
- (void)aboutTapped:(id)arg1;
- (id)aboutTappedSender;
- (id)audioHintPlayer;
- (float)audioLevelForFlamesView:(id)arg1;
- (float)audioRms;
- (unsigned long long)badMicRetryCount;
- (void)cancelTraining;
- (long long)currentTrainingState;
- (void)dealloc;
- (void)debugController:(id)arg1 openURL:(id)arg2;
- (void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2;
- (void)debugController:(id)arg1 wantsDismissViewController:(id)arg2;
- (void)debugController:(id)arg1 wantsPresentViewController:(id)arg2;
- (id)delegate;
- (bool)disambiguateLanguageOptionsForTesting;
- (id)enrollTrainingView;
- (void)enrollTrainingViewEndpointButtonPressed:(id)arg1;
- (void)enrollTrainingViewRadarButtonPressed:(id)arg1;
- (void)enrollTrainingViewSkipTrainingButtonPressed:(id)arg1;
- (void)finish:(id)arg1;
- (void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasRetriedTraining;
- (id)init;
- (id)init:(long long)arg1;
- (id)interpretAudioSource:(unsigned long long)arg1;
- (long long)interpretSessionManagerStatus:(int)arg1 forInstruction:(long long)arg2;
- (id)introView;
- (id)languageOptionsView;
- (id)myriadCoordinator;
- (id)presentedViewControllerForDebugController;
- (void)restartFromIntroView;
- (unsigned long long)sessionId;
- (void)setAVVCRetryCount:(unsigned long long)arg1;
- (void)setAboutTappedSender:(id)arg1;
- (void)setAudioHintPlayer:(id)arg1;
- (void)setAudioRms:(float)arg1;
- (void)setBadMicRetryCount:(unsigned long long)arg1;
- (void)setCurrentTrainingState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisambiguateLanguageOptionsForTesting:(bool)arg1;
- (void)setEnrollTrainingView:(id)arg1;
- (void)setHasRetriedTraining:(bool)arg1;
- (void)setIntroView:(id)arg1;
- (void)setLanguageOptionsView:(id)arg1;
- (void)setMyriadCoordinator:(id)arg1;
- (void)setShouldTurnOnMyriad:(bool)arg1;
- (void)setSkipToEndForTesting:(bool)arg1;
- (void)setSkipToSiriDataSharingOptInForTesting:(bool)arg1;
- (void)setSpokenLanguageCode:(id)arg1;
- (void)setSuccessView:(id)arg1;
- (void)setTrainingManager:(id)arg1;
- (void)setTrainingPageInstructions:(id)arg1;
- (void)shouldAbortAnotherDeviceBetter:(id)arg1;
- (void)shouldContinue:(id)arg1;
- (bool)shouldTurnOnMyriad;
- (void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg1;
- (void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1;
- (void)skipAssistant:(id)arg1;
- (bool)skipToEndForTesting;
- (bool)skipToSiriDataSharingOptInForTesting;
- (void)skipTraining:(id)arg1;
- (id)spokenLanguageCode;
- (id)successView;
- (id)trainingManager;
- (id)trainingPageInstructions;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
