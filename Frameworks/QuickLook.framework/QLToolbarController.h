/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLToolbarController : NSObject {
    NSLayoutConstraint * _accessoryContainerHeightConstraint;
    UIView * _accessoryView;
    double  _accessoryViewAlpha;
    UIView * _accessoryViewContainer;
    bool  _accessoryViewHidden;
    double  _accessoryViewHiddenProgress;
    UIColor * _barTintColor;
    UIView * _clippingExtensionContainer;
    NSLayoutConstraint * _clippingExtensionContainerBottomConstraint;
    NSLayoutConstraint * _clippingExtensionContainerHeightConstraint;
    UIToolbar * _customToolbar;
    _UIToolbarConfiguration * _customToolbarConfiguration;
    double  _derivedToolbarExtensionHeight;
    bool  _hidden;
    double  _hiddenProgress;
    UIToolbar * _originalToolbar;
    double  _originalToolbarAlpha;
    _UIToolbarConfiguration * _originalToolbarConfiguration;
    bool  _originalToolbarHidden;
    double  _preferredAccesoryViewHeight;
    UIView * _preferredParentViewForSafeAreaInset;
    UIView * _preferredSuperview;
    double  _toolbarAlpha;
    NSLayoutConstraint * _toolbarBottomConstraint;
    NSLayoutConstraint * _toolbarHeightConstraint;
}

@property (nonatomic) UIView *accessoryView;
@property (nonatomic) double accessoryViewAlpha;
@property (getter=isAccessoryViewHidden, nonatomic) bool accessoryViewHidden;
@property (nonatomic) double accessoryViewHiddenProgress;
@property (nonatomic, retain) UIColor *barTintColor;
@property (readonly) UIToolbar *customToolbar;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) double hiddenProgress;
@property (nonatomic) UIToolbar *originalToolbar;
@property (nonatomic) double originalToolbarAlpha;
@property (getter=isOriginalToolbarHidden, nonatomic) bool originalToolbarHidden;
@property (nonatomic) double preferredAccesoryViewHeight;
@property (nonatomic, readonly) UIView *preferredParentViewForSafeAreaInset;
@property (nonatomic, readonly) UIView *preferredSuperview;
@property (nonatomic) double toolbarAlpha;

- (void).cxx_destruct;
- (double)_computeClippingExtensionContainerBottomConstraint;
- (double)_computeClippingExtensionContainerHeightForCurrentHiddenProgress;
- (void)_embedAccessoryView;
- (void)_layoutAccessoryView:(id)arg1;
- (double)_originalToolbarHeightIncludingSafeAreaBottomInset:(bool)arg1;
- (double)_toolbarExtensionHeight;
- (double)_toolbarSafeAreaInsetBottom;
- (double)_totalHeight;
- (bool)_tryToSetUp:(bool)arg1;
- (id)accessoryView;
- (double)accessoryViewAlpha;
- (double)accessoryViewHiddenProgress;
- (id)barTintColor;
- (id)customToolbar;
- (double)hiddenProgress;
- (id)init;
- (bool)isAccessoryViewHidden;
- (bool)isHidden;
- (bool)isOriginalToolbarHidden;
- (id)originalToolbar;
- (double)originalToolbarAlpha;
- (double)preferredAccesoryViewHeight;
- (id)preferredParentViewForSafeAreaInset;
- (id)preferredSuperview;
- (void)restoreOriginalConfiguration;
- (void)restoreOriginalToolbar;
- (void)setAccessoryView:(id)arg1;
- (void)setAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)setAccessoryViewAlpha:(double)arg1;
- (void)setAccessoryViewHidden:(bool)arg1;
- (void)setAccessoryViewHiddenProgress:(double)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHiddenProgress:(double)arg1;
- (void)setOriginalToolbar:(id)arg1;
- (void)setOriginalToolbarAlpha:(double)arg1;
- (void)setOriginalToolbarHidden:(bool)arg1;
- (void)setPreferredAccesoryViewHeight:(double)arg1;
- (void)setPreferredSuperview:(id)arg1 preferredParentViewForSafeAreaInset:(id)arg2;
- (void)setToolbarAlpha:(double)arg1;
- (double)toolbarAlpha;
- (void)updateLayout;

@end
