/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

@interface CACLabeledBadgeView : UIView {
    CACAdaptiveBackdropView * __backdropView;
    UILabel * __labelView;
    long long  _arrowOrientation;
    UIImageView * _badgeMaskImageView;
    long long  _badgePresentation;
    bool  _isContrastBackdrop;
    NSString * _label;
}

@property (nonatomic, retain) CACAdaptiveBackdropView *_backdropView;
@property (nonatomic, retain) UILabel *_labelView;
@property (readonly) long long arrowOrientation;
@property (nonatomic, retain) UIImageView *badgeMaskImageView;
@property (readonly) long long badgePresentation;
@property (nonatomic) bool isContrastBackdrop;
@property (readonly) NSString *label;

+ (id)_badgeFont;
+ (id)_badgeFontTextStyle;
+ (id)_badgeImageWithNoArrow;
+ (id)_badgeImageWithNoArrowAndBorder;
+ (id)_badgeImageWithRightArrow;
+ (id)_badgeImageWithTinyRightArrow;
+ (double)_heightForBadgeWithText;
+ (id)_maskImageForBadgePresentation:(long long)arg1 arrowOrientation:(long long)arg2;
+ (double)badgeFontSize;
+ (id)imageBundle;
+ (struct CGSize { double x1; double x2; })sizeOfBadgeGivenNumberOfDisplayedDigits:(long long)arg1 arrowOrientation:(long long)arg2 badgePresentation:(long long)arg3;

- (void).cxx_destruct;
- (id)_backdropView;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 label:(id)arg2 arrowOrientation:(long long)arg3 badgePresentation:(long long)arg4 isContrasted:(bool)arg5;
- (id)_labelView;
- (void)_setUpSubviews;
- (long long)arrowOrientation;
- (id)badgeMaskImageView;
- (long long)badgePresentation;
- (id)contrastedCopy;
- (id)copy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 label:(id)arg2 arrowOrientation:(long long)arg3 badgePresentation:(long long)arg4;
- (bool)isContrastBackdrop;
- (id)label;
- (void)layoutSubviews;
- (void)setBadgeMaskImageView:(id)arg1;
- (void)setIsContrastBackdrop:(bool)arg1;
- (void)set_backdropView:(id)arg1;
- (void)set_labelView:(id)arg1;

@end