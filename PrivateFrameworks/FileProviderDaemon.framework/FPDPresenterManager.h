/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDPresenterManager : NSObject {
    FPDExtensionManager * _extensionManager;
    FPDFilePresenter * _frontmostPresenter;
    NSMutableDictionary * _presenters;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSDictionary *presenters;

- (void).cxx_destruct;
- (void)addPresenter:(id)arg1 itemID:(id)arg2 urlHint:(id)arg3 pid:(int)arg4;
- (id)initWithExtensionManager:(id)arg1;
- (void)noteItemBecameFrontmost:(id)arg1 inWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)presenters;
- (id)presentersForDomain:(id)arg1;
- (void)removePresenter:(id)arg1;
- (void)signalPresentersForItemID:(id)arg1;

@end
