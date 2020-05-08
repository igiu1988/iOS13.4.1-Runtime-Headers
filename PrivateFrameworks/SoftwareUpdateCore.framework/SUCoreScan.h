/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
 */

@interface SUCoreScan : NSObject {
    SUCoreDescriptor * _activeDescriptor;
    id /* block */  _cancelCompletion;
    bool  _cancelingOperation;
    id /* block */  _checkCompletion;
    NSObject<OS_dispatch_queue> * _clientCompletionQueue;
    id /* block */  _collectCompletion;
    bool  _downloadDocumentation;
    id /* block */  _locateCompletion;
    SUCoreMobileAsset * _maDocumentationControl;
    int  _operation;
    int  _pendingMobileAssetRequests;
    MAAsset * _primaryUpdateAsset;
    NSObject<OS_os_transaction> * _scanCancelTransaction;
    NSObject<OS_os_transaction> * _scanCheckTransaction;
    NSObject<OS_os_transaction> * _scanCollectTransaction;
    SUCoreFSM * _scanFSM;
    NSObject<OS_os_transaction> * _scanLocateTransaction;
    SUCorePolicy * _scanPolicy;
    NSString * _scanUUID;
    NSObject<OS_os_transaction> * _scanVerifyTransaction;
    MAAsset * _secondaryUpdateAsset;
    id /* block */  _verifyCompletion;
}

@property (nonatomic, retain) SUCoreDescriptor *activeDescriptor;
@property (nonatomic, copy) id /* block */ cancelCompletion;
@property (nonatomic) bool cancelingOperation;
@property (nonatomic, copy) id /* block */ checkCompletion;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientCompletionQueue;
@property (nonatomic, copy) id /* block */ collectCompletion;
@property (nonatomic) bool downloadDocumentation;
@property (nonatomic, copy) id /* block */ locateCompletion;
@property (nonatomic, retain) SUCoreMobileAsset *maDocumentationControl;
@property (nonatomic) int operation;
@property (nonatomic) int pendingMobileAssetRequests;
@property (nonatomic, retain) MAAsset *primaryUpdateAsset;
@property (nonatomic, retain) NSObject<OS_os_transaction> *scanCancelTransaction;
@property (nonatomic, retain) NSObject<OS_os_transaction> *scanCheckTransaction;
@property (nonatomic, retain) NSObject<OS_os_transaction> *scanCollectTransaction;
@property (nonatomic, readonly) SUCoreFSM *scanFSM;
@property (nonatomic, retain) NSObject<OS_os_transaction> *scanLocateTransaction;
@property (nonatomic, retain) SUCorePolicy *scanPolicy;
@property (nonatomic, readonly) NSString *scanUUID;
@property (nonatomic, retain) NSObject<OS_os_transaction> *scanVerifyTransaction;
@property (nonatomic, retain) MAAsset *secondaryUpdateAsset;
@property (nonatomic, copy) id /* block */ verifyCompletion;

+ (id)_generateStateTable;

