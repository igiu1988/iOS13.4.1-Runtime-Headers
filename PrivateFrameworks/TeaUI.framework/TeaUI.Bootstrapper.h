/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
 */

@interface TeaUI.Bootstrapper : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  deferredPromise;
    void deferringGroup;
    void mainViewControllerFactory;
    void onboardingViewControllerFactory;
    void onboardingViewDismissalAnimator;
}

- (void).cxx_destruct;
- (void)afterBootstrapOnQueue:(id)arg1 runBootstrapCallbackBlock:(id /* block */)arg2;
- (id)init;
- (void)startBootstrappingWithWindow:(id)arg1 shouldOnboard:(bool)arg2;

@end
