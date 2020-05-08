/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMChatRegistry : NSObject <IMAssistantChatDataSource, NSFastEnumeration, TUConversationManagerDelegate> {
    NSMutableArray * _allChats;
    NSMutableArray * _allChatsInThreadNameMap;
    NSObject<OS_dispatch_queue> * _batchProcessingQueue;
    IMChatRegistry * _batchProcessingRegistry;
    bool  _blackholedChatsExist;
    NSMutableDictionary * _chatGUIDToChatMap;
    NSMutableDictionary * _chatGUIDToCurrentThreadMap;
    NSMutableDictionary * _chatGUIDToInfoMap;
    NSMutableDictionary * _chatGUIDToiMessageSentOrReceivedMap;
    NSDictionary * _chatIdToLastMessageItemMap;
    NSMutableDictionary * _chatPersonIDToChatMap;
    NSMutableDictionary * _chatsBeingLoadedMap;
    TUConversationManager * _conversationManager;
    bool  _daemonHadTerminated;
    long long  _daemonLastFailedMessageDate;
    unsigned long long  _daemonUnreadCount;
    unsigned long long  _defaultNumberOfMessagesToLoad;
    bool  _firstLoad;
    NSMutableDictionary * _groupIDToChatMap;
    NSMutableDictionary * _groupParticipantToChatsMap;
    NSString * _historyModificationStamp;
    bool  _isInternalInstall;
    bool  _loading;
    IMTimer * _markAsReadTimer;
    NSMutableArray * _pendingQueries;
    bool  _personaKitRetriveAPITimedOut;
    bool  _postMessageSentNotifications;
    NSArray * _preExistingAllChats;
    NSMutableDictionary * _queryCompletionBlocks;
    NSSet * _registryChangeHistoryChatsToObserve;
    NSSet * _registryChangeHistoryChatsToUnregister;
    NSArray * _simulatedChats;
    NSMutableDictionary * _threadNameToChatMap;
    double  _timerStartTimeInterval;
    NSMutableArray * _updateBlocks;
    NSUserActivity * _userActivity;
    NSMutableArray * _waitingForQueries;
    bool  _wantsHistoryReload;
}

