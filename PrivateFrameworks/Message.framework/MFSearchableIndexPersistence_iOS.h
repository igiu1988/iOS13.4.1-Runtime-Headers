/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSearchableIndexPersistence_iOS : EDSearchableIndexPersistence <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2;

- (id)_verificationDataFromMessage:(id)arg1 messageIDTransactionIDDictionary:(id)arg2;
- (id)additionalFilterClause;
- (void)attachmentItemMetadataForAttachmentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 result:(id /* block */)arg4;
- (id)messagesWhere:(id)arg1 sortedBy:(id)arg2 limit:(long long)arg3;
- (id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2;
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg1;

@end
