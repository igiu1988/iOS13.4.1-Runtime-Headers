/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITabBarSwappableImageView : UIImageView {
    UIImage * _alternate;
    UIImage * _landscapeAlternate;
    UIImage * _landscapeValue;
    bool  _showAlternate;
    bool  _showLandscape;
    UIImage * _value;
}

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_selectedCompactImage;
- (id)_selectedImage;
- (id)_unselectedCompactImage;
- (id)_unselectedImage;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)didMoveToWindow;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2 landscapeImage:(id)arg3 landscapeAlternateImage:(id)arg4;
- (void)setAlternateImage:(id)arg1;
- (void)setCurrentImage;
- (void)setImage:(id)arg1;
- (void)setLandscape:(bool)arg1;
- (void)showAlternateImage:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
