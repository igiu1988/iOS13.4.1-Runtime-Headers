/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSUserVoiceProfileStore : NSObject <CSLanguageCodeUpdateMonitorDelegate, CSVoiceTriggerAssetDownloadMonitorDelegate> {
    NSString * _languageCode;
    unsigned long long  _numberOfBaseProfileUtterancesToUpload;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _voiceProfileArray;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, readonly) unsigned long long numberOfBaseProfileUtterancesToUpload;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (retain) NSMutableArray *voiceProfileArray;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(bool)arg2;
- (bool)_checkIfRetrainingRequiredForAsset:(id)arg1;
- (id)_cleanupInvalidProfilesWithDryRun:(bool)arg1;
- (id)_composeSpeakerConfusionWithScores:(id)arg1 forProfiles:(id)arg2;
- (id)_deleteUserVoiceProfile:(id)arg1;
- (bool)_didReturnMultiUserNotFoundErrorCode:(id)arg1;
- (id)_getTopScoringProfileIdFromScores:(id)arg1;
- (id)_importVoiceProfile:(id)arg1 forModelType:(unsigned long long)arg2 withContentsOfDirectory:(id)arg3 withAsset:(id)arg4;
- (void)_loadVoiceProfilesForLocale:(id)arg1;
- (id)_logSpeakerConfusion:(id)arg1 forProfileArray:(id)arg2 withPrependString:(id)arg3;
- (void)_logSpeakerConfusionWithExplicitScores:(id)arg1 withImplicitScores:(id)arg2 withPurgeUtterances:(unsigned long long)arg3 forProfile:(id)arg4 forAsset:(id)arg5;
- (void)_logVoiceProfileConfusionForAsset:(id)arg1 withCleanup:(bool)arg2;
- (void)_migrationAssistantForUserVoiceProfilesForLocale:(id)arg1;
- (id)_prepareImplicitUtterance:(id)arg1 withType:(id)arg2 toProfile:(id)arg3 withTriggerSource:(id)arg4 withAudioInput:(id)arg5 withMetaData:(id)arg6 withUploadFlag:(bool)arg7;
- (id)_prepareVoiceProfileAtPath:(id)arg1 forImportToProfile:(id)arg2;
- (id)_retrainExplicitOnlyModelForVoiceProfile:(id)arg1 withForceRetrain:(bool)arg2;
- (void)_retrainLiveOnOnboardedProfilesForLanguage:(id)arg1 withForceRetrain:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)_retrainVoiceProfile:(id)arg1 forModelType:(unsigned long long)arg2 withForceRetrain:(bool)arg3;
- (id)_retrainVoiceProfile:(id)arg1 forModelType:(unsigned long long)arg2 withUtterances:(id)arg3 withForceRetrain:(bool)arg4;
- (void)_retrainVoiceProfile:(id)arg1 withForceRetrain:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)_saveImplicitUtterance:(id)arg1 asUtterance:(id)arg2 withType:(id)arg3 withTriggerSource:(id)arg4 withAudioInput:(id)arg5;
- (void)_saveTrainedUsers:(id)arg1 forLocale:(id)arg2;
- (id)_trainedUsersForLocale:(id)arg1;
- (void)_updateHomeUserId:(id)arg1 forProfileWithSiriProfileId:(id)arg2;
- (void)_updateTrainedUsersWithAction:(unsigned long long)arg1 UserVoiceProfile:(id)arg2;
- (void)addImplicitUtterance:(id)arg1 toVoiceProfile:(id)arg2 withTriggerSource:(id)arg3 withAudioInput:(id)arg4 withCompletion:(id /* block */)arg5;
- (void)addUserVoiceProfile:(id)arg1 fromUtteranceCache:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)addiTunesAccountForVoiceProfile:(id)arg1 withMultiUserToken:(id)arg2 withDsid:(id)arg3 withAltDsid:(id)arg4 withHomeId:(id)arg5 withHomeUserId:(id)arg6 withCompletionBlock:(id /* block */)arg7;
- (bool)checkIfVoiceProfile:(id)arg1 needsUpdatedWith:(id)arg2 withCategory:(unsigned long long)arg3;
- (id)cleanupInvalidCloudOnBoardedProfilesWithDryRun:(bool)arg1;
- (id)copyAudioFiles:(id)arg1 toProfile:(id)arg2 forModelType:(unsigned long long)arg3;
- (id)deleteUserVoiceProfile:(id)arg1;
- (id)evaluateScores:(id)arg1 forProfile:(id)arg2 withBaseThreshold:(unsigned long long)arg3 withImplicitThreshold:(unsigned long long)arg4 withDeltaThreshold:(unsigned long long)arg5;
- (id)initStore;
- (id)languageCode;
- (void)logVoiceProfileConfusionWithCleanup:(bool)arg1;
- (unsigned long long)numberOfBaseProfileUtterancesToUpload;
- (id)queue;
- (void)resyncVoiceProfilesOnboardedThroughCloud;
- (void)retrainVoiceProfilesForLanguage:(id)arg1 withForceRetrain:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)scoreSpeakerVector:(id)arg1 withVectorSize:(unsigned long long)arg2 withSatAnalyzers:(id)arg3;
- (void)setLanguageCode:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setVoiceProfileArray:(id)arg1;
- (id)userVoiceProfileForSharedSiriDebugID:(id)arg1;
- (id)userVoiceProfileForSiriProfileId:(id)arg1;
- (id)userVoiceProfileForVoiceProfileID:(id)arg1;
- (id)userVoiceProfilesForLocale:(id)arg1;
- (id)voiceProfileArray;

@end
