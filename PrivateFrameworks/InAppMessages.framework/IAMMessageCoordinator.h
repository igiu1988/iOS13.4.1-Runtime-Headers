/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
 */

@interface IAMMessageCoordinator : NSObject <IAMEventReceiver, IAMImpressionManagerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    <IAMApplicationContextProvider> * _applicationContext;
    bool  _haveMessagesBeenFetchedAndIndexed;
    bool  _havePresentationPolicyDisplayTimesBeenFetched;
    ICInAppMessageManager * _iTunesCloudIAMManager;
    IAMImpressionManager * _impressionManager;
    NSMutableDictionary * _lastDisplayTimeByGlobalPresentationPolicyGroupString;
    NSDictionary * _messageEntriesByIdentifier;
    NSDictionary * _messageEntriesByMonitoredKeys;
    NSDictionary * _messageEntriesByTargetIdentifier;
    NSMutableDictionary * _messageTargetsByTargetIdentifier;
    NSMutableDictionary * _metadataEntriesByIdentifier;
    <IAMMessageMetricsDelegate> * _metricsDelegate;
    IAMModalTarget * _modalTarget;
    NSString * _modalTargetIdentifier;
    NSMutableArray * _pendingEvents;
    NSMutableDictionary * _priorityMessageEntryByTargetIdentifier;
    bool  _registeredAsObserverForICNotifications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *messageEntriesByIdentifier;
@property (nonatomic, retain) NSDictionary *messageEntriesByMonitoredKeys;
@property (nonatomic) <IAMMessageMetricsDelegate> *metricsDelegate;
@property (nonatomic, retain) NSMutableDictionary *priorityMessageEntryByTargetIdentifier;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)propertyNameForGlobalPresentationPolicyGroupLastDisplayTime:(int)arg1;

- (void).cxx_destruct;
- (void)_calculateMessagesProximityAndDownloadResourcesIfNeeded:(id)arg1;
- (bool)_canMessagesBeEvaluated;
- (id)_createMessageFromMessageEntry:(id)arg1 replacingResourcePathsWithCachedResourceLocations:(bool)arg2;
- (id)_dequeuePendingEvents;
- (void)_didReceiveMessagesDidChangeNotification;
- (void)_enqueuePendingEvent:(id)arg1;
- (void)_evaluateMessagesIfReady;
- (void)_fetchLastDisplayTimeForGlobalPresentationPolicyGroup:(int)arg1 completion:(id /* block */)arg2;
- (id)_filterActiveTargetIdentifiers:(id)arg1;
- (void)_incrementNumberOfDisplaysForMessageEntry:(id)arg1;
- (id)_messageEntriesCorrespondingToContextProperties:(id)arg1 shouldExcludeMessagesRequiringTriggerEvent:(bool)arg2;
- (void)_notifyMessageTargets:(id)arg1 withTargetIdentifier:(id)arg2 didUpdatePriorityMessageFromEntry:(id)arg3;
- (void)_reevaluateMessageEntries:(id)arg1 forTargetIdentifier:(id)arg2 shouldNotifyTargetsIfPriorityMessageNonNil:(bool)arg3;
- (void)_reevaluateTargetsWithIdentifiers:(id)arg1 forEvent:(id)arg2 shouldNotifyTargetsIfPriorityMessageNonNil:(bool)arg3;
- (void)_removeUserNotificationRemovalForMessageWithIdentifier:(id)arg1;
- (void)_reportDisplayToITunesCloudManagerWithEventIdentifier:(id)arg1;
- (void)_reportMessageAction:(id)arg1 wasPerformedInMessageEntry:(id)arg2 fromTargetWithIdentifier:(id)arg3;
- (id)_targetIdentifiersCorrespondingToMessageEntries:(id)arg1;
- (void)_updateMessageIndexes;
- (void)_updatePriorityMessageEntry:(id)arg1 forTargetIdentifier:(id)arg2 shouldNotifyTargetsIfNonNil:(bool)arg3;
- (id)allMessageEntriesWithoutDuplicates:(id)arg1;
- (bool)applicationAllowsModalPresentation;
- (id)applicationViewControllerForModalPresentation;
- (void)cacheLastDisplayTime:(id)arg1 forGlobalPresentationPolicyGroup:(int)arg2;
- (void)dealloc;
- (void)fetchGlobalPresentationPolicyGroupDisplayTimesFromiTunesCloud;
- (void)fetchMessagesFromiTunesCloud;
- (void)impressionManager:(id)arg1 impressionDidEndForMessageEntry:(id)arg2;
- (void)impressionManager:(id)arg1 shouldReportImpressionEventWithDictionary:(id)arg2;
- (id)init;
- (id)lastDisplayTimeForGlobalPresentationPolicyGroup:(int)arg1;
- (id)messageEntriesByIdentifier;
- (id)messageEntriesByMonitoredKeys;
- (id)messageEntriesByRealKeyCorrespondingToEvent:(id)arg1;
- (id)messageEntryForIdentifier:(id)arg1;
- (id)metadataEntriesByIdentifier;
- (id)metadataEntryForIdentifier:(id)arg1;
- (id)metricsDelegate;
- (void)performApplicationAction:(id)arg1;
- (id)priorityMessageEntryByTargetIdentifier;
- (void)receiveEvent:(id)arg1;
- (void)registerMessageTarget:(id)arg1;
- (void)reportApplicationContextPropertiesDidChange:(id)arg1;
- (void)reportHoldoutMessageWouldAppear:(id)arg1;
- (void)reportMessageDidAppearWithIdentifier:(id)arg1;
- (void)reportMessageDidAppearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2;
- (void)reportMessageDidDisappearWithIdentifier:(id)arg1;
- (void)reportMessageDidDisappearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2;
- (void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2;
- (void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 fromTargetWithIdentifier:(id)arg3;
- (void)reportMetricsEvent:(id)arg1;
- (void)setLastDisplayTime:(id)arg1 forGlobalPresentationPolicyGroup:(int)arg2;
- (void)setMessageEntriesByIdentifier:(id)arg1;
- (void)setMessageEntriesByMonitoredKeys:(id)arg1;
- (void)setMetadataEntriesByIdentifier:(id)arg1;
- (void)setMetadataEntry:(id)arg1 forIdentifier:(id)arg2;
- (void)setMetricsDelegate:(id)arg1;
- (void)setPriorityMessageEntryByTargetIdentifier:(id)arg1;
- (void)start;
- (void)startWithApplicationContext:(id)arg1;
- (void)unregisterMessageTarget:(id)arg1;
- (void)updateMetadataOfMessageEntriesByRealKey:(id)arg1 forReceivedEvent:(id)arg2;

@end
