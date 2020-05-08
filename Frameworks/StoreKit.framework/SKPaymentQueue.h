/* Generated by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentQueue : NSObject {
    id  _internal;
}

@property (nonatomic) <SKPaymentQueueDelegate> *delegate;
@property (nonatomic, readonly) SKPaymentQueueClient *paymentQueueClient;
@property (nonatomic, readonly) SKStorefront *storefront;
@property (nonatomic, readonly) NSArray *transactions;

+ (bool)canMakePayments;
+ (id)defaultQueue;

- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (id)_applyDownloadChangeset:(id)arg1;
- (void)_checkForMessages;
- (void)_completeRestoreWithMessage:(id)arg1;
- (id)_copyDownloadIDsForDownloads:(id)arg1;
- (id)_copyRemovalsFromUnmergedIndexSet:(id)arg1;
- (id)_copyTransactionsFromXPCArray:(id)arg1;
- (void)_daemonLaunchedNotification;
- (void)_establishConnection;
- (void)_establishConnectionIfNeeded;
- (void)_finishRefreshPayments;
- (void)_handleConnectionDisconnect;
- (void)_handleMessage:(id)arg1 connection:(id)arg2;
- (id)_initSKPaymentQueue;
- (void)_notifyObserversAboutChanges:(id)arg1 sendUpdatedDownloads:(bool)arg2;
- (void)_notifyObserversAboutDownloadChanges:(id)arg1;
- (void)_notifyObserversAboutPurchaseIntentsForProducts:(id)arg1;
- (void)_notifyObserversAboutRemovals:(id)arg1;
- (void)_notifyObserversRestoreTransactionsFailedWithError:(id)arg1;
- (void)_notifyObserversRestoreTransactionsFinished;
- (void)_processTransaction:(id)arg1;
- (void)_processUpdates:(id)arg1 trimUnmatched:(bool)arg2 sendUpdatedDownloads:(bool)arg3;
- (void)_refreshPaymentsWithPolicy:(long long)arg1;
- (void)_removeLocalTransaction:(id)arg1;
- (void)_removeNilTransactionObservers;
- (void)_removePaymentsForMessage:(id)arg1;
- (void)_sendAppEnteredForegroundMessage;
- (void)_sendAppStorePendingPaymentsRequestForMessage:(id)arg1;
- (void)_sendCommand:(long long)arg1 forDownloads:(id)arg2;
- (void)_setTransactionsWithReply:(id)arg1;
- (bool)_shouldContinueTransactionForMessage:(id)arg1;
- (void)_updateDownloadsForMessage:(id)arg1;
- (void)_updatePaymentsForMessage:(id)arg1;
- (void)addPayment:(id)arg1;
- (void)addTransactionObserver:(id)arg1;
- (void)askToShowMessageWithReplyBlock:(id /* block */)arg1;
- (void)cancelDownloads:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)downloadAdded:(id)arg1;
- (void)downloadRemoved:(id)arg1;
- (void)downloadStatusChanged:(id)arg1;
- (void)finishTransaction:(id)arg1;
- (void)forceSandboxForBundleIdentifier:(id)arg1 untilDate:(id)arg2;
- (id)init;
- (id)initWithPaymentQueueClient:(id)arg1;
- (void)pauseDownloads:(id)arg1;
- (id)paymentQueueClient;
- (void)removeTransactionObserver:(id)arg1;
- (void)removedTransactions:(id)arg1;
- (void)restoreCompletedTransactions;
- (void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1;
- (void)resumeDownloads:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)shouldContinueTransaction:(id)arg1 withNewStorefront:(id)arg2 replyBlock:(id /* block */)arg3;
- (void)showPriceConsentIfNeeded;
- (void)startDownloads:(id)arg1;
- (id)storefront;
- (void)storefrontChanged:(id)arg1;
- (id)transactions;
- (void)updatedTransactions:(id)arg1;

@end
