/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

@interface AXHAUltronController : NSObject <AXUIClientDelegate, SNResultsObserving> {
    AVAudioEngine * _audioEngine;
    NSObject<OS_dispatch_queue> * _audioProcessingQueue;
    NSMutableArray * _bufferCollection;
    AVAudioFormat * _clientFormat;
    NSMutableDictionary * _detectionResultCollection;
    AXUIClient * _hearingUIClient;
    bool  _isRecording;
    SNAudioStreamAnalyzer * _listener;
    SBSStatusBarStyleOverridesAssertion * _llStatusBarAssertion;
    AVAudioSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_configureAudioCapture;
- (void)_handleAudioSessionInterruption:(id)arg1;
- (void)_processResult:(id)arg1;
- (void)_registerListeningRequestTypes;
- (void)_startAudioSession;
- (void)_stopAudioSession;
- (void)cleanupUltron;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (id)directory;
- (id)getDictionaryForListenType;
- (id)hearingUIClient;
- (id)init;
- (bool)isListening;
- (id)recorderSettings;
- (void)reduceFileDirectorySize;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)startUltron;
- (void)stopUltron;
- (void)toggleUltronSupport:(bool)arg1;

@end
