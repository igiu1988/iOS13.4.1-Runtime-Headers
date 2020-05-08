/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXViewControllerPresentingManager : NSObject <SWViewControllerPresentingManager, SXViewControllerPresenting> {
    UIViewController * _presentingViewController;
}

@property (nonatomic, readonly) UIViewController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controller;
- (void)popOrDismissViewControllerAnimated:(bool)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;

@end
