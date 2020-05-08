/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebCameraReaderViewController : UIViewController <AMSUIWebPagePresenter, CRCameraReaderDelegate> {
    CRCameraReader * _cameraController;
    AMSUIWebClientContext * _context;
    AMSUIWebCameraReaderInfoView * _infoView;
    AMSUIWebCameraReaderPageModel * _model;
    NSDictionary * _output;
}

@property (nonatomic, retain) CRCameraReader *cameraController;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIWebCameraReaderInfoView *infoView;
@property (nonatomic, retain) AMSUIWebCameraReaderPageModel *model;
@property (nonatomic, retain) NSDictionary *output;
@property (readonly) Class superclass;

+ (bool)cameraSupported;

- (void).cxx_destruct;
- (void)_applyAppearance;
- (void)_handleCameraOutput:(id)arg1 error:(id)arg2;
- (void)_layoutPageForCreditCard;
- (id)_outputForCreditCardReaderObjects:(id)arg1;
- (void)_setupPageForCreditCard;
- (void)applyPageModel:(id)arg1;
- (id)cameraController;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (id)context;
- (id)infoView;
- (id)initWithContext:(id)arg1;
- (void)loadView;
- (id)model;
- (id)output;
- (void)setCameraController:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setInfoView:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
