/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardInstallmentPlanStatusItem : NSObject <PKDashboardItem> {
    PKAccount * _account;
    PKInstallmentPlan * _installmentPlan;
    PKPaymentPass * _paymentPass;
}

@property (nonatomic, retain) PKAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKInstallmentPlan *installmentPlan;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)account;
- (id)installmentPlan;
- (id)paymentPass;
- (void)setAccount:(id)arg1;
- (void)setInstallmentPlan:(id)arg1;
- (void)setPaymentPass:(id)arg1;

@end
