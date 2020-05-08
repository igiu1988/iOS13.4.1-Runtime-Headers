/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDSuggestManager : NSObject <SGDSuggestManagerAllProtocol> {
    _PASNotificationToken * _assetUpdateToken;
    NSDictionary * _bundleIdToPET;
    NSString * _clientName;
    NSXPCConnection * _connection;
    CNContactStore * _contactStore;
    SGServiceContext * _context;
    SGDManagerForCTS * _ctsManager;
    NSLock * _dirtyLock;
    SGXpcTransaction * _dirtyTransaction;
    EKEventStore * _ekStore;
    SGSqlEntityStore * _harvestStore;
    SGSuggestHistory * _history;
    NSLock * _lastSuggestionsFromMessageLock;
    SGSearchableItemIdTriple * _lastSuggestionsFromMessageRequest;
    SGFuture * _lastSuggestionsFromMessageResponse;
    NSOperationQueue * _messageHarvestQueue;
    _PASLock * _recentlyHarvestedDetailLock;
    int  _settingsChangeToken;
}

@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) SGServiceContext *context;

+ (void)clearChangeHistory:(id)arg1;
+ (id)fetchChangeHistory;
+ (void)initialize;

- (void).cxx_destruct;
- (struct SGMContactDetailUsedApp_ { unsigned long long x1; })_appEnumForBundleId:(id)arg1;
- (bool)_canBannerUseStoredDissection:(id)arg1 options:(unsigned long long)arg2;
- (bool)_clientIsMail;
- (bool)_clientIsMessages;
- (void)_confirmReminderByRecordId:(id)arg1 completion:(id /* block */)arg2;
- (id)_foundInAppsStringCompactVersionWithContactName:(id)arg1;
- (id)_foundInAppsStringLongVersionForAppName:(id)arg1 contactName:(id)arg2;
- (id)_foundInAppsStringWithoutContactForAppName:(id)arg1;
- (bool)_isContactInteresting:(id)arg1 emailEntity:(id)arg2 enrichments:(id)arg3 hasContactCard:(bool)arg4;
- (id)_mapToPseudoEvents:(id)arg1;
- (id)_maybeFormatString;
- (void)_onInteractionBlacklistUpdate:(id)arg1;
- (void)_performAction:(id)arg1 onContactDetailRecord:(id)arg2 completion:(id /* block */)arg3;
- (void)_performAction:(id)arg1 onRecord:(id)arg2 completion:(id /* block */)arg3;
- (void)_performAction:(id)arg1 onRecord:(id)arg2 completion:(id /* block */)arg3 withParentConfirmation:(bool)arg4;
- (id)_pmlTraining;
- (void)_rejectReminderByRecordId:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendChatChangedNotificationWithDomainIdentifier:(id)arg1;
- (void)_setupHistoryObserver:(id)arg1;
- (id)_showInFormatStringWithLocalization:(id)arg1;
- (void)_storeAndGeocodeEntity:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 store:(id)arg5 afterCallbackQueue:(id)arg6 finalize:(id /* block */)arg7;
- (void)_suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 dissectIfNecessary:(bool)arg3 completionDelivery:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)_suggestionsFromMessageWithIdentifier:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4 completionDelivery:(unsigned long long)arg5 providedBy:(id /* block */)arg6 dissectIfNecessary:(bool)arg7;
- (void)_suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 dissectIfNecessary:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)addInteractions:(id)arg1 bundleId:(id)arg2 completion:(id /* block */)arg3;
- (void)addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(id /* block */)arg3;
- (void)addSearchableItems:(id)arg1 completion:(id /* block */)arg2;
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)allRemindersLimitedTo:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)bumptTTLForNLEvent:(id)arg1;
- (id)cachedResultForKey:(id)arg1 generateResult:(id /* block */)arg2 validateResults:(id /* block */)arg3;
- (void)clearCachesFully:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)clearContactAggregator;
- (void)clearContactAggregatorConversation:(id)arg1;
- (id)clientName;
- (void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)confirmContact:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmContactDetailRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmEventByRecordId:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmRealtimeReminder:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmReminderByRecordId:(id)arg1 completion:(id /* block */)arg2;
- (void)contactFromRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)contactMatchesOrLookupIdByEmailAddress:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)contactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)contactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (bool)containsNonCuratedData:(id)arg1;
- (id)context;
- (id)createLaunchIntentForStorageEvent:(id)arg1;
- (id)curatedEventKeyForExactMatchOfPseudoEvent:(id)arg1 candidates:(id)arg2;
- (void)daemonExitWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteCloudKitZoneWithCompletion:(id /* block */)arg1;
- (void)deleteInteractionsWithBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (id)dissectMessage:(id)arg1 fromSource:(id)arg2 store:(id)arg3;
- (id)dissectMessage:(id)arg1 fromSource:(id)arg2 store:(id)arg3 context:(id)arg4;
- (void)drainQueueCompletelyWithCompletion:(id /* block */)arg1;
- (void)emailAddressIsSignificant:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)enqueueSearchableItems:(id)arg1 completion:(id /* block */)arg2;
- (id)entityFromUniqueKey:(id)arg1;
- (void)eventFromRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)eventFromUniqueId:(id)arg1 completion:(id /* block */)arg2;
- (void)eventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(id /* block */)arg3;
- (void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(id /* block */)arg5;
- (void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(id /* block */)arg6;
- (id)filterPastEvents:(id)arg1;
- (id)filterRealtimeEvents:(id)arg1;
- (void)foundInStringForRecordId:(id)arg1 style:(unsigned char)arg2 withCompletion:(id /* block */)arg3;
- (void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)geocodeEnrichmentsInPipelineEntity:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)harvestedSuggestionsFromMessages:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)initWithConnection:(id)arg1 store:(id)arg2;
- (id)initWithMessagesConnection:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1;
- (id)initWithStore:(id)arg1 ctsManager:(id)arg2 ekStore:(id)arg3 contactStore:(id)arg4;
- (void)ipsosMessagesWithSearchableItems:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)isEnabledWithCompletion:(id /* block */)arg1;
- (void)isEventCandidateForURL:(id)arg1 title:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)isSGEntity:(id)arg1 duplicateOfEKEvent:(id)arg2 withStore:(id)arg3;
- (bool)isSearchableItemPartOfReimport:(id)arg1;
- (void)keepDirty:(bool)arg1;
- (void)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 ignoreUserActivitySupport:(bool)arg4 completion:(id /* block */)arg5;
- (void)logEventInteractionForEntity:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventWithExternalIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventWithUniqueKey:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForRealtimeEvent:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logMetricAutocompleteResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (void)logMetricAutocompleteUserSelectedRecordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactSearchResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (void)logMetricContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)arg1;
- (void)logMetricSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logSuggestionInteractionForRecordId:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logUnknownContactInformationShownCount:(unsigned long long)arg1 notShownCount:(unsigned long long)arg2 bundleId:(id)arg3;
- (void)messagesToRefreshWithCompletion:(id /* block */)arg1;
- (void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(bool)arg3 onlySignificant:(bool)arg4 withCompletion:(id /* block */)arg5;
- (void)namesForDetailCacheSnapshotsWithCompletion:(id /* block */)arg1;
- (void)noopWithCompletion:(id /* block */)arg1;
- (void)originFromRecordId:(id)arg1 completion:(id /* block */)arg2;
- (void)planReceivedFromServerWithPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(id /* block */)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(id /* block */)arg6;
- (void)prepareForRealtimeExtraction:(id /* block */)arg1;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (id)realtimeContactsFromEntity:(id)arg1 enrichments:(id)arg2 sourceTextMessage:(id)arg3 store:(id)arg4;
- (void)realtimeSuggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 extractionDate:(id)arg4 withCompletion:(id /* block */)arg5;
- (void)recentURLsWithLimit:(unsigned int)arg1 withCompletion:(id /* block */)arg2;
- (void)registerForCoreSpotlightIndexing;
- (void)rejectContact:(id)arg1 completion:(id /* block */)arg2;
- (void)rejectContactDetailRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)rejectCuratedContactDetail:(id)arg1 from:(id)arg2 completion:(id /* block */)arg3;
- (void)rejectEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)rejectEventByRecordId:(id)arg1 completion:(id /* block */)arg2;
- (void)rejectRealtimeReminder:(id)arg1 completion:(id /* block */)arg2;
- (void)rejectRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)rejectReminderByRecordId:(id)arg1 completion:(id /* block */)arg2;
- (void)reminderAlarmTriggeredForRecordId:(id)arg1 completion:(id /* block */)arg2;
- (void)reminderTitleForContent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeAllStoredPseudoContactsWithCompletion:(id /* block */)arg1;
- (void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)resetConfirmationAndRejectionHistory:(id /* block */)arg1;
- (void)resolveFullDownloadRequests:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)schemaOrgToEvents:(id)arg1 completion:(id /* block */)arg2;
- (void)sendRTCLogsWithCompletion:(id /* block */)arg1;
- (void)setupManagerWithConnection:(id)arg1 store:(id)arg2 ctsManager:(id)arg3 ekStore:(id)arg4 contactStore:(id)arg5;
- (id)shortNamesAndRealtimeEventsFromEntity:(id)arg1 enrichments:(id)arg2 store:(id)arg3;
- (void)sleepWithCompletion:(id /* block */)arg1;
- (void)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (id)storageContactFromRecordId:(id)arg1;
- (void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(id /* block */)arg5;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionDelivery:(unsigned long long)arg3 completionHandler:(id /* block */)arg4 fullCompletionHandler:(id /* block */)arg5;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 fullCompletionHandler:(id /* block */)arg3;
- (void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)updateMessages:(id)arg1 state:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 excludingBundleIdentifiers:(id)arg3 limit:(unsigned int)arg4 withCompletion:(id /* block */)arg5;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithLastModificationDate:(id)arg2 completion:(id /* block */)arg3;

@end