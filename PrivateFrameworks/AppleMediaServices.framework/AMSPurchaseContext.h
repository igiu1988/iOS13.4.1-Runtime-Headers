/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSPurchaseContext : NSObject {
    ACAccount * _account;
    bool  _addKBSync;
    NSMutableDictionary * _additionalHeaders;
    AMSBuyParams * _buyParams;
    AMSProcessInfo * _clientInfo;
    <AMSPurchaseResponseProtocol> * _delegate;
    NSDictionary * _dialog;
    NSString * _dialogId;
    bool  _hasRetriedOriginalOwnerAccount;
    NSString * _logUUID;
    AMSPurchase * _purchase;
    long long  _retryCount;
    bool  _serverBatchCanceled;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) bool addKBSync;
@property (nonatomic, retain) NSMutableDictionary *additionalHeaders;
@property (nonatomic, retain) AMSBuyParams *buyParams;
@property (nonatomic, readonly) AMSProcessInfo *clientInfo;
@property (nonatomic, retain) <AMSPurchaseResponseProtocol> *delegate;
@property (nonatomic, retain) NSDictionary *dialog;
@property (nonatomic, retain) NSString *dialogId;
@property (nonatomic) bool hasRetriedOriginalOwnerAccount;
@property (nonatomic, readonly) NSString *logUUID;
@property (nonatomic, readonly) AMSPurchase *purchase;
@property (nonatomic) long long retryCount;
@property (nonatomic) bool serverBatchCanceled;

- (void).cxx_destruct;
- (id)_purchaseStringForType:(long long)arg1;
- (id)account;
- (bool)addKBSync;
- (id)additionalHeaders;
- (id)buyParams;
- (id)clientInfo;
- (id)delegate;
- (id)description;
- (id)dialog;
- (id)dialogId;
- (bool)hasRetriedOriginalOwnerAccount;
- (id)initWithPurchase:(id)arg1;
- (id)logUUID;
- (id)purchase;
- (long long)retryCount;
- (bool)serverBatchCanceled;
- (void)setAccount:(id)arg1;
- (void)setAddKBSync:(bool)arg1;
- (void)setAdditionalHeaders:(id)arg1;
- (void)setBuyParams:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDialog:(id)arg1;
- (void)setDialogId:(id)arg1;
- (void)setHasRetriedOriginalOwnerAccount:(bool)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setServerBatchCanceled:(bool)arg1;

@end