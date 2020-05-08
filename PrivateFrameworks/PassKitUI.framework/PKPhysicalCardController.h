/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPhysicalCardController : NSObject <PKSetupFlowControllerProtocol> {
    PKAccount * _account;
    PKAccountService * _accountService;
    <PKSetupFlowControllerProtocol> * _parentFlowController;
    PKPaymentPass * _paymentPass;
    PKPhysicalCard * _primaryPhysicalCard;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    PKPhysicalCard * _unactivatedPhysicalCard;
    bool  _updatingOrderController;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly) bool canActivatePhysicalCard;
@property (nonatomic, readonly) bool canReplacePhysicalCard;
@property (nonatomic, readonly) bool canRequestPhysicalCard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPrimaryPhysicalCard;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PKSetupFlowControllerProtocol> *parentFlowController;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;
@property (nonatomic, readonly) bool physicalCardBlocked;
@property (nonatomic, readonly) PKPhysicalCard *primaryPhysicalCard;
@property (nonatomic, readonly) bool primaryPhysicalCardEnabled;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPhysicalCard *unactivatedPhysicalCard;

+ (bool)deviceSupportsContactlessActivation;

- (void).cxx_destruct;
- (void)_updatePhysicalCards;
- (id)account;
- (bool)canActivatePhysicalCard;
- (bool)canReplacePhysicalCard;
- (bool)canRequestPhysicalCard;
- (void)dealloc;
- (bool)hasPrimaryPhysicalCard;
- (id)initWithAccountService:(id)arg1 paymentPass:(id)arg2 account:(id)arg3;
- (void)nextViewControllerWithCompletion:(id /* block */)arg1;
- (void)orderFlowViewControllerForReason:(unsigned long long)arg1 content:(long long)arg2 completion:(id /* block */)arg3;
- (id)parentFlowController;
- (id)paymentPass;
- (bool)physicalCardBlocked;
- (id)primaryPhysicalCard;
- (bool)primaryPhysicalCardEnabled;
- (void)setParentFlowController:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (id)unactivatedPhysicalCard;
- (void)updateWithAccount:(id)arg1;

@end
