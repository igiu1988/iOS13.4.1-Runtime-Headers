/* Generated by EzioChiu
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface _INUIServiceViewController : UIViewController <_INUIRemoteViewControllerServing> {
    unsigned long long  _currentContext;
    INInteraction * _currentInteraction;
    UIViewController<INUIHostedViewControlling> * _hostedViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (bool)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_constrainedSizeForDesiredSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_errorHandlingRemoteViewControllerProxy;
- (void)addChildViewController:(id)arg1;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)desiresInteractivity:(id /* block */)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)queryRepresentedPropertiesWithCompletion:(id /* block */)arg1;
- (void)viewWasCancelled;
- (void)viewWillLayoutSubviews;

@end
