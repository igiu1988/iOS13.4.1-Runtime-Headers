/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIUpsellOfferTransactionView : UIView {
    NSArray * _buttons;
    VUILabel * _disclaimerLabel;
    VUIUpsellOfferTransactionViewLayout * _layout;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic, retain) VUILabel *disclaimerLabel;
@property (nonatomic, retain) VUIUpsellOfferTransactionViewLayout *layout;
@property (nonatomic, retain) IKViewElement *viewElement;

+ (id)transactionViewFromElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithSize:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (id)buttons;
- (id)disclaimerLabel;
- (id)layout;
- (void)layoutSubviews;
- (void)setButtons:(id)arg1;
- (void)setDisclaimerLabel:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)viewElement;

@end
