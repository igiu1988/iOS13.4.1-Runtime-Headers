/* Generated by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPUnarchiveOperation : FPActionOperation <FPArchiveServiceUnarchivingDelegate> {
    id  _coordinationAccessToken;
    NSFileCoordinator * _coordinator;
    FPItem * _destinationFolder;
    bool  _hasStitchedUnarchivedItems;
    FPItem * _item;
    NSURL * _itemURL;
    id /* block */  _passphraseRequestBlock;
    FPItemID * _placeholderID;
    id /* block */  _unarchiveCompletionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ passphraseRequestBlock;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unarchiveCompletionBlock;

- (void).cxx_destruct;
- (void)__completeWithItem:(id)arg1 service:(id)arg2 resultURL:(id)arg3 error:(id)arg4;
- (void)_completeWithItemURL:(id)arg1 item:(id)arg2 service:(id)arg3 resultURL:(id)arg4 error:(id)arg5;
- (bool)_handleArchiveDecryptionError:(id)arg1 item:(id)arg2 service:(id)arg3 itemURL:(id)arg4;
- (id)_newParentProgressWithCompletedUnitCount:(long long)arg1;
- (void)actionMain;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (bool)getHasUnarchivedMultipleItems:(bool*)arg1 firstUnarchivedItemURL:(id*)arg2 forArchiveFolderURL:(id)arg3 error:(id*)arg4;
- (id)initWithItem:(id)arg1 destinationFolder:(id)arg2;
- (id /* block */)passphraseRequestBlock;
- (void)service:(id)arg1 didReceiveArchivedItemsDescriptors:(id)arg2;
- (void)setPassphraseRequestBlock:(id /* block */)arg1;
- (void)setUnarchiveCompletionBlock:(id /* block */)arg1;
- (id /* block */)unarchiveCompletionBlock;

@end
