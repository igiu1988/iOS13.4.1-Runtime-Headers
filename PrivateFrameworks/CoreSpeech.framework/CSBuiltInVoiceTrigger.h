/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSBuiltInVoiceTrigger : NSObject <CSActivationEventNotifierDelegate, CSAudioServerCrashMonitorDelegate, CSAudioStreamProvidingDelegate, CSBluetoothWirelessSplitterMonitorDelegate, CSKeywordAnalyzerNDAPIScoreDelegate, CSSelfTriggerDetectorDelegate, CSSiriClientBehaviorMonitorDelegate, CSStateMachineDelegate, CSVoiceTriggerXPCServiceDelegate> {
    CSVoiceTriggerAlwaysOnProcessor * _alwaysOnProcessorController;
    CSAudioProvider * _audioProvider;
    CSAudioStream * _audioStream;
    NSMutableArray * _audioStreamHoldings;
    unsigned long long  _bestChannel;
    float  _bestScore;
    unsigned long long  _channelSelectionDelay;
    NSDictionary * _channelSelectionScores;
    CSAsset * _currentAsset;
    unsigned long long  _currentSplitterState;
    unsigned long long  _delayInSamplesRequiredForChannelSelection;
    <CSVoiceTriggerDelegate> * _delegate;
    float  _firstPassThreshold;
    bool  _hasTriggerPending;
    bool  _isListenPollingStarting;
    bool  _isPhraseSpotterBypassed;
    bool  _isSecondPassRunning;
    bool  _isSiriClientListening;
    NSMutableArray * _keywordAnalyzersNDAPI;
    float  _masterChannelScoreBoost;
    NSString * _name;
    unsigned long long  _onsetChannel;
    NSDictionary * _onsetResult;
    unsigned long long  _processingChannelsBitset;
    unsigned long long  _processingChunkSamples;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_group> * _recordingWillStartGroup;
    unsigned long long  _secondChanceHotTillMachTime;
    CSOSTransaction * _secondPassTransaction;
    bool  _shouldDisableOnSpeakerVerificationInSplitterMode;
    CSStateMachine * _stateMachine;
    CSPolicy * _voiceTriggerAOPModeStartPolicy;
    bool  _voiceTriggerEnabled;
    CSVoiceTriggerSecondPass * _voiceTriggerSecondPass;
    CSPolicy * _voiceTriggerStartPolicy;
}

@property (nonatomic, retain) CSVoiceTriggerAlwaysOnProcessor *alwaysOnProcessorController;
@property (nonatomic, retain) CSAudioProvider *audioProvider;
@property (nonatomic, retain) CSAudioStream *audioStream;
@property (nonatomic, retain) NSMutableArray *audioStreamHoldings;
@property (nonatomic) unsigned long long bestChannel;
@property (nonatomic) float bestScore;
@property (nonatomic) unsigned long long channelSelectionDelay;
@property (nonatomic, retain) NSDictionary *channelSelectionScores;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (nonatomic) unsigned long long currentSplitterState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long delayInSamplesRequiredForChannelSelection;
@property (nonatomic) <CSVoiceTriggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float firstPassThreshold;
@property (nonatomic) bool hasTriggerPending;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isListenPollingStarting;
@property (nonatomic) bool isPhraseSpotterBypassed;
@property (nonatomic) bool isSecondPassRunning;
@property (nonatomic) bool isSiriClientListening;
@property (nonatomic, retain) NSMutableArray *keywordAnalyzersNDAPI;
@property (nonatomic) float masterChannelScoreBoost;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long onsetChannel;
@property (nonatomic, retain) NSDictionary *onsetResult;
@property (nonatomic) unsigned long long processingChannelsBitset;
@property (nonatomic) unsigned long long processingChunkSamples;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *recordingWillStartGroup;
@property (nonatomic) unsigned long long secondChanceHotTillMachTime;
@property (nonatomic, retain) CSOSTransaction *secondPassTransaction;
@property (nonatomic) bool shouldDisableOnSpeakerVerificationInSplitterMode;
@property (nonatomic, retain) CSStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSPolicy *voiceTriggerAOPModeStartPolicy;
@property (nonatomic) bool voiceTriggerEnabled;
@property (nonatomic, retain) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (nonatomic, retain) CSPolicy *voiceTriggerStartPolicy;

