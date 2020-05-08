/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebPageViewController : UIViewController <AMSUIWebPagePresenter> {
    NSURL * _URL;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    AMSUIWebClientContext * _context;
    AMSUIWebBrowserPageModel * _model;
    bool  _replacing;
    AMSUIWebView * _webView;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIWebBrowserPageModel *model;
@property (nonatomic) bool replacing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AMSUIWebView *webView;

- (void).cxx_destruct;
- (id)URL;
- (void)_applyAppearance;
- (id)_downloadHTMLForRequest:(id)arg1;
- (void)applyPageModel:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)context;
- (id)initWithContext:(id)arg1 dataProvider:(id)arg2;
- (id)loadRequest:(id)arg1;
- (void)loadView;
- (id)model;
- (bool)replacing;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setModel:(id)arg1;
- (void)setReplacing:(bool)arg1;
- (void)setURL:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webView;

@end
