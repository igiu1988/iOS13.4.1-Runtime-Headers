/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEnterCurrencyAmountPassView : UIView {
    PKEnterValueNewBalanceView * _balanceView;
    <PKEnterCurrencyAmountPassViewDelegate> * _delegate;
    PKEnterCurrencyAmountView * _enterCurrencyAmountView;
    bool  _loadingSnapshot;
    PKPass * _pass;
    UIImageView * _passView;
}

@property (nonatomic, readonly) PKEnterValueNewBalanceView *balanceView;
@property (nonatomic) <PKEnterCurrencyAmountPassViewDelegate> *delegate;
@property (nonatomic, readonly) PKEnterCurrencyAmountView *enterCurrencyAmountView;
@property (nonatomic, retain) PKPass *pass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_passViewSize;
- (double)_topPadding;
- (id)balanceView;
- (id)delegate;
- (id)enterCurrencyAmountView;
- (id)initWithCurrenyAmount:(id)arg1;
- (id)initWithCurrenyAmount:(id)arg1 pass:(id)arg2;
- (void)layoutSubviews;
- (id)pass;
- (void)setDelegate:(id)arg1;
- (void)setPass:(id)arg1;
- (void)shakePassView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
