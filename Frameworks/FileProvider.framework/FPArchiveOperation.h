/* Generated by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPArchiveOperation : FPActionOperation {
    id /* block */  _archiveCompletionBlock;
    FPItem * _destinationFolder;
    NSArray * _items;
    NSOperationQueue * _operationQueue;
    FPItemID * _placeholderID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ archiveCompletionBlock;

- (void).cxx_destruct;
- (void)_archiveURLs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_coordinateArchivedItemsWithCompletionHandler:(id /* block */)arg1;
- (void)_copyArchivedItemsWithCompletionHandler:(id /* block */)arg1;
- (void)_prepareItemsWithCompletionHandler:(id /* block */)arg1;
- (id)_zipPathExtension;
- (void)actionMain;
- (id /* block */)archiveCompletionBlock;
- (void)didUnarchiveItemAtURL:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1 destinationFolder:(id)arg2;
- (void)presendNotifications;
- (void)setArchiveCompletionBlock:(id /* block */)arg1;

@end
