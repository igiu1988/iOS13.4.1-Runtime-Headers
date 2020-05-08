/* Generated by EzioChiu
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCaptionBarStyle : NSObject {
    LPCaptionBarAccessoryStyle * _leadingAccessory;
    LPImageViewStyle * _leadingIcon;
    LPPointUnit * _minimumWidth;
    LPImageViewStyle * _placeholderIcon;
    LPMusicPlayButtonStyle * _playButton;
    LPPadding * _playButtonPadding;
    LPVerticalTextStackViewStyle * _textStack;
    LPCaptionBarAccessoryStyle * _trailingAccessory;
    LPImageViewStyle * _trailingIcon;
}

@property (nonatomic, readonly) LPCaptionBarAccessoryStyle *leadingAccessory;
@property (nonatomic, readonly) LPImageViewStyle *leadingIcon;
@property (nonatomic, retain) LPPointUnit *minimumWidth;
@property (nonatomic, readonly) LPImageViewStyle *placeholderIcon;
@property (nonatomic, readonly) LPMusicPlayButtonStyle *playButton;
@property (nonatomic, readonly, retain) LPPadding *playButtonPadding;
@property (nonatomic, readonly) LPVerticalTextStackViewStyle *textStack;
@property (nonatomic, readonly) LPCaptionBarAccessoryStyle *trailingAccessory;
@property (nonatomic, readonly) LPImageViewStyle *trailingIcon;

- (void).cxx_destruct;
- (id)initWithPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2;
- (id)leadingAccessory;
- (id)leadingIcon;
- (id)leftAccessory;
- (id)leftIcon;
- (id)minimumWidth;
- (id)placeholderIcon;
- (id)playButton;
- (id)playButtonPadding;
- (id)rightAccessory;
- (id)rightIcon;
- (void)setMinimumWidth:(id)arg1;
- (id)textStack;
- (id)trailingAccessory;
- (id)trailingIcon;

@end
