/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFinanceResponse : NSObject {
    AMSFinanceAuthenticateResponse * _authenticateResponse;
    long long  _dialogKind;
    AMSFinanceDialogResponse * _dialogResponse;
    AMSFinancePaymentSheetResponse * _paymentSheetResponse;
    NSDictionary * _responseDictionary;
    AMSURLTaskInfo * _taskInfo;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) AMSFinanceAuthenticateResponse *authenticateResponse;
@property (nonatomic, readonly) long long dialogKind;
@property (nonatomic, readonly) AMSFinanceDialogResponse *dialogResponse;
@property (nonatomic, readonly) AMSFinancePaymentSheetResponse *paymentSheetResponse;
@property (nonatomic, readonly) NSArray *pingURLs;
@property (nonatomic, retain) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSError *serverError;
@property (nonatomic, readonly) bool supportedProtocolVersion;
@property (nonatomic, retain) AMSURLTaskInfo *taskInfo;
@property (nonatomic, readonly) NSURL *versionMismatchURL;

- (void).cxx_destruct;
- (id)_valueForProtocolKey:(id)arg1;
- (id)account;
- (id)actions;
- (id)authenticateResponse;
- (long long)dialogKind;
- (id)dialogResponse;
- (id)initWithTaskInfo:(id)arg1 decodedObject:(id)arg2;
- (id)paymentSheetResponse;
- (id)pingURLs;
- (id)responseDictionary;
- (id)serverError;
- (void)setResponseDictionary:(id)arg1;
- (void)setTaskInfo:(id)arg1;
- (bool)supportedProtocolVersion;
- (id)taskInfo;
- (id)versionMismatchURL;

@end
