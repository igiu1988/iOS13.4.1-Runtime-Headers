/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMoreNavigationController : UINavigationController {
    UIMoreListController * _moreListController;
    UINavigationController * _originalNavigationController;
    UIViewController * _originalRootViewController;
}

@property (nonatomic) bool allowsCustomizing;
@property (nonatomic) UIViewController *displayedViewController;
@property (nonatomic, readonly) UIViewController *moreListController;
@property (nonatomic, retain) NSArray *moreViewControllers;
@property (nonatomic) bool moreViewControllersChanged;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (Class)_moreListControllerClass;

- (void).cxx_destruct;
- (void)_ensureChildrenHaveParentViewController;
- (id)_preparedViewController:(id)arg1;
- (void)_redisplayMoreTableView;
- (void)_restoreOriginalNavigationController;
- (id)_stateRestorationParentForChildViewController:(id)arg1 index:(unsigned long long*)arg2;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (bool)allowsCustomizing;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (id)displayedViewController;
- (id)init;
- (id)moreListController;
- (id)moreViewControllers;
- (bool)moreViewControllersChanged;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)restoreOriginalNavigationControllerIfNecessary:(id)arg1;
- (void)setAllowsCustomizing:(bool)arg1;
- (void)setDisplayedViewController:(id)arg1;
- (void)setMoreViewControllers:(id)arg1;
- (void)setMoreViewControllersChanged:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;

@end
