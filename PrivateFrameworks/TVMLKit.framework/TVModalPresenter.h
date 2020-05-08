/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVModalPresenter : NSObject <UIPopoverPresentationControllerDelegate, UIViewControllerTransitioningDelegate> {
    NSHashTable * __presentationControllers;
    _UIProgressiveBlurPresentationAnimator * _dismissingAnimator;
    _TVPlaybackFadeAnimator * _playbackAnimator;
    _UIProgressiveBlurPresentationAnimator * _presentingAnimator;
}

@property (nonatomic, readonly) NSHashTable *_presentationControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *presentedViewControllers;
@property (readonly) Class superclass;

+ (id)_viewControllerForResponder:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_presentationControllers;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissAllViewControllersWithAnimation:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)dismissViewControllerWithResponder:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)presentViewController:(id)arg1 forResponder:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentedViewControllers;

@end
