/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIActionPromise : VUIAction {
    IKAppContext * _appContext;
    NSDictionary * _contextDataDictionary;
}

@property (nonatomic) IKAppContext *appContext;
@property (nonatomic, readonly) NSDictionary *contextDataDictionary;

- (void).cxx_destruct;
- (id)appContext;
- (id)contextDataDictionary;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAppContext:(id)arg1;

@end
