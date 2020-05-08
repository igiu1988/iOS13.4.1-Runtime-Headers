/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSiriLanguageOptionItemProvider : HFItemProvider {
    HFAccessorySettingSiriLanguageAdapter * _adapter;
    NSSet * _items;
    unsigned long long  _optionStyle;
}

@property (nonatomic, readonly) HFAccessorySettingSiriLanguageAdapter *adapter;
@property (nonatomic, retain) NSSet *items;
@property (nonatomic, readonly) unsigned long long optionStyle;

- (void).cxx_destruct;
- (id)adapter;
- (id)initWithAdapter:(id)arg1 optionStyle:(unsigned long long)arg2;
- (id)items;
- (unsigned long long)optionStyle;
- (id)reloadItems;
- (void)setItems:(id)arg1;

@end
