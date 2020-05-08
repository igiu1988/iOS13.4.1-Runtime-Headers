/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKCreditBalanceDetailsViewController : UICollectionViewController <PKAccountServiceObserver> {
    PKAccount * _account;
    PKCreditAccountSummary * _accountSummary;
    PKDashboardBalanceSummaryItem * _availableCreditSummaryItem;
    PKDashboardBalanceItem * _balanceItem;
    PKDashboardBalancePresenter * _balancePresenter;
    PKBalanceSummary * _balanceSummary;
    PKDashboardBalanceSummaryItemPresenter * _balanceSummaryItemPresenter;
    NSArray * _buttonItems;
    PKDashboardBalanceSummaryItem * _creditLimitSummaryItem;
    PKDashboardBalanceSummaryItem * _creditsSummaryItem;
    PKDashboardBalanceSummaryItem * _currentSpendingSummaryItem;
    PKDashboardBalanceSummaryItem * _dailyCashSummaryItem;
    NSDateFormatter * _dateFormatter;
    PKDashboardBalanceSummaryItem * _exportTransactionDataSummaryItem;
    unsigned long long  _feature;
    PKBalanceSummaryFetcher * _fetcher;
    PKDashboardBalanceSummaryItem * _installmentBalanceSummaryItem;
    PKDashboardBalanceSummaryItem * _interestSummaryItem;
    PKDashboardBalanceSummaryItem * _lastStatementSummaryItem;
    NSDateFormatter * _monthYearFormatter;
    unsigned long long  _numberOfStaticSections;
    NSString * _pageTagForAnalyticsReporting;
    PKPaymentPass * _paymentPass;
    PKDashboardBalanceSummaryItem * _paymentsAndCreditsSummaryItem;
    PKDashboardBalanceSummaryItem * _paymentsSummaryItem;
    PKCreditAccountStatement * _previousStatement;
    PKDashboardFooterTextView * _sampleFooterView;
    PKDashboardTitleHeaderView * _sampleHeaderView;
    NSArray * _sectionMap;
    NSArray * _sortedYears;
    PKCreditAccountStatement * _statement;
    PKDashboardBalanceSummaryItem * _statementDownloadSummaryItem;
    NSArray * _statements;
    NSDictionary * _statementsByYear;
    long long  _style;
    NSArray * _totalBalanceItems;
    PKDashboardBalanceSummaryItem * _totalBalanceSummaryItem;
    PKDashboardTransactionFetcher * _transactionFetcher;
    NSArray * _usageItems;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureFooterView:(id)arg1 inSectionIndex:(unsigned long long)arg2;
- (void)_configureHeaderView:(id)arg1 inSectionIndex:(unsigned long long)arg2;
- (id)_createSummaryItemOfType:(unsigned long long)arg1;
- (bool)_hasFooterForSectionIndex:(unsigned long long)arg1;
- (bool)_hasHeaderForSectionIndex:(unsigned long long)arg1;
- (void)_reloadData;
- (void)_reportEventForPassIfNecessary:(id)arg1;
- (unsigned long long)_sectionForIndex:(unsigned long long)arg1;
- (bool)_shouldInset;
- (void)_sortStatementsForPresentation;
- (id)_summaryItemForIndexPath:(id)arg1;
- (void)_updateStatements;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithStyle:(long long)arg1 paymentPass:(id)arg2 webService:(id)arg3 account:(id)arg4 statement:(id)arg5 previousStatements:(id)arg6;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showStatement:(id)arg1 style:(long long)arg2;
- (void)statementsChangedForAccountIdentifier:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
