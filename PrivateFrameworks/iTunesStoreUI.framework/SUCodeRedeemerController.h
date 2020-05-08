/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUCodeRedeemerController : UIViewController <CRCodeRedeemerControllerDelegate> {
    bool  _cameraflipDirection;
    CRCodeRedeemerController * _codeRedeemerController;
    <SUCodeRedeemerControllerDelegate> * _delegate;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) bool cameraflipDirection;
@property (nonatomic, retain) CRCodeRedeemerController *codeRedeemerController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUCodeRedeemerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;

+ (bool)cameraSupported;

- (void).cxx_destruct;
- (void)_disableBlur;
- (void)_enableBlur;
- (void)_setChildViewController:(id)arg1;
- (void)_setup;
- (void)_setupCodeRedeemerController;
- (void)_setupFlipVisualEffectView;
- (bool)cameraflipDirection;
- (void)cancel;
- (id)codeRedeemerController;
- (void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2;
- (void)codeRedeemerControllerDidCancel:(id)arg1;
- (id)delegate;
- (id)init;
- (void)recognitionError;
- (void)recognitionSuccess;
- (void)setCameraflipDirection:(bool)arg1;
- (void)setCodeRedeemerController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startSession;
- (void)toggleCameraWithCompletion:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)visualEffectView;

@end
