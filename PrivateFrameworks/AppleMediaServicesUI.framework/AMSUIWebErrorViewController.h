/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebErrorViewController : UIViewController <AMSUIWebPagePresenter> {
    AMSUIWebClientContext * _context;
    _UIContentUnavailableView * _errorView;
    AMSUIWebErrorPageModel * _model;
}

@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIContentUnavailableView *errorView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIWebErrorPageModel *model;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyAppearance;
- (void)applyPageModel:(id)arg1;
- (id)context;
- (id)errorView;
- (id)initWithContext:(id)arg1;
- (void)loadView;
- (id)model;
- (void)setContext:(id)arg1;
- (void)setErrorView:(id)arg1;
- (void)setModel:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
