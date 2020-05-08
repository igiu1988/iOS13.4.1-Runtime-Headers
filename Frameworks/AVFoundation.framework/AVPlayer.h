/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayer : NSObject <AVAudioSessionParticipant> {
    AVPlayerInternal * _player;
}

@property (getter=_isPIPModePossible, nonatomic, readonly) bool PIPModePossible;
@property (setter=_setDisplaysUsedForPlayback:, nonatomic, copy) NSArray *_displaysUsedForPlayback;
@property (nonatomic, readonly) long long _externalProtectionStatus;
@property bool allowsOutOfBandTextTrackRendering;
@property bool allowsPixelBufferPoolSharing;
@property bool appliesMediaSelectionCriteriaAutomatically;
@property (copy) NSString *audioOutputDeviceUniqueID;
@property (getter=isAudioPlaybackEnabledAtAllRates, nonatomic, readonly) bool audioPlaybackEnabledAtAllRates;
@property (retain) AVAudioSession *audioSession;
@property (nonatomic, copy) NSString *captionPipelineStrategy;
@property (nonatomic, copy) NSString *captionRenderingStrategy;
@property bool disallowsAMRAudio;
@property (getter=_disallowsAutoPauseOnRouteRemovalIfNoAudio, setter=_setDisallowsAutoPauseOnRouteRemovalIfNoAudio:, nonatomic) bool disallowsAutoPauseOnRouteRemovalIfNoAudio;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) <AVLoggingIdentifier> *loggingIdentifier;
@property float maxRateForAudioPlayback;
@property float minRateForAudioPlayback;
@property (copy) NSString *multichannelAudioStrategy;
@property (nonatomic) unsigned long long preferredVideoDecoderGPURegistryID;
@property (getter=_preservesAudioSessionSampleRate, setter=_setPreservesAudioSessionSampleRate:, nonatomic) bool preservesAudioSessionSampleRate;
@property (nonatomic) bool preventsDisplaySleepDuringVideoPlayback;
@property (nonatomic, readonly) long long status;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (int)_createFigPlayerWithType:(long long)arg1 options:(const struct __CFDictionary { }*)arg2 player:(struct OpaqueFigPlayer {}**)arg3;
+ (bool)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (bool)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
+ (bool)automaticallyNotifiesObserversOfCurrentItem;
+ (bool)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (bool)automaticallyNotifiesObserversOfRate;
+ (bool)automaticallyNotifiesObserversOfUserVolume;
+ (bool)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (bool)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (bool)automaticallyNotifiesObserversOfUsesLegacyAutomaticWaitingBehavior;
+ (bool)automaticallyNotifiesObserversOfVibrationPattern;
+ (long long)availableHDRModes;
+ (void)checkForAvailableHDRModesChanges;
+ (bool)eligibleForHDRPlayback;
+ (void)fireAvailableHDRModesDidChangeNotification;
+ (void)fireEligibleForHDRPlaybackDidChangeNotification;
+ (void)initialize;
+ (bool)isIAPDExtendedModeActive;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)makePlayerLoggingIdentifier;
+ (id)playerWithFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
+ (void)registerForScreenConnectionChanges;
+ (bool)worksAroundConcurrentKVOCrash;

