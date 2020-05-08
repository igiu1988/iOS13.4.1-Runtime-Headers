/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

@interface WFHomeAccessoryActionView : WFActionCustomView <WFActionEventObserver> {
    UIStackView * _iconsStackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIStackView *iconsStackView;
@property (readonly) Class superclass;

+ (double)preferredHeightForAction:(id)arg1;

- (void).cxx_destruct;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)iconsStackView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAction:(id)arg1;
- (void)setIconsStackView:(id)arg1;
- (void)updateIcons;

@end
