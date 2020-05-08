/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIConfirmationCardTemplateController : UIViewController {
    NSTimer * _dismissTimer;
    bool  _setTimer;
    IKViewElement * _viewElement;
}

@property (nonatomic, readonly) VUIConfirmationCardView *cardView;
@property (nonatomic, readonly) NSTimer *dismissTimer;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_dismissConfirmation:(id)arg1;
- (void)_setupTimer;
- (id)cardView;
- (void)dealloc;
- (id)dismissTimer;
- (void)loadView;
- (void)setViewElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (id)viewElement;
- (void)viewWillAppear:(bool)arg1;

@end
