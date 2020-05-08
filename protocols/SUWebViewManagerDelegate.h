/* Generated by EzioChiu.
 */

@protocol SUWebViewManagerDelegate <NSObject>

@optional

- (SUScriptInterface *)newScriptInterfaceForWebViewManager:(SUWebViewManager *)arg1;
- (SUViewController *)viewControllerForWebViewManager:(SUWebViewManager *)arg1;
- (void)webViewManager:(SUWebViewManager *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 didReceivePrimaryResponse:(NSHTTPURLResponse *)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 didReceiveTitle:(NSString *)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 didRejectInvalidRequest:(NSURLRequest *)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 webDocumentViewDidSetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 willInjectScriptInterface:(SUScriptInterface *)arg2;
- (void)webViewManagerDidFinishLoad:(SUWebViewManager *)arg1;
- (void)webViewManagerDidStartLoad:(SUWebViewManager *)arg1;

@end
