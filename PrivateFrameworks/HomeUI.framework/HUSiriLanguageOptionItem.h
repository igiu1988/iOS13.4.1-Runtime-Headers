/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSiriLanguageOptionItem : HFItem {
    HFAccessorySettingSiriLanguageAdapter * _adapter;
    HFSiriLanguageOption * _languageOption;
    unsigned long long  _optionStyle;
}

@property (nonatomic, readonly) HFAccessorySettingSiriLanguageAdapter *adapter;
@property (nonatomic, retain) HFSiriLanguageOption *languageOption;
@property (nonatomic, readonly) unsigned long long optionStyle;

+ (id)selectionKeyForLanguageOption:(id)arg1 withOptionStyle:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)adapter;
- (id)initWithStyle:(unsigned long long)arg1 adapter:(id)arg2 languageOption:(id)arg3;
- (id)languageOption;
- (unsigned long long)optionStyle;
- (void)setLanguageOption:(id)arg1;

@end