@property (setter=_setDefaultNumberOfMessagesToLoad:, nonatomic) unsigned long long _defaultNumberOfMessagesToLoad;
@property (nonatomic, readonly) bool _isLoading;
@property (setter=_setPostMessageSentNotifications:, nonatomic) bool _postMessageSentNotifications;
@property (nonatomic, readonly) NSArray *allExistingChats;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *batchProcessingQueue;
@property (nonatomic, retain) IMChatRegistry *batchProcessingRegistry;
@property (nonatomic, readonly) bool blackholedChatsExist;
@property (nonatomic, retain) NSDictionary *chatIdToLastMessageItemMap;
@property (nonatomic, readonly) TUConversationManager *conversationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBatchProcessing;
@property (nonatomic, readonly) unsigned long long numberOfExistingChats;
@property (nonatomic) bool personaKitRetriveAPITimedOut;
@property (nonatomic, retain) NSArray *preExistingAllChats;
@property (setter=_setSimulatedChats:, nonatomic, retain) NSArray *simulatedChats;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *updateBlocks;
@property (nonatomic, readonly) NSUserActivity *userActivity;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (bool)hasInitializedChatFiltering;
+ (Class)messageClass;
+ (id)performanceLogHandle;
+ (void)setHasInitializedChatFiltering:(bool)arg1;
+ (void)setMessageClass:(Class)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_IMChatGetIdentifiersAndServicesTestHook:(id)arg1 identifiers:(id*)arg2 services:(id*)arg3 personCentricEnabled:(bool)arg4;
- (void)__blockUntilQueriesComplete;
- (void)__handleChatReconstructions:(id)arg1;
- (void)__handleMergedChatReconstructions:(id)arg1;
- (void)__handleMergedChatReconstructions:(id)arg1 fullReload:(bool)arg2;
- (void)_account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;
- (id)_activeTUConversations;
- (void)_addChat:(id)arg1 participantSet:(id)arg2;
- (id)_allCreatedChats;
- (id)_allGUIDsForChat:(id)arg1;
- (void)_batchFetchRemainingContactsOnLaunch;
- (void)_blockUntilQueriesComplete:(id)arg1;
- (void)_chat:(id)arg1 handleCompletionOfQuery:(id)arg2 withUserInfo:(id)arg3 success:(bool)arg4 error:(id)arg5;
- (void)_chat:(id)arg1 inviteParticipants:(id)arg2 reason:(id)arg3 toiMessageChat:(bool)arg4;
- (void)_chat:(id)arg1 joinWithProperties:(id)arg2;
- (void)_chat:(id)arg1 removeParticipants:(id)arg2 reason:(id)arg3 fromiMessageChat:(bool)arg4;
- (void)_chat:(id)arg1 sendMessage:(id)arg2;
- (void)_chat:(id)arg1 sendPlayedReceiptForMessage:(id)arg2;
- (void)_chat:(id)arg1 sendReadReceiptForMessages:(id)arg2;
- (void)_chat:(id)arg1 sendSavedReceiptForMessage:(id)arg2;
- (void)_chat:(id)arg1 setPlayedExpressiveSendForMessage:(id)arg2;
- (void)_chat:(id)arg1 setProperties:(id)arg2 ofParticipant:(id)arg3;
- (void)_chat:(id)arg1 setValue:(id)arg2 forChatProperty:(id)arg3;
- (void)_chat:(id)arg1 updateDisplayName:(id)arg2;
- (void)_chat:(id)arg1 updateIsBlackholed:(bool)arg2;
- (void)_chat:(id)arg1 updateIsFiltered:(bool)arg2;
- (void)_chat:(id)arg1 updateLastAddressedHandle:(id)arg2;
- (void)_chat:(id)arg1 updateLastAddressedSIMID:(id)arg2;
- (id)_chatForChatDictionary:(id)arg1 items:(id)arg2 allowCreate:(bool)arg3 createdChat:(bool*)arg4 outGUID:(id*)arg5;
- (id)_chatForIdentifiers:(id)arg1;
- (id)_chatGUIDToChatMap;
- (id)_chatInstanceForGUID:(id)arg1;
- (void)_chatLoadedWithChatIdentifier:(id)arg1 chats:(id)arg2;
- (void)_chat_clearHistory:(id)arg1 beforeGUID:(id)arg2 afterGUID:(id)arg3 queryID:(id)arg4;
- (void)_chat_closeSession:(id)arg1;
- (void)_chat_declineInvitation:(id)arg1;
- (void)_chat_downloadPurgedAttachmentsForChat:(id)arg1;
- (void)_chat_isDownloadingPurgedAssetsForChat:(id)arg1 queryID:(id)arg2;
- (void)_chat_leave:(id)arg1 leavingiMessageChat:(bool)arg2;
- (void)_chat_loadAttachments:(id)arg1 queryID:(id)arg2;
- (void)_chat_loadFrequentReplies:(id)arg1 limit:(unsigned long long)arg2 queryID:(id)arg3;
- (void)_chat_loadHistory:(id)arg1 limit:(unsigned long long)arg2 beforeGUID:(id)arg3 afterGUID:(id)arg4 queryID:(id)arg5;
- (void)_chat_loadPagedHistory:(id)arg1 numberOfMessagesBefore:(unsigned long long)arg2 numberOfMessagesAfter:(unsigned long long)arg3 messageGUID:(id)arg4 queryID:(id)arg5;
- (void)_chat_loadUncachedAttachmentsCount:(id)arg1 queryID:(id)arg2;
- (void)_chat_loadUnreadMessages:(id)arg1 limit:(unsigned long long)arg2 fallbackGUID:(id)arg3 queryId:(id)arg4;
- (void)_chat_markAsSpam:(id)arg1 queryID:(id)arg2;
- (void)_chat_markAsSpam:(id)arg1 queryID:(id)arg2 autoReport:(bool)arg3;
- (void)_chat_markAsSpamAutomatically:(id)arg1;
- (void)_chat_remove:(id)arg1;
- (void)_chat_sendReadReceiptForAllMessages:(id)arg1;
- (void)_chat_storeItem:(id)arg1 inChat:(id)arg2;
- (id)_chatsWithMessage:(id)arg1;
- (id)_chatsWithMessageGUID:(id)arg1;
- (void)_checkIfItemIsCorrupt:(id)arg1;
- (void)_checkLimitAndSetMessagesToKeepLoadedIfNeeded:(unsigned long long)arg1 chat:(id)arg2;
- (void)_clearMarkAsReadTimerIfNecessary;
- (id)_copyMergedChatsPairedArrayFromMergedChatsArray:(id)arg1;
- (id)_createdChatForIMHandle:(id)arg1;
- (id)_createdChatForIMHandles:(id)arg1 style:(unsigned char)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(bool)arg5;
- (id)_createdChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)_createdChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (void)_daemonReallyDied:(id)arg1;
- (unsigned long long)_defaultNumberOfMessagesToLoad;
- (id)_eventForMessage:(id)arg1;
- (id)_existingChatForChatStyle:(unsigned char)arg1 groupID:(id)arg2 chatIdentifier:(id)arg3 accountID:(id)arg4;
- (id)_existingChatForIMHandle:(id)arg1 fixChatHandle:(bool)arg2;
- (id)_existingChatForIMHandleUsingPersonID:(id)arg1;
- (id)_existingChatForTUConversation:(id)arg1;
- (id)_existingChatFromSiblingsForIMHandle:(id)arg1;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 service:(id)arg3;
- (void)_fetchInitialBatchOfContactsOnLaunch;
- (bool)_firstLoad;
- (void)_handleAddressBookChange:(id)arg1;
- (void)_handleCachingAliasToCNIDMap:(id)arg1;
- (void)_handleChatReconstructions:(id)arg1;
- (void)_handleMergedChatReconstructions:(id)arg1;
- (bool)_hasChat:(id)arg1 forService:(id)arg2;
- (id)_inPersonFromIMHandle:(id)arg1 isMe:(bool)arg2;
- (id)_inPersonHandleFromIMHandle:(id)arg1 contact:(id)arg2;
- (id)_inPersonNameForContact:(id)arg1 imHandle:(id)arg2;
- (bool)_isLoading;
- (id)_lookupExistingChatWithIMHandle:(id)arg1;
- (void)_markHasHadSuccessfulQueryForChat:(id)arg1;
- (double)_maxDurationForScrutinyMode;
- (unsigned long long)_nicknameSharingAudience;
- (bool)_nicknameSharingEnabled;
- (void)_noteChatDealloc:(id)arg1;
- (void)_noteChatInit:(id)arg1;
- (bool)_postMessageSentNotifications;
- (void)_postMultiWayStateChangedNotification:(id)arg1;
- (void)_previouslyBlackholedChatLoadedWithHandleIDs:(id)arg1 chat:(id)arg2;
- (void)_processMessageForAccount:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 message:(id)arg7;
- (void)_processMessagesForAccount:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 messages:(id)arg7 messagesComingFromStorage:(bool)arg8;
- (void)_registerChat:(id)arg1 isIncoming:(bool)arg2 guid:(id)arg3;
- (void)_registerChatDictionary:(id)arg1 forChat:(id)arg2 isIncoming:(bool)arg3 newGUID:(id)arg4;
- (void)_registerChatDictionary:(id)arg1 forChat:(id)arg2 isIncoming:(bool)arg3 newGUID:(id)arg4 shouldPostNotification:(bool)arg5;
- (void)_registerCompletion:(id /* block */)arg1 forQueryID:(id)arg2;
- (void)_removeChatIdFromChatIdToLastMessageItemMap:(id)arg1;
- (void)_removeFromGroupParticipantToChatsMap:(id)arg1;
- (void)_resetChatReconstructionGroupMaps;
- (void)_resetChatRegistry;
- (void)_setChatHasCommunicatedOveriMessage:(id)arg1;
- (void)_setDefaultNumberOfMessagesToLoad:(unsigned long long)arg1;
- (void)_setMeCardSharingOnMessage:(id)arg1 forChat:(id)arg2;
- (void)_setMetaDictionary:(id)arg1 forChatIdentifier:(id)arg2;
- (void)_setPostMessageSentNotifications:(bool)arg1;
- (void)_setReplyToGuidOnMessage:(id)arg1 forChat:(id)arg2;
- (void)_setSimulatedChats:(id)arg1;
- (bool)_shouldShareMeCardForAlwaysAskAudienceWithChat:(id)arg1;
- (bool)_shouldShareMeCardForContactsOnlyAudienceWithChat:(id)arg1;
- (bool)_shouldSwitchAccountAddingMessagesToChat:(id)arg1 messageItems:(id)arg2 messagesComingFromStorage:(bool)arg3 chatProperties:(id)arg4;
- (id)_sortedParticipantIDHashForParticipants:(id)arg1;
- (void)_startBackgroundProcessingChats:(id)arg1 completion:(id /* block */)arg2;
- (void)_startMarkAsReadTimerIfNecessary;
- (void)_trackUsageForMessage:(id)arg1;
- (id)_transcriptRenderingMetaDictionaryForChatIdentifier:(id)arg1;
- (void)_unregisterChat:(id)arg1;
- (void)_unregisterChatWithGUID:(id)arg1;
- (void)_updateBlackholedChatsExist:(bool)arg1;
- (void)_updateInfo:(id)arg1 forGUID:(id)arg2 updatingUnreadCount:(bool)arg3;
- (void)_updateInfo:(id)arg1 forGUID:(id)arg2 updatingUnreadCount:(bool)arg3 shouldPostUnreadNotification:(bool)arg4;
- (void)_updatePersonCentricIDToChatMapForChat:(id)arg1 toNewPersonCentricID:(id)arg2;
- (void)_updateUnreadCountForChat:(id)arg1;
- (void)_updateUnreadCountForChat:(id)arg1 shouldPostNotification:(bool)arg2;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 chatPersonCentricID:(id)arg5 member:(id)arg6 statusChanged:(int)arg7;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 error:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 messageReceived:(id)arg7;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 messageSent:(id)arg7;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 messagesReceived:(id)arg7 messagesComingFromStorage:(bool)arg8;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 statusChanged:(int)arg7 handleInfo:(id)arg8;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageUpdated:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 notifySentMessage:(id)arg5 sendTime:(id)arg6;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 updateProperties:(id)arg5;
- (id)activeCallForConversationUUID:(id)arg1;
- (id)allExistingChats;
- (void)attachmentQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;
- (id)batchProcessingQueue;
- (id)batchProcessingRegistry;
- (bool)blackholedChatsExist;
- (void)blackholedChatsExist:(bool)arg1;
- (void)chat:(id)arg1 displayNameUpdated:(id)arg2;
- (void)chat:(id)arg1 engramIDUpdated:(id)arg2;
- (void)chat:(id)arg1 isFilteredUpdated:(bool)arg2;
- (void)chat:(id)arg1 lastAddressedHandleUpdated:(id)arg2;
- (void)chat:(id)arg1 lastAddressedSIMIDUpdated:(id)arg2;
- (void)chat:(id)arg1 lastSeenMessageGuidUpdated:(id)arg2;
- (void)chat:(id)arg1 nicknamesUpdated:(id)arg2;
- (void)chat:(id)arg1 propertiesUpdated:(id)arg2;
- (void)chat:(id)arg1 updated:(id)arg2;
- (id)chatForIMHandle:(id)arg1;
- (id)chatForIMHandle:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3;
- (id)chatForIMHandles:(id)arg1;
- (id)chatForIMHandles:(id)arg1 chatName:(id)arg2;
- (id)chatForIMHandles:(id)arg1 chatName:(id)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4;
- (id)chatForIMHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(bool)arg3;
- (id)chatForIMHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(bool)arg3 lastAddressedHandle:(id)arg4 lastAddressedSIMID:(id)arg5;
- (id)chatForIMHandles:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3;
- (id)chatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)chatForURL:(id)arg1 outMessageText:(id*)arg2 outRecipientIDs:(id*)arg3 outService:(id*)arg4 outMessageGUID:(id*)arg5;
- (id)chatGUIDsForChat:(id)arg1;
- (id)chatIdToLastMessageItemMap;
- (void)chatLoadedWithChatIdentifier:(id)arg1 chats:(id)arg2;
- (id)chatPersonIDToChatMap;
- (void)chatsNeedRemerging:(id)arg1 groupedChats:(id)arg2;
- (id)conversationManager;
- (void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
- (id)copyForBatchProcessing;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)downloadedPurgedAssetBatchForChatIDs:(id)arg1 completedTransferGUIDs:(id)arg2;
- (void)engroupParticipantsUpdatedForChat:(id)arg1;
- (void)enumerateAllChatsAndAttachmentSizesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)exisitingChatForGroupID:(id)arg1;
- (id)existingChatForAddresses:(id)arg1 allowRetargeting:(bool)arg2 bestHandles:(id*)arg3;
- (id)existingChatForEngramID:(id)arg1;
- (id)existingChatForIMHandle:(id)arg1;
- (id)existingChatForIMHandle:(id)arg1 allowRetargeting:(bool)arg2;
- (id)existingChatForIMHandle:(id)arg1 allowRetargeting:(bool)arg2 fixChatHandle:(bool)arg3;
- (id)existingChatForIMHandles:(id)arg1;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(bool)arg2;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(bool)arg2 groupID:(id)arg3;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(bool)arg2 groupID:(id)arg3 displayName:(id)arg4 ignoresDisplayName:(bool)arg5 joinedChatsOnly:(bool)arg6;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(bool)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(bool)arg5;
- (id)existingChatForPersonID:(id)arg1;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2 allowRetargeting:(bool)arg3;
- (id)existingChatWithChatIdentifier:(id)arg1;
- (id)existingChatWithDisplayName:(id)arg1;
- (id)existingChatWithGUID:(id)arg1;
- (id)existingChatWithGroupID:(id)arg1;
- (id)existingConversationForTUConversationUUID:(id)arg1;
- (void)finishedDownloadingPurgedAssetsForChatIDs:(id)arg1;
- (void)frequentRepliesQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned long long)arg5;
- (void)frequentRepliesQuery:(id)arg1 finishedWithResult:(id)arg2 limit:(unsigned long long)arg3;
- (void)handleIMChatParticipantsDidChange:(id)arg1;
- (void)historicalMessageGUIDsDeleted:(id)arg1 chatGUIDs:(id)arg2 queryID:(id)arg3;
- (void)historyQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned long long)arg5;
- (id)init;
- (id)initAsListener:(bool)arg1;
- (bool)isBatchProcessing;
- (void)isDownloadingQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(bool)arg4;
- (long long)lastFailedMessageDate;
- (void)lastFailedMessageDateChanged:(long long)arg1;
- (void)lastMessageForAllChats:(id)arg1;
- (void)leftChat:(id)arg1;
- (id)loadChatFromDaemonWithChatIdentifier:(id)arg1;
- (void)loadedChats:(id)arg1;
- (void)markAsSpamQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;
- (void)markMessageAsCorrupt:(id)arg1;
- (void)markMessageAsNotCorrupt:(id)arg1;
- (void)mergeWithCopyRegistry:(id)arg1;
- (id)messagesURLWithChat:(id)arg1 orHandles:(id)arg2 withMessageText:(id)arg3;
- (unsigned long long)numberOfExistingChats;
- (void)pagedHistoryQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 numberOfMessagesBefore:(unsigned long long)arg4 numberOfMessagesAfter:(unsigned long long)arg5 finishedWithResult:(id)arg6;
- (id)performanceLogHandle;
- (bool)personaKitRetriveAPITimedOut;
- (id)preExistingAllChats;
- (void)previouslyBlackholedChatLoadedWithHandleIDs:(id)arg1 chat:(id)arg2;
- (id)registryChangeHistoryChatsToObserveSet;
- (id)registryChangeHistoryChatsToUnregisterSet;
- (void)screenTimeEnablementChanged:(bool)arg1;
- (id)scrutinyInfo;
- (void)setActiveChatURL:(id)arg1;
- (void)setBatchProcessingQueue:(id)arg1;
- (void)setBatchProcessingRegistry:(id)arg1;
- (void)setChatIdToLastMessageItemMap:(id)arg1;
- (void)setPersonaKitRetriveAPITimedOut:(bool)arg1;
- (void)setPreExistingAllChats:(id)arg1;
- (void)setUpInitialCallState;
- (void)setUpdateBlocks:(id)arg1;
- (void)setUserActivityForChat:(id)arg1 message:(id)arg2 orHandles:(id)arg3 title:(id)arg4;
- (void)setUserActivityForChat:(id)arg1 orHandles:(id)arg2 title:(id)arg3;
- (void)setupComplete;
- (void)setupComplete:(bool)arg1 info:(id)arg2;
- (id)simulatedChats;
- (void)systemApplicationDidResume;
- (id)unblackholeAndLoadChatWithIMHandles:(id)arg1;
- (void)uncachedAttachmentCountQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;
- (unsigned long long)unreadCount;
- (void)unreadCountChanged:(long long)arg1;
- (void)unregisterChat:(id)arg1;
- (void)unregisterChatWithGUID:(id)arg1;
- (id)updateBlocks;
- (void)updateChatDictionaryArray:(id)arg1 createdChat:(id)arg2 joinstate:(long long)arg3 setHasCommunicatedOveriMessage:(bool*)arg4;
- (id)userActivity;
- (void)verifyFilteringForAllChats;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)_ck_chatForHandles:(id)arg1 createIfNecessary:(bool)arg2;
- (id)_ck_chatForHandles:(id)arg1 displayName:(id)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 ignoresDisplayName:(bool)arg5 joinedChatsOnly:(bool)arg6 createIfNecessary:(bool)arg7;

@end
