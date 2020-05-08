/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentActionTransferToBankCell : UITableViewCell {
    UIImageView * _checkmarkImageView;
    UILabel * _detailTextLabel;
    UILabel * _feeLabel;
    NSString * _feeText;
    bool  _isRTL;
    bool  _showCheckmark;
    NSString * _subtitleText;
    UILabel * _textLabel;
    NSString * _titleText;
}

@property (nonatomic, copy) NSString *feeText;
@property (nonatomic) bool showCheckmark;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (id)feeText;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setFeeText:(id)arg1;
- (void)setShowCheckmark:(bool)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (bool)showCheckmark;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleText;
- (id)titleText;

@end
