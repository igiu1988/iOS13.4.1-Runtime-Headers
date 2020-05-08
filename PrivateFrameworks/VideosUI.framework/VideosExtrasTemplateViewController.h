/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosExtrasTemplateViewController : VideosExtrasElementViewController <IKAppDocumentDelegate> {
    VideosExtrasContext * _context;
    IKViewElement * _displayedTemplate;
    IKAppDocument * _document;
    NSDictionary * _options;
}

@property (nonatomic, readonly) VideosExtrasContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IKAppDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool showsPlaceholder;
@property (readonly) Class superclass;

+ (id)templateViewControllerWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_showPlaceholder;
- (void)_startBackgroundAudio;
- (void)configureBackgroundWithElements:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)document;
- (void)documentDidFail:(id)arg1 withError:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (bool)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1;
- (bool)showsPlaceholder;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
