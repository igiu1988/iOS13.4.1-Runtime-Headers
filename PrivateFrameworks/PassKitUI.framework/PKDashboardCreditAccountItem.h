/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardCreditAccountItem : NSObject <PKDashboardItem> {
    PKAccount * _account;
    NSArray * _months;
    NSArray * _mostRecentTransactions;
    PKPaymentPass * _pass;
    PKSpendingSummary * _summary;
    PKSpendingSummaryFetcher * _summaryFetcher;
    unsigned long long  _type;
    NSArray * _upcomingScheduledPayments;
    NSArray * _weeks;
}

@property (nonatomic, readonly) PKAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *months;
@property (nonatomic, retain) NSArray *mostRecentTransactions;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, retain) PKSpendingSummary *summary;
@property (nonatomic, retain) PKSpendingSummaryFetcher *summaryFetcher;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, retain) NSArray *upcomingScheduledPayments;
@property (nonatomic, retain) NSArray *weeks;

- (void).cxx_destruct;
- (id)account;
- (id)initWithAccount:(id)arg1 pass:(id)arg2 type:(unsigned long long)arg3;
- (id)months;
- (id)mostRecentTransactions;
- (id)pass;
- (void)setMonths:(id)arg1;
- (void)setMostRecentTransactions:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setSummaryFetcher:(id)arg1;
- (void)setUpcomingScheduledPayments:(id)arg1;
- (void)setWeeks:(id)arg1;
- (id)summary;
- (id)summaryFetcher;
- (unsigned long long)type;
- (id)upcomingScheduledPayments;
- (id)weeks;

@end
