/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAlertUtilities : NSObject {
    <CKAlertUtilitiesProtocol> * _delegate;
}

@property (nonatomic) <CKAlertUtilitiesProtocol> *delegate;

+ (struct __CFDictionary { }*)_copyCTPhoneNumberSetting;
+ (struct __CFString { }*)_grabCTSIMStatus;
+ (long long)missingAlertTypeToNotify;

- (void).cxx_destruct;
- (void)_didFinishCheckingMissingCarrierSetting;
- (void)_displayMissingInformationAlert:(long long)arg1;
- (void)_showNetworkPrefs:(long long)arg1;
- (void)checkMissingCarrierSetting;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
