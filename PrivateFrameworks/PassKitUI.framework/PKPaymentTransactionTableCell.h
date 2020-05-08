/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionTableCell : PKTableViewCell {
    NSString * _transactionIdentifier;
    PKPaymentTransactionView * _transactionView;
}

@property (nonatomic, retain) UIColor *primaryColor;
@property (nonatomic, retain) UIColor *secondaryColor;
@property (nonatomic, copy) NSString *transactionIdentifier;
@property (nonatomic, readonly) PKPaymentTransactionView *transactionView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)primaryColor;
- (id)secondaryColor;
- (void)setPrimaryColor:(id)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)transactionIdentifier;
- (id)transactionView;

@end
