/* Generated by EzioChiu.
 */

@protocol PKPaymentServiceDelegate <NSObject>

@optional

- (void)didRecieveCredentialInvitation:(PKAppletSubcredentialSharingInvitation *)arg1;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(NSString *)arg1;
- (void)featureApplicationAdded:(PKFeatureApplication *)arg1;
- (void)featureApplicationChanged:(PKFeatureApplication *)arg1;
- (void)featureApplicationRemoved:(PKFeatureApplication *)arg1;
- (void)passWithUniqueIdentifier:(NSString *)arg1 didReceiveValueAddedServiceTransaction:(PKValueAddedServiceTransaction *)arg2;
- (void)paymentDeviceDidEnterFieldWithProperties:(PKFieldProperties *)arg1;
- (void)paymentDeviceDidExitField;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveBalanceUpdate:(NSSet *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveMessage:(PKPaymentMessage *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateCredential:(PKAppletSubcredential *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithTransitPassProperties:(PKTransitPassProperties *)arg2;
- (void)paymentServiceReceivedInterruption;
- (void)transactionWithIdentifier:(NSString *)arg1 didDownloadTransactionReceipt:(PKTransactionReceipt *)arg2;

@end
