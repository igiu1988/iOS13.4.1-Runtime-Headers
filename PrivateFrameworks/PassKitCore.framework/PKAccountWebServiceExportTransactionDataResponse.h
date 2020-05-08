/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountWebServiceExportTransactionDataResponse : PKAccountWebServiceResponse {
    NSData * _transactionData;
    NSString * _transactionDataFilename;
    NSString * _transactionDataHash;
}

@property (nonatomic, readonly, copy) NSData *transactionData;
@property (nonatomic, readonly, copy) NSString *transactionDataFilename;
@property (nonatomic, readonly, copy) NSString *transactionDataHash;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)transactionData;
- (id)transactionDataFilename;
- (id)transactionDataHash;

@end
