/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBillPaymentSelectedSuggestedAmountData : NSObject <NSSecureCoding, PKRecordObject> {
    NSString * _statementIdentifier;
    unsigned long long  _suggestedAmountCategory;
    NSDecimalNumber * _transactionAmount;
    NSDate * _transactionDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *statementIdentifier;
@property (nonatomic) unsigned long long suggestedAmountCategory;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDecimalNumber *transactionAmount;
@property (nonatomic, copy) NSDate *transactionDate;

+ (id)recordNamePrefix;
+ (id)recordType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)initWithStatementIdentifier:(id)arg1 transactionDate:(id)arg2 transactionAmount:(id)arg3 suggestedAmountCategory:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (void)setStatementIdentifier:(id)arg1;
- (void)setSuggestedAmountCategory:(unsigned long long)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (id)statementIdentifier;
- (unsigned long long)suggestedAmountCategory;
- (id)transactionAmount;
- (id)transactionDate;

@end