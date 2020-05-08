/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICProgressViewController : UIViewController {
    UIActivityIndicatorView * _activityIndicator;
    ICCircularProgressView * _circularProgressView;
    UILabel * _label;
    NSProgress * _observedProgress;
    <ICProgressViewControllerDelegate> * _progressDelegate;
    bool  _showsCancel;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) ICCircularProgressView *circularProgressView;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSProgress *observedProgress;
@property (nonatomic) <ICProgressViewControllerDelegate> *progressDelegate;
@property (nonatomic) bool showsCancel;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)activityIndicator;
- (id)circularProgressView;
- (id)initWithDelegate:(id)arg1;
- (id)label;
- (id)observedProgress;
- (id)progressDelegate;
- (void)setActivityIndicator:(id)arg1;
- (void)setCircularProgressView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setObservedProgress:(id)arg1;
- (void)setProgressDelegate:(id)arg1;
- (void)setShowsCancel:(bool)arg1;
- (bool)showsCancel;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
