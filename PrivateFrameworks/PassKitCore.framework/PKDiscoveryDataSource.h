/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDiscoveryDataSource : NSObject <PKDiscoveryObserver> {
    NSArray * _articleLayouts;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _articleLayoutsLock;
    <PKDiscoveryDataSourceDelegate> * _delegate;
    PKDiscoveryService * _discoveryService;
    bool  _updatingArticles;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSArray *articleLayouts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKDiscoveryDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDismissActionToArticleLayouts:(id)arg1;
- (id)_articleLayoutForItemIdentifier:(id)arg1;
- (bool)_queue_updateArticleLayouts:(id)arg1;
- (void)_updateArticlesWithCompletion:(id /* block */)arg1;
- (id)articleLayouts;
- (id)cachedDiscoveryArticleLayoutForItemWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)discoveryService:(id)arg1 receivedUpdatedDiscoveryArticleLayouts:(id)arg2;
- (void)displayedDiscoveryItemWithIdentifier:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)setArticleLayouts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateArticleLayouts;

@end
