/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLMailAccountMigrator : NSObject <MFAccountValidatorDelegate, WLDataclassMigrating> {
    ACAccountStore * _accountStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contentType;

- (void).cxx_destruct;
- (void)_importGoogleAccountWithUsername:(id)arg1 completion:(id /* block */)arg2;
- (bool)accountBased;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(bool)arg3;
- (id)contentType;
- (id)dataType;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (void)importDidEnd;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (id)importWillBegin;
- (bool)storeRecordDataInDatabase;

@end
