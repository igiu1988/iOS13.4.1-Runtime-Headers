/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCClickInteractionPresentedControl : UIControl <PLContentSizeCategoryAdjusting, _UICursorInteractionDelegate> {
    bool  _adjustsFontForContentSizeCategory;
    MTMaterialView * _backgroundMaterialView;
    long long  _materialRecipe;
    UITraitCollection * _overrideTraitCollection;
    NCClickInteractionPresentedView * _presentedView;
    NSString * _title;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (getter=_backgroundMaterialView, nonatomic, readonly) MTMaterialView *backgroundMaterialView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_materialRecipe, nonatomic, readonly) long long materialRecipe;
@property (nonatomic, retain) UITraitCollection *overrideTraitCollection;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (getter=_presentedView, nonatomic, readonly) NCClickInteractionPresentedView *presentedView;
@property (readonly) Class superclass;
@property (getter=_title, nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)_backgroundMaterialView;
- (void)_configureContentViewIfNecessaryWithTitle:(id)arg1;
- (void)_configureMaterialViewsIfNecessary;
- (long long)_materialRecipe;
- (id)_newMaterialViewWithRecipe:(long long)arg1 configuration:(long long)arg2;
- (id)_presentedView;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (id)_title;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint { double x1; double x2; })arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (id)initWithTitle:(id)arg1 materialRecipe:(long long)arg2;
- (id)overrideTraitCollection;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOverrideTraitCollection:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end