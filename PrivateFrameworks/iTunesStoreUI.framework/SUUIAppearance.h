/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUUIAppearance : NSObject <NSCopying> {
    SUControlAppearance * _backButtonAppearance;
    SUControlAppearance * _confirmationButtonAppearance;
    SUControlAppearance * _destructiveButtonAppearance;
    SUControlAppearance * _exitStoreButtonAppearance;
    SUControlAppearance * _forwardButtonAppearance;
    bool  _isDefaultAppearance;
    NSMutableDictionary * _navigationBarBackgroundImages;
    NSDictionary * _navigationBarTitleTextAttributes;
    NSMutableDictionary * _navigationButtonAppearance;
    NSMutableDictionary * _segmentedControlAppearance;
    SUTabBarAppearance * _tabBarAppearance;
    SUToolbarAppearance * _toolbarAppearance;
}

@property (nonatomic, copy) SUControlAppearance *backButtonAppearance;
@property (nonatomic, copy) SUControlAppearance *confirmationButtonAppearance;
@property (nonatomic, copy) SUControlAppearance *destructiveButtonAppearance;
@property (nonatomic, copy) SUControlAppearance *exitStoreButtonAppearance;
@property (nonatomic, copy) SUControlAppearance *forwardButtonAppearance;
@property (nonatomic, copy) NSDictionary *navigationBarTitleTextAttributes;
@property (nonatomic, copy) SUTabBarAppearance *tabBarAppearance;
@property (nonatomic, copy) SUToolbarAppearance *toolbarAppearance;

+ (id)_defaultBackButtonAppearance;
+ (id)_defaultButtonAppearance;
+ (id)_defaultConfirmationButtonAppearance;
+ (id)_defaultDestructiveButtonAppearance;
+ (id)_defaultDoneButtonAppearance;
+ (id)_defaultForwardButtonAppearance;
+ (id)_defaultShadowWithColor:(id)arg1 offset:(struct CGSize { double x1; double x2; })arg2;
+ (id)_defaultTabBarAppearance;
+ (id)defaultAppearance;

- (id)_copySegmentedControlKeyWithStyle:(long long)arg1 tintStyle:(long long)arg2;
- (void)_styleBackBarButtonItem:(id)arg1;
- (id)backButtonAppearance;
- (id)confirmationButtonAppearance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)destructiveButtonAppearance;
- (id)exitStoreButtonAppearance;
- (id)forwardButtonAppearance;
- (id)navigationBarBackgroundImageForBarMetrics:(long long)arg1;
- (id)navigationBarTitleTextAttributes;
- (id)navigationButtonAppearanceForStyle:(long long)arg1;
- (id)segmentedControlAppearanceForStyle:(long long)arg1 tintStyle:(long long)arg2;
- (void)setBackButtonAppearance:(id)arg1;
- (void)setConfirmationButtonAppearance:(id)arg1;
- (void)setDestructiveButtonAppearance:(id)arg1;
- (void)setExitStoreButtonAppearance:(id)arg1;
- (void)setForwardButtonAppearance:(id)arg1;
- (void)setNavigationBarBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
- (void)setNavigationBarTitleTextAttributes:(id)arg1;
- (void)setNavigationButtonAppearance:(id)arg1 forStyle:(long long)arg2;
- (void)setSegmentedControlAppearance:(id)arg1 forStyle:(long long)arg2 tintStyle:(long long)arg3;
- (void)setTabBarAppearance:(id)arg1;
- (void)setToolbarAppearance:(id)arg1;
- (void)styleBarButtonItem:(id)arg1;
- (void)styleConfirmationButtonItem:(id)arg1;
- (void)styleDestructiveButton:(id)arg1;
- (void)styleExitStoreButtonItem:(id)arg1;
- (void)styleForwardButtonItem:(id)arg1;
- (void)styleNavigationBar:(id)arg1;
- (void)styleSegmentedControl:(id)arg1 tintStyle:(long long)arg2;
- (void)styleTabBar:(id)arg1;
- (void)styleTabBarItem:(id)arg1;
- (void)styleToolbar:(id)arg1;
- (id)tabBarAppearance;
- (id)toolbarAppearance;

@end
