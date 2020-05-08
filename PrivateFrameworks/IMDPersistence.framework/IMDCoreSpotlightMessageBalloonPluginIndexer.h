/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@interface IMDCoreSpotlightMessageBalloonPluginIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_newSummaryTextForPayloadData:(id)arg1 item:(id)arg2;
+ (id)_pluginPayloadAttachmentPathsForItem:(id)arg1;
+ (bool)_richLinkPluginHasRichContentForItem:(id)arg1 attachmentPaths:(id)arg2;
+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(bool)arg3 metadataToUpdate:(id)arg4;
+ (id)lpDescriptionCustomKey;
+ (id)lpHasRichMediaCustomKey;
+ (id)lpPluginPathsCustomKey;

@end
