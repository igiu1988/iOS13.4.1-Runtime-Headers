/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaControlsViewController : UIViewController <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    MPMediaControlsConfiguration * _configuration;
    <MPMediaControlsViewControllerDelegate> * _delegate;
    id /* block */  _didDismissHandler;
    MPMediaControls * _mediaControls;
}

@property (nonatomic, readonly) MPMediaControlsConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPMediaControlsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didDismissHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPMediaControls *mediaControls;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createMediaControlsIfNeeded;
- (void)_present;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)configuration;
- (id)delegate;
- (id /* block */)didDismissHandler;
- (void)dismiss;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)mediaControls;
- (bool)prefersStatusBarHidden;
- (void)prepareRemoteViewController;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDidDismissHandler:(id /* block */)arg1;
- (void)setMediaControls:(id)arg1;
- (void)setOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;
- (void)startPrewarming;
- (void)stopPrewarming;
- (double)transitionDuration:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
