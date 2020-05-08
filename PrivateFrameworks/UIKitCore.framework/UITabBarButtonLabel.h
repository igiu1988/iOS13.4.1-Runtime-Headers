/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITabBarButtonLabel : UILabel {
    Class  _appearanceGuideClass;
    _UITabBarItemAppearanceStorage * _appearanceStorage;
    double  _boundsWidth;
    bool  _hasSeenIdiom;
    bool  _isHighlighted;
    bool  _isSelected;
    UITabBarButton * _tabBarButton;
    UIColor * _unselectedTintColor;
}

@property (setter=_setAppearanceGuideClass:, nonatomic, retain) Class _appearanceGuideClass;
@property (nonatomic) UITabBarButton *tabBarButton;
@property (nonatomic, retain) UIColor *unselectedTintColor;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (double)_fontPointSizeForIdiom:(long long)arg1;

- (void).cxx_destruct;
- (void)_UIAppearance_setBadgeColor:(id)arg1;
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (Class)_appearanceGuideClass;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (id)_fontForIdiom:(long long)arg1;
- (id)_fontForIdiom:(long long)arg1 forTabBarDisplayStyle:(long long)arg2;
- (long long)_idiomForFontGivenIdiom:(long long)arg1;
- (void)_legacyApperance_updateTextColorsForState;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setBadgeColor:(id)arg1;
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)_shouldCeilSizeToViewScale;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_updateForFontChangeWithIdiom:(long long)arg1;
- (void)_updateLabelsVibrancy;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTabBarDisplayStyle:(long long)arg1;
- (void)resizeToFitWidth:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTabBarButton:(id)arg1;
- (void)setUnselectedTintColor:(id)arg1;
- (id)tabBarButton;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unselectedTintColor;
- (void)updateTextColorsForState;

@end
