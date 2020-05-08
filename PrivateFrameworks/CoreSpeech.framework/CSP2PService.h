/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSP2PService : NSObject {
    <CSADCompanionServiceProvider> * _adCompanionServiceProvider;
    NSString * _lastCommunicatedPeer;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _voiceIdentificationBatchId;
    NSString * _voiceTriggerBatchId;
}

@property (nonatomic) <CSADCompanionServiceProvider> *adCompanionServiceProvider;
@property (nonatomic, retain) NSString *lastCommunicatedPeer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *voiceIdentificationBatchId;
@property (nonatomic, retain) NSString *voiceTriggerBatchId;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 compressedFileAvailable:(id /* block */)arg3;
- (void)_processFetchVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processGradingDataFetchCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processMusicAccountSignInCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processParallelRecordingCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processRemoteHeySiriCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processReverseTransferVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processVoiceProfileDeleteCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processVoiceProfileListQueryCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processVoiceProfileUpdateTriggerFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_receiveParallelRecordingFromPeerId:(id)arg1 recordingInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_receiveVoiceGradingDataFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_receiveVoiceProfileFromPeerId:(id)arg1 voiceProfileInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(bool)arg4 withUncompressedDataSize:(unsigned long long)arg5 withBatchId:(id)arg6 withRetainFileFlag:(bool)arg7;
- (void)_sendParallelRecordingsToPeerId:(id)arg1 voiceProfileRequestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_sendVoiceGradingDataToPeerId:(id)arg1;
- (void)_sendVoiceProfile:(id)arg1 toPeerId:(id)arg2;
- (void)_sendVoiceProfileUpdateTriggerToPeerId:(id)arg1 forLocale:(id)arg2;
- (void)_sendVoiceTriggerGradingDataToPeerId:(id)arg1;
- (id)adCompanionServiceProvider;
- (id)init;
- (id)lastCommunicatedPeer;
- (void)processRemoteCommandWithPayload:(id)arg1 fromPeer:(id)arg2 withReply:(id /* block */)arg3;
- (id)queue;
- (void)sendVoiceGradingDataToNearbyPeer;
- (void)sendVoiceProfileUpdatedMessageToNearbyPeerForLocale:(id)arg1;
- (void)sendVoiceTriggerGradingDataToCompanion;
- (void)setAdCompanionServiceProvider:(id)arg1;
- (void)setLastCommunicatedPeer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setVoiceIdentificationBatchId:(id)arg1;
- (void)setVoiceTriggerBatchId:(id)arg1;
- (id)voiceIdentificationBatchId;
- (id)voiceTriggerBatchId;

@end
