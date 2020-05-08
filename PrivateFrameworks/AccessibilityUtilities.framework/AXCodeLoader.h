/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXCodeLoader : NSObject <AXImageMonitorObserver> {
    NSMutableSet * _accessibilityCodeItems;
    id /* block */  _beginTrackingCompletion;
    NSObject<OS_dispatch_queue> * _beginTrackingCompletionQueue;
    NSString * _currentPlatformKey;
    id /* block */  _didLoadAccessibilityCodeItemBlock;
    NSObject<OS_dispatch_source> * _dyldImageActivityCoalesceTimer;
    <AXImageMonitor> * _imageMonitor;
    bool  _initialLoadHasFinished;
    bool  _initialLoadHasOccurred;
    NSObject<OS_dispatch_source> * _loadAccessibilityCodeItemsSource;
    id /* block */  _loadEventDidOccurBlock;
    id /* block */  _loadEventWillOccurBlock;
    long long  _monitoredLoadTriggeringImageCountSinceLastLoad;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldAutoloadAccessibilityCodeItems;
    id /* block */  _shouldLoadAccessibilityCodeItemBlock;
    NSMutableSet * _trackedCodeItems;
    long long  _trackingMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didLoadAccessibilityCodeItemBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInitialLoadFinished;
@property (nonatomic, readonly) bool isTrackingLoadedCodeItems;
@property (nonatomic, copy) id /* block */ loadEventDidOccurBlock;
@property (nonatomic, copy) id /* block */ loadEventWillOccurBlock;
@property (nonatomic) bool shouldAutoloadAccessibilityCodeItems;
@property (nonatomic, copy) id /* block */ shouldLoadAccessibilityCodeItemBlock;
@property (readonly) Class superclass;
@property (nonatomic) long long trackingMode;

+ (id)defaultLoader;

- (void).cxx_destruct;
- (id)_accessibilityBundleMapURLs;
- (id)_accessibilityCodeItemMatchingName:(id)arg1 type:(long long)arg2 path:(id)arg3;
- (void)_addTrackedCodeItem:(id)arg1;
- (void)_associateAccessibilityCodeItemWithLoadedCodeItem:(id)arg1;
- (void)_associateAccessibilityCodeItemsWithAllTrackedCodeItems;
- (void)_cancelDyldImageActivityTimer;
- (void)_consumeBeginTrackingCompletionHandlerIfNeeded;
- (id)_createAccessibilityCodeItemsFromBundleMapURLs:(id)arg1;
- (void)_loadAccessibilityCodeItems;
- (id)_platformKeyForPlatform:(unsigned int)arg1;
- (id)_queue_loadedCodeItemsUsingTrackedItemsIfAvailable:(bool)arg1;
- (void)_reconcileTrackedCodeItemsWithAccessibilityCodeItemDefinitions;
- (void)_scheduleDyldImageActivityTimerWithDelay:(double)arg1;
- (id)_stateDescForItem:(id)arg1;
- (void)_updateAccessibilityCodeItemDefinitionsIfNeeded;
- (id /* block */)_validDidLoadAccessibilityCodeItemBlock;
- (id /* block */)_validLoadEventDidOccurBlock;
- (id /* block */)_validLoadEventWillOccurBlock;
- (id /* block */)_validShouldLoadAccessibilityCodeItemBlock;
- (id)accessibilityCodeItemDefinitions;
- (void)beginTrackingLoadedCodeItemsWithMode:(long long)arg1 completion:(id /* block */)arg2 targetQueue:(id)arg3;
- (id)codeItemForBundle:(id)arg1;
- (id /* block */)didLoadAccessibilityCodeItemBlock;
- (void)endTrackingLoadedCodeItemsWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
- (void)imageMonitor:(id)arg1 didAddImage:(id)arg2;
- (id)init;
- (id)initWithImageMonitor:(id)arg1;
- (bool)isInitialLoadFinished;
- (bool)isTrackingLoadedCodeItems;
- (void)iterateInitialImageListForImageMonitor:(id)arg1;
- (id /* block */)loadEventDidOccurBlock;
- (id /* block */)loadEventWillOccurBlock;
- (id)loadedCodeItemPathsUsingTrackedItemsIfAvailable:(bool)arg1;
- (id)loadedCodeItemsUsingTrackedItemsIfAvailable:(bool)arg1;
- (void)logLoaderState;
- (void)prewarmAccessibilityCodeItemDefinitionsWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
- (void)queryAccessibilityBundleIsLoadedWithName:(id)arg1 completion:(id /* block */)arg2;
- (id)recomputedCodeItemsForAllFrameworks;
- (id)recomputedCodeItemsForLoadedAccessibilityBundles;
- (id)rogueAccessibilityCodeItems;
- (void)setAccessibilityCodeItemsNeedLoaded;
- (void)setDidLoadAccessibilityCodeItemBlock:(id /* block */)arg1;
- (void)setLoadEventDidOccurBlock:(id /* block */)arg1;
- (void)setLoadEventWillOccurBlock:(id /* block */)arg1;
- (void)setShouldAutoloadAccessibilityCodeItems:(bool)arg1;
- (void)setShouldLoadAccessibilityCodeItemBlock:(id /* block */)arg1;
- (void)setTrackingMode:(long long)arg1;
- (bool)shouldAutoloadAccessibilityCodeItems;
- (id /* block */)shouldLoadAccessibilityCodeItemBlock;
- (id)trackedCodeItems;
- (long long)trackingMode;

@end