- (void).cxx_destruct;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)CSBluetoothWirelessSplitterMonitor:(id)arg1 didReceiveSplitterStateChange:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(bool)arg3;
- (void)_addAudioStreamHold:(id)arg1;
- (void)_cancelAllAudioStreamHold;
- (void)_cancelLastAudioStreamHold;
- (void)_createSecondPassIfNeededWithFirstPassSource:(unsigned long long)arg1;
- (unsigned long long)_currentState;
- (id)_eventName:(unsigned long long)arg1;
- (void)_handleSecondPassResult:(unsigned long long)arg1 voiceTriggerInfo:(id)arg2 deviceId:(id)arg3 secondChanceCandidate:(bool)arg4 error:(id)arg5;
- (void)_handleVoiceTriggerSecondPassWithSource:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4;
- (bool)_isBuiltInAOPVoiceTriggerEvent:(id)arg1;
- (bool)_isVoiceTriggerStateTransitionEvent:(id)arg1;
- (void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)_notifyEvent:(unsigned long long)arg1;
- (void)_reportVoiceTriggerFirstPassFireFromAP;
- (void)_requestStartAudioStreamWithSource:(unsigned long long)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (void)_setupStateMachine;
- (bool)_shouldEnableAOPVoiceTrigger;
- (bool)_shouldEnableAPVoiceTrigger;
- (bool)_shouldHandleAOPVoiceTrigger;
- (bool)_shouldSecondPassKeepAlive;
- (void)_startAOPVoiceTrigger;
- (void)_startAPVoiceTriggerWithCompletion:(id /* block */)arg1;
- (void)_startListenPollingWithInterval:(double)arg1 completion:(id /* block */)arg2;
- (void)_startListenWithCompletion:(id /* block */)arg1;
- (void)_startVoiceTriggerWithCompletion:(id /* block */)arg1;
- (id)_stateName:(unsigned long long)arg1;
- (void)_stopAOPVoiceTrigger;
- (void)_stopAPVoiceTrigger;
- (void)_stopListening;
- (void)_teardownSecondPassIfNeeded;
- (void)_transitAOPMode:(bool)arg1;
- (void)_transitVoiceTriggerStatus:(bool)arg1;
- (void)_updateCurrentSplitterState:(unsigned long long)arg1 shouldDisableSpeakerVerificationInSplitterMode:(bool)arg2;
- (void)activationEventNotifier:(id)arg1 event:(id)arg2 completion:(id /* block */)arg3;
- (id)alwaysOnProcessorController;
- (id)audioProvider;
- (id)audioStream;
- (id)audioStreamHoldings;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (unsigned long long)bestChannel;
- (float)bestScore;
- (unsigned long long)channelSelectionDelay;
- (id)channelSelectionScores;
- (id)currentAsset;
- (unsigned long long)currentSplitterState;
- (unsigned long long)delayInSamplesRequiredForChannelSelection;
- (id)delegate;
- (void)didIgnoreEvent:(long long)arg1 from:(long long)arg2;
- (void)didTransitFrom:(long long)arg1 to:(long long)arg2 by:(long long)arg3;
- (float)firstPassThreshold;
- (bool)hasTriggerPending;
- (id)initWithTargetQueue:(id)arg1;
- (bool)isListenPollingStarting;
- (bool)isPhraseSpotterBypassed;
- (bool)isSecondPassRunning;
- (bool)isSiriClientListening;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (id)keywordAnalyzersNDAPI;
- (float)masterChannelScoreBoost;
- (id)name;
- (unsigned long long)onsetChannel;
- (id)onsetResult;
- (unsigned long long)processingChannelsBitset;
- (unsigned long long)processingChunkSamples;
- (id)queue;
- (id)recordingWillStartGroup;
- (void)reset;
- (unsigned long long)secondChanceHotTillMachTime;
- (id)secondPassTransaction;
- (void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2;
- (void)setAlwaysOnProcessorController:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setAudioProvider:(id)arg1;
- (void)setAudioStream:(id)arg1;
- (void)setAudioStreamHoldings:(id)arg1;
- (void)setBestChannel:(unsigned long long)arg1;
- (void)setBestScore:(float)arg1;
- (void)setChannelSelectionDelay:(unsigned long long)arg1;
- (void)setChannelSelectionScores:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setCurrentSplitterState:(unsigned long long)arg1;
- (void)setDelayInSamplesRequiredForChannelSelection:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstPassThreshold:(float)arg1;
- (void)setHasTriggerPending:(bool)arg1;
- (void)setIsListenPollingStarting:(bool)arg1;
- (void)setIsPhraseSpotterBypassed:(bool)arg1;
- (void)setIsSecondPassRunning:(bool)arg1;
- (void)setIsSiriClientListening:(bool)arg1;
- (void)setKeywordAnalyzersNDAPI:(id)arg1;
- (void)setMasterChannelScoreBoost:(float)arg1;
- (void)setName:(id)arg1;
- (void)setOnsetChannel:(unsigned long long)arg1;
- (void)setOnsetResult:(id)arg1;
- (void)setProcessingChannelsBitset:(unsigned long long)arg1;
- (void)setProcessingChunkSamples:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecordingWillStartGroup:(id)arg1;
- (void)setSecondChanceHotTillMachTime:(unsigned long long)arg1;
- (void)setSecondPassTransaction:(id)arg1;
- (void)setShouldDisableOnSpeakerVerificationInSplitterMode:(bool)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setVoiceTriggerAOPModeStartPolicy:(id)arg1;
- (void)setVoiceTriggerEnabled:(bool)arg1;
- (void)setVoiceTriggerSecondPass:(id)arg1;
- (void)setVoiceTriggerStartPolicy:(id)arg1;
- (bool)shouldDisableOnSpeakerVerificationInSplitterMode;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)start;
- (id)stateMachine;
- (id)voiceTriggerAOPModeStartPolicy;
- (bool)voiceTriggerEnabled;
- (id)voiceTriggerSecondPass;
- (id)voiceTriggerStartPolicy;
- (void)voiceTriggerXPCService:(id)arg1 setPhraseSpotterBypassing:(bool)arg2;

@end
