/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMActivityViewController : UIActivityViewController <PMActivityItemProviderDelegate, PMAirplayActivityDelegate, UIActivityViewControllerAirDropDelegate, UIActivityViewControllerObjectManipulationDelegate> {
    PMAirplayActivity * _airplayActivity;
    unsigned long long  _backgroundTask;
    <PMActivityViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    UIViewController * _presenter;
}

@property (nonatomic, retain) PMAirplayActivity *airplayActivity;
@property (nonatomic) unsigned long long backgroundTask;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PMActivityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_customizationGroupsForActivityViewController:(id)arg1;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)arg1;
- (void)activityViewControllerWillStartAirdropTransfer:(id)arg1;
- (id)airplayActivity;
- (unsigned long long)backgroundTask;
- (void)cancel;
- (id)delegate;
- (id)doneButton;
- (void)exportFailed;
- (void)exportWillBegin;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 barButtonItem:(id)arg3 parentViewController:(id)arg4;
- (id)presenter;
- (void)setAirplayActivity:(id)arg1;
- (void)setBackgroundTask:(unsigned long long)arg1;
- (void)setCompletionWithItemsHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setPresenter:(id)arg1;
- (void)updateVisibleShareActions;
- (void)viewWillLayoutSubviews;

@end
