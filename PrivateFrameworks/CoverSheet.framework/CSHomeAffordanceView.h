/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSHomeAffordanceView : UIView <SBSystemCursorInteractionDelegate, SBUIOptionalLegibility> {
    <CSCoverSheetContextProviding> * _coverSheetContext;
    MTLumaDodgePillView * _dynamicHomeAffordance;
    _UILegibilitySettings * _legibilitySettings;
    UIColor * _overrideColor;
    SBFHomeGrabberSettings * _settings;
    MTStaticColorPillView * _staticHomeAffordance;
    unsigned long long  _style;
    bool  _systemCursorInteractionEnabled;
}

@property (nonatomic, retain) <CSCoverSheetContextProviding> *coverSheetContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) MTLumaDodgePillView *dynamicHomeAffordance;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic) MTStaticColorPillView *staticHomeAffordance;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (getter=isSystemCursorInteractionEnabled, nonatomic) bool systemCursorInteractionEnabled;

- (void).cxx_destruct;
- (void)_createDynamicHomeAffordance;
- (void)_createStaticHomeAffordance;
- (void)_transitionToStyle:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_updateForLegibility;
- (id)_viewForStyle:(unsigned long long)arg1;
- (id)coverSheetContext;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cursorInteractionHitTestInsetsForView:(id)arg1;
- (id)dynamicHomeAffordance;
- (id)init;
- (bool)isSystemCursorInteractionEnabled;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)overrideColor;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setCoverSheetContext:(id)arg1;
- (void)setDynamicHomeAffordance:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setStaticHomeAffordance:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setSystemCursorInteractionEnabled:(bool)arg1;
- (bool)shouldBeginCursorInteractionAtLocation:(struct CGPoint { double x1; double x2; })arg1 forView:(id)arg2;
- (id)staticHomeAffordance;
- (unsigned long long)style;
- (id)styleForRegion:(id)arg1 forView:(id)arg2;
- (double)suggestedEdgeSpacing;
- (struct CGSize { double x1; double x2; })suggestedSizeForContentWidth:(double)arg1;

@end
