/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

@interface ENLoadingViewController : UIViewController {
    UIActivityIndicatorView * _activityIndicator;
    <ENLoadingViewControllerDelegate> * _delegate;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) <ENLoadingViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)activityIndicator;
- (void)cancel:(id)arg1;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setActivityIndicator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end