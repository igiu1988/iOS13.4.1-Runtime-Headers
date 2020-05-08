/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBUndoStyling : NSObject {
    UIColor * _HUDShadowColor;
    UIColor * _HUDbackgroundColor;
    long long  _appearance;
    UIBlurEffect * _backgroundBlurEffect;
    UIVibrancyEffect * _backgroundVibrancyEffect;
    UIColor * _buttonGlyphColorDisabled;
    UIColor * _buttonGlyphColorEnabled;
    UIColor * _buttonGlyphColorPressed;
    bool  _cutCopyPasteIconOnly;
    UIColor * _elementBackgroundColor;
    UIColor * _elementCoverColor;
    bool  _isRTL;
    bool  _undoRedoIconOnly;
}

@property (nonatomic, retain) UIColor *HUDShadowColor;
@property (nonatomic, retain) UIColor *HUDbackgroundColor;
@property (nonatomic) long long appearance;
@property (nonatomic, retain) UIBlurEffect *backgroundBlurEffect;
@property (nonatomic, retain) UIVibrancyEffect *backgroundVibrancyEffect;
@property (nonatomic, retain) UIColor *buttonGlyphColorDisabled;
@property (nonatomic, retain) UIColor *buttonGlyphColorEnabled;
@property (nonatomic, retain) UIColor *buttonGlyphColorPressed;
@property (nonatomic) bool cutCopyPasteIconOnly;
@property (nonatomic, retain) UIColor *elementBackgroundColor;
@property (nonatomic, retain) UIColor *elementCoverColor;
@property (nonatomic) bool isRTL;
@property (nonatomic) bool undoRedoIconOnly;

- (void).cxx_destruct;
- (id)HUDShadowColor;
- (id)HUDbackgroundColor;
- (long long)appearance;
- (id)backgroundBlurEffect;
- (id)backgroundVibrancyEffect;
- (id)buttonGlyphColorDisabled;
- (id)buttonGlyphColorEnabled;
- (id)buttonGlyphColorPressed;
- (void)createDynamicColors;
- (bool)cutCopyPasteIconOnly;
- (id)elementBackgroundColor;
- (id)elementCoverColor;
- (id)initWithKeyboardAppearance:(long long)arg1 isRTL:(bool)arg2;
- (bool)isRTL;
- (void)setAppearance:(long long)arg1;
- (void)setBackgroundBlurEffect:(id)arg1;
- (void)setBackgroundVibrancyEffect:(id)arg1;
- (void)setButtonGlyphColorDisabled:(id)arg1;
- (void)setButtonGlyphColorEnabled:(id)arg1;
- (void)setButtonGlyphColorPressed:(id)arg1;
- (void)setCutCopyPasteIconOnly:(bool)arg1;
- (void)setElementBackgroundColor:(id)arg1;
- (void)setElementCoverColor:(id)arg1;
- (void)setHUDShadowColor:(id)arg1;
- (void)setHUDbackgroundColor:(id)arg1;
- (void)setIsRTL:(bool)arg1;
- (void)setUndoRedoIconOnly:(bool)arg1;
- (bool)undoRedoIconOnly;
- (id)vibrancyEffectForBlur:(id)arg1;

@end
