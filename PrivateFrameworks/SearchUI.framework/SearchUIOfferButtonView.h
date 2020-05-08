/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIOfferButtonView : UIButton {
    UIButton * _button;
    TLKEmbossedLabel * _label;
    NSString * _offerTitle;
    NSString * _symbolImageName;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic, retain) UIButton *button;
@property (nonatomic, retain) TLKEmbossedLabel *label;
@property (nonatomic, retain) NSString *offerTitle;
@property (nonatomic, retain) NSString *symbolImageName;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (bool)adjustsFontSizeToFitWidth;
- (id)button;
- (void)didMoveToWindow;
- (id)init;
- (id)label;
- (void)layoutSubviews;
- (id)offerTitle;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setButton:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setOfferTitle:(id)arg1;
- (void)setSymbolImageName:(id)arg1;
- (id)symbolImageName;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)updateSelectionState:(bool)arg1;

@end