- (bool)_CALayerDestinationIsTVOut;
- (void)_addFPListeners;
- (void)_addItemToLinkedList_invokeOnIvarAccessQueue:(id)arg1 afterItem:(id)arg2;
- (void)_addLayer:(id)arg1;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_advanceToNextItem;
- (bool)_airPlayVideoActive;
- (id)_ancillaryPerformanceInformationForDisplay;
- (bool)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (void)_applyLinkedListOfItemsToFigPlayerUsingBlock:(id /* block */)arg1;
- (void)_applyPlayQueueChangesToFigPlayerWithCompletionHandler:(id /* block */)arg1;
- (void)_attachClosedCaptionLayersToFigPlayer;
- (void)_attachFigPlayerToSubtitleLayers;
- (void)_attachVideoLayersToFigPlayer;
- (id)_avPlayerLayers;
- (bool)_cachedNonForcedSubtitleDisplayEnabledForCurrentItem;
- (struct CGSize { double x1; double x2; })_cachedPresentationSizeOfCurrentItem;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id /* block */)arg1;
- (bool)_carplayIsActive;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (id)_clientName;
- (long long)_clientPriority;
- (id)_closedCaptionLayers;
- (struct OpaqueFigPlayer { }*)_copyFigPlayer;
- (id)_copyPerformanceDataForCurrentItem;
- (void)_createAndConfigureFigPlayerWithType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (struct __CFDictionary { }*)_createDictionaryWithDimensionsOfReservedVideoMemory:(struct CGSize { double x1; double x2; })arg1;
- (int)_createPrerollID;
- (void)_detachClosedCaptionLayersFromFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)_detachFigPlayerFromSubtitleLayers;
- (void)_detachVideoLayersForSuspension;
- (void)_detachVideoLayersFromFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_didFinishSuspension:(id)arg1;
- (bool)_disallowsAutoPauseOnRouteRemovalIfNoAudio;
- (bool)_disallowsVideoLayerDisplayCompositing;
- (id)_displaysUsedForPlayback;
- (bool)_dynamicallyChoosesInitialVariant;
- (void)_enqueuePlayQueueModification_invokeOnIvarAccessQueue:(id)arg1;
- (void)_enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)_evaluateDisplaySizeOfAllAttachedLayers;
- (bool)_externalPlaybackActive;
- (id)_externalPlaybackVideoGravity;
- (long long)_externalProtectionStatus;
- (long long)_externalProtectionStatusCopiedFromFig;
- (long long)_extractFPExternalProtectionStatus:(id)arg1;
- (id)_fpNotificationNames;
- (bool)_hasAssociatedAVPlayerLayerInPIPMode;
- (bool)_hasAssociatedOnscreenAVPlayerLayer;
- (bool)_hasForegroundLayers;
- (bool)_hostApplicationInForeground;
- (long long)_inferredTimeControlStatusAndWaitingReason:(id*)arg1 forRate:(float)arg2;
- (void)_insertItem:(id)arg1 afterItem:(id)arg2;
- (bool)_isAirPlayVideoActive;
- (bool)_isConnectedToPhysicalSecondScreen;
- (bool)_isDisplayingClosedCaptions;
- (bool)_isIAPDExtendedModeActive;
- (bool)_isMuted;
- (bool)_isPIPModePossible;
- (bool)_isVideoPlaybackAllowedWhileInBackground;
- (void)_itemIsReadyToPlay:(id)arg1;
- (long long)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;
- (id)_items;
- (id)_items_invokeOnIvarAccessQueue;
- (void)_layerVisibilityChanged:(id)arg1;
- (bool)_limitsBandwidthForCellularAccess;
- (void)_logPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (struct CGSize { double x1; double x2; })_maximumAVPlayerLayerDisplaySize;
- (id)_nameForLogging;
- (void)_noteNewNonForcedSubtitleDisplayEnabledForPlayerItem:(id)arg1;
- (void)_noteNewPresentationSizeForPlayerItem:(id)arg1;
- (bool)_pausesAudioVisualPlaybackInBackground;
- (id)_pendingFigPlayerProperties;
- (id)_pendingFigPlayerPropertyForKey:(id)arg1;
- (id)_performanceDictionary;
- (id)_pixelBufferAttributeMediator;
- (void)_pixelBufferAttributesDidChangeForLayer:(id)arg1;
- (id)_playbackDisplaysForFigPlayer;
- (void)_playerLayer:(id)arg1 replaceVideoLayer:(id)arg2 with:(id)arg3;
- (float)_playerVolume;
- (bool)_preservesAudioSessionSampleRate;
- (bool)_preventsSleepDuringVideoPlayback;
- (float)_rate;
- (id)_rateDidChangeNotificationPayloadForAVFRateChangeReason:(id)arg1 rateChangeIdentifier:(id)arg2;
- (id)_rateDidChangeNotificationPayloadForFigRateChangeReason:(int)arg1 rateChangeIdentifier:(id)arg2;
- (id)_reasonForWaitingToPlay;
- (void)_removeAllItems;
- (void)_removeAllLayers;
- (void)_removeFPListeners;
- (void)_removeItem:(id)arg1;
- (void)_removeItemFromLinkedList_invokeOnIvarAccessQueue:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (void)_removeLayer:(id)arg1 videoLayer:(id)arg2 closedCaptionLayer:(id)arg3 subtitleLayer:(id)arg4;
- (void)_restoreVideoLayersForForeground;
- (bool)_resumePlayback:(double)arg1 error:(id*)arg2;
- (bool)_runOnIvarAccessQueueOperationThatMayChangeCurrentItemWithPreflightBlock:(id /* block */)arg1 modificationBlock:(id /* block */)arg2 error:(id*)arg3;
- (void)_setActionAtItemEnd:(long long)arg1 allowingAdvance:(bool)arg2;
- (void)_setAncillaryPerformanceInformationForDisplay:(id)arg1;
- (void)_setCALayerDestinationIsTVOut:(bool)arg1;
- (void)_setClientName:(id)arg1;
- (void)_setClientPriority:(long long)arg1;
- (void)_setCurrentItem:(id)arg1;
- (void)_setDisallowsAutoPauseOnRouteRemovalIfNoAudio:(bool)arg1;
- (void)_setDisallowsVideoLayerDisplayCompositing:(bool)arg1;
- (void)_setDisplaysUsedForPlayback:(id)arg1;
- (void)_setDynamicallyChoosesInitialVariant:(bool)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_setHostApplicationInForeground:(bool)arg1;
- (void)_setLimitsBandwidthForCellularAccess:(bool)arg1;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)_setPausesAudioVisualPlaybackInBackground:(bool)arg1;
- (void)_setPendingFigPlayerProperty:(id)arg1 forKey:(id)arg2;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setPreservesAudioSessionSampleRate:(bool)arg1;
- (void)_setPreventsSleepDuringVideoPlayback:(bool)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setUserVolume:(float)arg1;
- (void)_setUsesLegacyAutomaticWaitingBehavior:(bool)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(bool)arg1;
- (bool)_shouldDetachVideoLayersFromFigPlayer;
- (bool)_shouldLogPerformanceData;
- (void)_startObservingPropertiesOfCurrentItem:(id)arg1;
- (id)_stateDispatchQueue;
- (void)_stopObservingPropertiesOfCurrentItem:(id)arg1;
- (id)_subtitleLayers;
- (id)_synchronizeWithNewCurrentItem;
- (long long)_timeControlStatus;
- (long long)_timeControlStatusAndWaitingReason:(id*)arg1;
- (long long)_timeControlStatusAndWaitingReason:(id*)arg1 forPlaybackState:(int)arg2;
- (id /* block */)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (void)_updateClosedCaptionLayerBounds:(id)arg1;
- (void)_updateConnectionToSecondScreen;
- (void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
- (void)_updateDecoderPixelBufferAttributes:(id)arg1 onFigPlayer:(struct OpaqueFigPlayer { }*)arg2;
- (void)_updatePixelBufferAttributesForLayer:(id)arg1;
- (void)_updateProxyTimebaseFromNewCurrentItem;
- (float)_userVolume;
- (bool)_usesLegacyAutomaticWaitingBehavior;
- (id)_videoLayers;
- (id)_weakReference;
- (void)_willEnterForeground:(id)arg1;
- (long long)actionAtItemEnd;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)allowsAirPlayVideo;
- (bool)allowsExternalPlayback;
- (bool)allowsOutOfBandTextTrackRendering;
- (bool)allowsPixelBufferPoolSharing;
- (bool)appliesMediaSelectionCriteriaAutomatically;
- (id)audioOutputDeviceUniqueID;
- (id)audioSession;
- (bool)autoSwitchStreamVariants;
- (bool)automaticallyWaitsToMinimizeStalling;
- (void)cancelPendingPrerolls;
- (id)captionPipelineStrategy;
- (id)captionRenderingStrategy;
- (id)currentItem;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentUnfoldedTime;
- (void)dealloc;
- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (struct CGSize { double x1; double x2; })dimensionsOfReservedVideoMemory;
- (bool)disallowsAMRAudio;
- (bool)disallowsHardwareAcceleratedVideoDecoder;
- (id)dispatchQueue;
- (id)error;
- (id)expectedAssetTypes;
- (long long)externalPlaybackType;
- (id)externalPlaybackVideoGravity;
- (struct __CFString { }*)figPlayerActionForActionAtItemEnd:(long long)arg1;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isAirPlayVideoActive;
- (bool)isAudioPlaybackEnabledAtAllRates;
- (bool)isClosedCaptionDisplayEnabled;
- (bool)isDisplayingClosedCaptions;
- (bool)isExternalPlaybackActive;
- (bool)isMuted;
- (id)loggingIdentifier;
- (struct OpaqueCMClock { }*)masterClock;
- (float)maxRateForAudioPlayback;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (float)minRateForAudioPlayback;
- (id)multichannelAudioStrategy;
- (id)outputContext;
- (bool)outputObscuredDueToInsufficientExternalProtection;
- (void)pause;
- (void)play;
- (void)playImmediatelyAtRate:(float)arg1;
- (id)playerAVAudioSession;
- (id)playerRole;
- (unsigned long long)preferredVideoDecoderGPURegistryID;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)preparesItemsForPlaybackAsynchronously;
- (void)prerollAtRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)prerollOperationDidComplete:(bool)arg1 notificationPayload:(struct __CFDictionary { }*)arg2;
- (bool)preventsDisplaySleepDuringVideoPlayback;
- (float)rate;
- (id)reasonForWaitingToPlay;
- (void)removeAudioPlaybackRateLimits;
- (void)removeTimeObserver:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (long long)resourceConservationLevelWhilePaused;
- (void)seekToDate:(id)arg1;
- (void)seekToDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)setAllowsAirPlayVideo:(bool)arg1;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setAllowsOutOfBandTextTrackRendering:(bool)arg1;
- (void)setAllowsPixelBufferPoolSharing:(bool)arg1;
- (void)setAppliesMediaSelectionCriteriaAutomatically:(bool)arg1;
- (void)setAudioOutputDeviceUniqueID:(id)arg1;
- (void)setAudioSession:(id)arg1;
- (void)setAutoSwitchStreamVariants:(bool)arg1;
- (void)setAutomaticallyWaitsToMinimizeStalling:(bool)arg1;
- (void)setCaptionPipelineStrategy:(id)arg1;
- (void)setCaptionRenderingStrategy:(id)arg1;
- (void)setClosedCaptionDisplayEnabled:(bool)arg1;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize { double x1; double x2; })arg1;
- (void)setDisallowsAMRAudio:(bool)arg1;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(bool)arg1;
- (void)setExpectedAssetTypes:(id)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setLoggingIdentifier:(id)arg1;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setMaxRateForAudioPlayback:(float)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (void)setMinRateForAudioPlayback:(float)arg1;
- (void)setMultichannelAudioStrategy:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setOutputContext:(id)arg1;
- (void)setPlayerRole:(id)arg1;
- (void)setPreferredVideoDecoderGPURegistryID:(unsigned long long)arg1;
- (void)setPreparesItemsForPlaybackAsynchronously:(bool)arg1;
- (void)setPreventsDisplaySleepDuringVideoPlayback:(bool)arg1;
- (void)setRate:(float)arg1;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)setRate:(float)arg1 withVolumeRampDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setRate:(float)arg1 withVolumeRampDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 playImmediately:(bool)arg3 rateChangeReason:(int)arg4;
- (void)setResourceConservationLevelWhilePaused:(long long)arg1;
- (void)setShouldReduceResourceUsage:(bool)arg1;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(bool)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(bool)arg1;
- (void)setUsesDedicatedNotificationQueueForMediaServices:(bool)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(bool)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVibrationPattern:(id)arg1;
- (void)setVolume:(float)arg1;
- (bool)shouldReduceResourceUsage;
- (long long)status;
- (long long)timeControlStatus;
- (bool)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (bool)usesAudioOnlyModeForExternalPlayback;
- (bool)usesDedicatedNotificationQueueForMediaServices;
- (bool)usesExternalPlaybackWhileExternalScreenIsActive;
- (id)valueForUndefinedKey:(id)arg1;
- (id)vibrationPattern;
- (float)volume;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)pu_generateSnapshotImageAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

// Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI

- (id)bkui_snapshotImageAt:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 asset:(id)arg2 error:(id*)arg3;

@end
