/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIConfirmationDialogTemplateController : UIViewController {
    NSTimer * _dismissTimer;
    bool  _setTimer;
}

@property (nonatomic, readonly) NSTimer *dismissTimer;
@property (nonatomic, readonly) VUIConfirmationDialogTemplateView *templateView;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_dismissConfirmation:(id)arg1;
- (void)_setupTimer;
- (void)dealloc;
- (id)dismissTimer;
- (void)loadView;
- (id)templateView;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
