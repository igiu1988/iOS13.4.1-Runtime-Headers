/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAppleIDAuthenticationCommandLineContext : AKAppleIDAuthenticationContext <AKAppleIDServerAuthenticationUIProvider> {
    NSNumber * _secondFactorCode;
    long long  _verificationType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *secondFactorCode;
@property (readonly) Class superclass;
@property (nonatomic) long long verificationType;

- (void).cxx_destruct;
- (void)_beginDataTaskWithRequest:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)_capabilityForUIDisplay;
- (void)_collectAndPostSecondFactorCodeForTrustedNumber:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleServerUISMSSecondFactorWithDictionary:(id)arg1 statusCode:(long long)arg2 configuration:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleServerUISecondFactorWithObjectModel:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (id)_jsonDictionaryForData:(id)arg1 error:(id)arg2;
- (id)_jsonPostbackDictionaryForCode:(id)arg1 numberId:(id)arg2;
- (id)_mutableJSONRequestForPath:(id)arg1;
- (id)_mutableJSONRequestForURL:(id)arg1;
- (id)_parseHeaderTitleForPasscodeView:(id)arg1;
- (void)_presentServerUISecondFactorWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)_promptForVerificationCodeWithSecureEntry:(bool)arg1;
- (id)_promptUserForSelectionWithTrustedNumbers:(id)arg1;
- (void)_verifySecondFactorCodeWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)_xmlUIRequestForURL:(id)arg1 withPostbackDictionary:(id)arg2;
- (id)_xmlUIRequestForURL:(id)arg1 withServerInfo:(id)arg2;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)arg1;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithVerificationType:(long long)arg1;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)arg1;
- (void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)secondFactorCode;
- (void)setSecondFactorCode:(id)arg1;
- (void)setVerificationType:(long long)arg1;
- (long long)verificationType;

@end
