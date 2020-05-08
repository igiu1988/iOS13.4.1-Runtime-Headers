/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKStoragePlugin : STStoragePlugin <STStorageOptionTipDelegate> {
    NSArray * _appSpecifiers;
    bool  _cachedAttachmentsTakeUpSignificantSpace;
    NSDate * _cachedAttachmentsTakeUpSignificantSpaceDate;
    STStorageOptionTip * _cachedAutoDeleteMessagesTip;
    STStorageOptionTip * _cachedMessagesOniCloudTip;
    STStorageActionTip * _cachedReviewLargeAttachmentsTip;
    STStorageActionTip * _cachedReviewLargeConversationsTip;
    unsigned long long  _cachedSpaceSavedByAutoDeletingMessages;
    unsigned long long  _cachedSpaceSavedByDeletingNonSyncedAttachments;
    unsigned long long  _cachedSpaceSavedByReviewingLargeConversations;
    NSArray * _cloudAppSpecifiers;
    IMCloudKitHooks * _cloudKitHooks;
    double  _lastQuerySpaceSavedByAutoDeletingMessagesTime;
    double  _lastQuerySpaceSavedByNonSyncedDeletingAttachments;
    double  _lastQuerySpaceSavedByReviewingLargeConversationsTime;
    NSDictionary * _spaceTakenByAttachmentClass;
}

@property (nonatomic, retain) NSArray *appSpecifiers;
@property (nonatomic) bool cachedAttachmentsTakeUpSignificantSpace;
@property (nonatomic, retain) NSDate *cachedAttachmentsTakeUpSignificantSpaceDate;
@property (nonatomic, retain) STStorageOptionTip *cachedAutoDeleteMessagesTip;
@property (nonatomic, retain) STStorageOptionTip *cachedMessagesOniCloudTip;
@property (nonatomic, retain) STStorageActionTip *cachedReviewLargeAttachmentsTip;
@property (nonatomic, retain) STStorageActionTip *cachedReviewLargeConversationsTip;
@property (nonatomic) unsigned long long cachedSpaceSavedByAutoDeletingMessages;
@property (nonatomic) unsigned long long cachedSpaceSavedByDeletingNonSyncedAttachments;
@property (nonatomic) unsigned long long cachedSpaceSavedByReviewingLargeConversations;
@property (nonatomic, retain) NSArray *cloudAppSpecifiers;
@property (nonatomic, retain) IMCloudKitHooks *cloudKitHooks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastQuerySpaceSavedByAutoDeletingMessagesTime;
@property (nonatomic) double lastQuerySpaceSavedByNonSyncedDeletingAttachments;
@property (nonatomic) double lastQuerySpaceSavedByReviewingLargeConversationsTime;
@property (nonatomic, retain) NSDictionary *spaceTakenByAttachmentClass;
@property (readonly) Class superclass;

+ (id)_representedApp;

- (void).cxx_destruct;
- (bool)_attachmentsTakeUpMoreSpaceThanBytes:(unsigned long long)arg1;
- (bool)_attachmentsTakeUpSignificantSpace;
- (id)_autoDeleteMessagesTip;
- (bool)_cloudKitEnabled;
- (void)_displayICloudErrorMessage;
- (void)_enableAutoDeleteMessages;
- (void)_enableMessagesOniCloud;
- (bool)_forceShowingAutoDeleteMessagesTip;
- (bool)_forceShowingReviewLargeAttachmentsTip;
- (void)_iCloudHooksSetEnabledReturned:(id)arg1;
- (void)_iCloudHooksValuesChanged:(id)arg1;
- (void)_loadAppSpecifiers;
- (void)_loadAttachmentSizes;
- (void)_loadTips;
- (void)_loadiCloudAppSpecifiers;
- (id)_messagesOniCloudTip;
- (long long)_purgeableDiskSpace;
- (void)_refreshMessageOniCloudTipIfNeeded;
- (id)_reviewLargeAttachmentsTip;
- (bool)_shouldDisplayAutoDeleteMessagesTip;
- (bool)_shouldDisplayReviewLargeAttachmentsTip;
- (unsigned long long)_spaceSavedByAutoDeleteMessages;
- (unsigned long long)_spaceSavedByDeletingNonSyncedAttachments;
- (unsigned long long)_spaceSavedByReviewingLargeConversations;
- (id)_spaceTakenForSpecifier:(id)arg1;
- (long long)_totalSpaceOfAttachments;
- (unsigned long long)_totalSpaceOfLargeConversations;
- (id)appSpecifiers;
- (bool)cachedAttachmentsTakeUpSignificantSpace;
- (id)cachedAttachmentsTakeUpSignificantSpaceDate;
- (id)cachedAutoDeleteMessagesTip;
- (id)cachedMessagesOniCloudTip;
- (id)cachedReviewLargeAttachmentsTip;
- (id)cachedReviewLargeConversationsTip;
- (unsigned long long)cachedSpaceSavedByAutoDeletingMessages;
- (unsigned long long)cachedSpaceSavedByDeletingNonSyncedAttachments;
- (unsigned long long)cachedSpaceSavedByReviewingLargeConversations;
- (id)cloudAppSpecifiers;
- (id)cloudDocumentSpecifiers;
- (id)cloudKitHooks;
- (void)dealloc;
- (id)documentAppIdentifiers;
- (id)documentSpecifiersForApp:(id)arg1;
- (void)enableOptionForTip:(id)arg1;
- (id)externDataSizeAppIdentifiers;
- (long long)externDataSizeForApp:(id)arg1;
- (id)init;
- (double)lastQuerySpaceSavedByAutoDeletingMessagesTime;
- (double)lastQuerySpaceSavedByNonSyncedDeletingAttachments;
- (double)lastQuerySpaceSavedByReviewingLargeConversationsTime;
- (unsigned long long)messageDatabaseSize;
- (void)setAppSpecifiers:(id)arg1;
- (void)setCachedAttachmentsTakeUpSignificantSpace:(bool)arg1;
- (void)setCachedAttachmentsTakeUpSignificantSpaceDate:(id)arg1;
- (void)setCachedAutoDeleteMessagesTip:(id)arg1;
- (void)setCachedMessagesOniCloudTip:(id)arg1;
- (void)setCachedReviewLargeAttachmentsTip:(id)arg1;
- (void)setCachedReviewLargeConversationsTip:(id)arg1;
- (void)setCachedSpaceSavedByAutoDeletingMessages:(unsigned long long)arg1;
- (void)setCachedSpaceSavedByDeletingNonSyncedAttachments:(unsigned long long)arg1;
- (void)setCachedSpaceSavedByReviewingLargeConversations:(unsigned long long)arg1;
- (void)setCloudAppSpecifiers:(id)arg1;
- (void)setCloudKitHooks:(id)arg1;
- (void)setLastQuerySpaceSavedByAutoDeletingMessagesTime:(double)arg1;
- (void)setLastQuerySpaceSavedByNonSyncedDeletingAttachments:(double)arg1;
- (void)setLastQuerySpaceSavedByReviewingLargeConversationsTime:(double)arg1;
- (void)setSpaceTakenByAttachmentClass:(id)arg1;
- (id)spaceTakenByAttachmentClass;

@end
