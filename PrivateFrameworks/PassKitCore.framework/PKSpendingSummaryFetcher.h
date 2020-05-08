/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSpendingSummaryFetcher : NSObject <PKAccountServiceObserver, PKPaymentDataProviderDelegate> {
    PKAccount * _account;
    NSMutableDictionary * _blockPendingRequests;
    NSCalendar * _currentCalendar;
    NSCache * _monthlySummaryItemsPerStartDate;
    NSDate * _newestTransactionDate;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSDate * _oldestTransactionDate;
    NSString * _passUniqueID;
    PKPaymentDefaultDataProvider * _paymentDataProvider;
    PKPaymentPass * _paymentPass;
    NSMutableOrderedSet * _pendingRequests;
    bool  _processingRequest;
    NSObject<OS_dispatch_queue> * _replyQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _requestsLock;
    NSArray * _statements;
    NSCache * _weeklySummaryItemsPerStartDate;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_sortedTransactions:(id)arg1 ascending:(bool)arg2;
+ (id)_spendingCategoriesFromTransactions:(id)arg1 currencyCode:(id)arg2;
+ (id)_spendingMerchantsFromTransaction:(id)arg1 currencyCode:(id)arg2;
+ (id)nextStartOfWeekFromDate:(id)arg1;
+ (id)previousStartOfMonthFromDate:(id)arg1;
+ (id)previousStartOfWeekFromDate:(id)arg1;
+ (id)summaryWithTransactions:(id)arg1 currency:(id)arg2 type:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 lastSummary:(id)arg6;

- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* block */)arg1;
- (id)_cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 withLastPeriodChange:(bool)arg3;
- (void)_processNextRequest;
- (void)_resetCurrentCalendar;
- (void)_spendingSummaryStartingWithDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 withLastPeriodChange:(bool)arg4 completion:(id /* block */)arg5;
- (void)_timeZoneChanged:(id)arg1;
- (void)availableSummaries:(id /* block */)arg1;
- (id)cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)registerObserver:(id)arg1;
- (void)spendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)statementsChangedForAccountIdentifier:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
