/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKTransactionHistoryViewController : PKDashboardViewController <CNAvatarViewDelegate> {
    PKContinuousButton * _detailsButton;
    PKSpendingSummaryFooterView * _footer;
    PKSpendingSummaryFooterContainer * _footerContainer;
    double  _headerHeight;
    unsigned long long  _historyType;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _lastContentInset;
    NSObject<OS_dispatch_source> * _loadingMapsTimer;
    bool  _loadingMapsViewController;
    double  _merchantHeaderAnimationProgress;
    PKContinuousButton * _messageButton;
    PKNavigationController * _navigationController;
    PKPaymentPass * _paymentPass;
    PKContinuousButton * _phoneButton;
    UIImageView * _titleIconImageView;
    NSString * _titleText;
    PKAnimatedNavigationBarTitleView * _titleView;
    PKPaymentTransaction * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long historyType;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentTransaction *transaction;

- (void).cxx_destruct;
- (id)_barButtonItems;
- (void)_handleInfoButtonTapped:(id)arg1;
- (void)_handleMessageButtonTapped:(id)arg1;
- (void)_handlePhoneButtonTapped:(id)arg1;
- (void)_showContactDetailsViewController;
- (void)_showMapsDetailsViewController;
- (void)_updateNavigationBarIconForNavigationBarAppeared:(bool)arg1;
- (void)_updateNavigationBarIconWithLogoURL:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)contentIsLoaded;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (unsigned long long)historyType;
- (id)initWithFetcher:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 featuredTransaction:(id)arg4 selectedTransactions:(id)arg5 transactionHistory:(id)arg6;
- (id)initWithInstallmentPlan:(id)arg1 paymentPass:(id)arg2 account:(id)arg3;
- (id)initWithTransactionGroup:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 transactionHistory:(id)arg4;
- (id)paymentPass;
- (struct { bool x1; long long x2; })pkui_navigationStatusBarStyleDescriptor;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)transaction;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
