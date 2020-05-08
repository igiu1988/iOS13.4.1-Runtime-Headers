/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFContentItemProxy : NSObject <QLPreviewItem> {
    WFFileRepresentation * _file;
    WFContentItem * _item;
    WFContentItem * _originalItem;
    id /* block */  _refreshBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFFileRepresentation *file;
@property (readonly) unsigned long long hash;
@property (nonatomic) WFContentItem *item;
@property (nonatomic) WFContentItem *originalItem;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, copy) id /* block */ refreshBlock;
@property (readonly) Class superclass;

+ (id)previewRetrievalQueue;

- (void).cxx_destruct;
- (id)file;
- (id)item;
- (id)originalItem;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id /* block */)refreshBlock;
- (void)setFile:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setOriginalItem:(id)arg1;
- (void)setRefreshBlock:(id /* block */)arg1;

@end