- (void).cxx_destruct;
- (void)_cancelCompleteWithError:(id)arg1;
- (void)_cancelEndComplete:(id /* block */)arg1 error:(id)arg2 clearingTransaction:(bool)arg3;
- (void)_checkEndComplete:(id /* block */)arg1 scanPolicy:(id)arg2 primary:(id)arg3 secondary:(id)arg4 error:(id)arg5 clearingTransaction:(bool)arg6;
- (void)_clearCurrentOperation;
- (void)_collectEndComplete:(id /* block */)arg1 scanPolicy:(id)arg2 active:(id)arg3 error:(id)arg4 clearingTransaction:(bool)arg5;
- (long long)_decrementMobileAssetPending;
- (long long)_downloadCatalog:(id)arg1 withIdentifier:(id)arg2;
- (void)_filterDocQueryResults:(id)arg1;
- (void)_filterSUQueryResults:(id)arg1;
- (void)_invalidOperation:(id)arg1;
- (void)_locateEndComplete:(id /* block */)arg1 scanPolicy:(id)arg2 primary:(id)arg3 secondary:(id)arg4 error:(id)arg5 clearingTransaction:(bool)arg6;
- (void)_operationCompleting:(id)arg1 error:(id)arg2 clearingTransaction:(bool)arg3;
- (id)_operationName;
- (void)_scanCompleteFoundPrimary:(id)arg1 foundSecondary:(id)arg2 clearingOperation:(bool)arg3 error:(id)arg4;
- (id)_simDescriptorAttributes;
- (void)_trackScanBegin:(id)arg1;
- (void)_trackScanBegin:(id)arg1 withIdentifier:(id)arg2;
- (void)_trackScanEnd:(id)arg1 withIdentifier:(id)arg2 withResult:(long long)arg3 withError:(id)arg4;
- (void)_trackScanEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3;
- (void)_verifyEndComplete:(id /* block */)arg1 scanPolicy:(id)arg2 active:(id)arg3 primary:(id)arg4 secondary:(id)arg5 error:(id)arg6 clearingTransaction:(bool)arg7;
- (long long)a_SimCatalogDownloadSuccess:(id*)arg1;
- (long long)a_SimQueryMetadataUpdateAvailable:(id*)arg1;
- (long long)actionAfterAvailCancelSuccess:(id)arg1 error:(id*)arg2;
- (long long)actionAfterFailCancelSuccess:(id)arg1 error:(id*)arg2;
- (long long)actionAfterFailCheckCancelDone:(id)arg1 error:(id*)arg2;
- (long long)actionCancelDone:(id*)arg1;
- (long long)actionCancelRemoveFailed:(id)arg1 error:(id*)arg2;
- (long long)actionCancelSuccess:(id*)arg1;
- (long long)actionCheckCancelDone:(id*)arg1;
- (long long)actionDownloadDocAsset:(id*)arg1;
- (long long)actionDownloadDocCatalog:(id*)arg1;
- (long long)actionDownloadSUCatalog:(id*)arg1;
- (long long)actionQueryDocMetadata:(id*)arg1;
- (long long)actionQuerySUMetadata:(id*)arg1;
- (long long)actionRemoveDocAsset:(id*)arg1;
- (long long)actionScanCompleteNoUpdate:(id*)arg1;
- (long long)actionScanFailed:(id)arg1 error:(id*)arg2;
- (long long)actionScanSuccess:(id)arg1 error:(id*)arg2;
- (long long)actionUnknownAction:(id)arg1 error:(id*)arg2;
- (id)activeDescriptor;
- (id /* block */)cancelCompletion;
- (void)cancelCurrentScan:(id /* block */)arg1;
- (bool)cancelingOperation;
- (id /* block */)checkCompletion;
- (void)checkForAvailableUpdateWithPolicy:(id)arg1 completion:(id /* block */)arg2;
- (id)clientCompletionQueue;
- (id /* block */)collectCompletion;
- (void)collectDocumentationMetadataWithPolicy:(id)arg1 descriptor:(id)arg2 downloadDocumentation:(bool)arg3 completion:(id /* block */)arg4;
- (id)description;
- (bool)downloadDocumentation;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 withCompletionQueue:(id)arg2;
- (void)locateAvailableUpdateWithPolicy:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)locateCompletion;
- (id)maDocumentationControl;
- (int)operation;
- (int)pendingMobileAssetRequests;
- (long long)performAction:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 error:(id*)arg6;
- (id)primaryUpdateAsset;
- (id)scanCancelTransaction;
- (id)scanCheckTransaction;
- (id)scanCollectTransaction;
- (id)scanFSM;
- (id)scanLocateTransaction;
- (id)scanPolicy;
- (id)scanUUID;
- (id)scanVerifyTransaction;
- (id)secondaryUpdateAsset;
- (void)setActiveDescriptor:(id)arg1;
- (void)setCancelCompletion:(id /* block */)arg1;
- (void)setCancelingOperation:(bool)arg1;
- (void)setCheckCompletion:(id /* block */)arg1;
- (void)setCollectCompletion:(id /* block */)arg1;
- (void)setDownloadDocumentation:(bool)arg1;
- (void)setLocateCompletion:(id /* block */)arg1;
- (void)setMaDocumentationControl:(id)arg1;
- (void)setOperation:(int)arg1;
- (void)setPendingMobileAssetRequests:(int)arg1;
- (void)setPrimaryUpdateAsset:(id)arg1;
- (void)setScanCancelTransaction:(id)arg1;
- (void)setScanCheckTransaction:(id)arg1;
- (void)setScanCollectTransaction:(id)arg1;
- (void)setScanLocateTransaction:(id)arg1;
- (void)setScanPolicy:(id)arg1;
- (void)setScanVerifyTransaction:(id)arg1;
- (void)setSecondaryUpdateAsset:(id)arg1;
- (void)setVerifyCompletion:(id /* block */)arg1;
- (id /* block */)verifyCompletion;
- (void)verifyLatestAvailableWithPolicy:(id)arg1 descriptor:(id)arg2 completion:(id /* block */)arg3;

@end
