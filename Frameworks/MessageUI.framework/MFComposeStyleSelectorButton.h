/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeStyleSelectorButton : UIButton {
    long long  _styleType;
}

@property (nonatomic, readonly) long long styleType;

+ (id)buttonWithStyleType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;

- (void)_commonInit;
- (id)_imageForTextStyleType:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelected:(bool)arg1;
- (long long)styleType;

@end
