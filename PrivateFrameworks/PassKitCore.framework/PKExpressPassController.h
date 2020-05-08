/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKExpressPassController : NSObject {
    long long  _apiVersion;
    bool  _hasSupportsExpressForAutomaticSelectionTechnologyTypeCheck;
    bool  _isForWatch;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    <PKPaymentDataProvider> * _paymentDataProvider;
    id  _presentingViewController;
}

@property (nonatomic) long long apiVersion;
@property (nonatomic) id presentingViewController;

- (void).cxx_destruct;
- (long long)apiVersion;
- (void)conflictingExpressPassesWithPassInformation:(id)arg1 completion:(id /* block */)arg2;
- (bool)deviceUsesAutomaticAuthorization;
- (void)disableExpressModeForPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)enableExpressModeWithPassInformation:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (id)expressModeSupportedForPass:(id)arg1;
- (id)expressModeUpgradeRequestForPass:(id)arg1;
- (id)expressState;
- (id)initWithPaymentDataProvider:(id)arg1 passLibraryDataProvider:(id)arg2 isForWatch:(bool)arg3;
- (bool)isExpressModeEnabledForPass:(id)arg1;
- (id)presentingViewController;
- (void)setApiVersion:(long long)arg1;
- (void)setPresentingViewController:(id)arg1;
- (bool)supportsLowPowerExpressMode;
- (void)upgradeExpressModeForPass:(id)arg1 withCredential:(id)arg2 completion:(id /* block */)arg3;
- (id)validExpressModeUpgradeRequestForPass:(id)arg1;

@end
