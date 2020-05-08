/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUActivityItemSourceController : PXObservable <PUCMMActivityItemSourceDelegate, PXActivityItemSourceController, PXCMMActionPerformerDelegate, PXChangeObserver> {
    NSString * _activeActivityType;
    NSArray * _activeItemSources;
    PUActivityViewController * _activityViewController;
    NSMutableOrderedSet * _assetItemSources;
    NSMutableOrderedSet * _assetItems;
    unsigned long long  _cloudSharedAssetCount;
    PUCMMActivityItemSource * _cmmActivityItemSource;
    <PUActivityItemSourceControllerDelegate> * _delegate;
    NSMutableArray * _errors;
    NSObject<OS_dispatch_queue> * _externalIsolation;
    bool  _momentSharePublishAttempted;
    unsigned long long  _numSourcesDownloading;
    unsigned long long  _preferredPreparationType;
    id /* block */  _progressHandler;
    NSURL * _publishedURL;
    bool  _shouldExcludeLivenessInAllItemSources;
    bool  _shouldExcludeLocationInAllItemSourcess;
    bool  _shouldShareAsOriginals;
    bool  _shouldUseMomentShareLinkInMessagesIfThresholdMet;
    unsigned long long  _state;
    _Atomic int  _taskId;
}

@property (retain) NSString *activeActivityType;
@property (copy) NSArray *activeItemSources;
@property (nonatomic, readonly, copy) NSArray *activityItems;
@property (nonatomic) PUActivityViewController *activityViewController;
@property (nonatomic, readonly, copy) NSOrderedSet *assetItemSources;
@property (nonatomic, copy) NSOrderedSet *assetItems;
@property (nonatomic, readonly, copy) NSOrderedSet *assets;
@property (nonatomic, readonly) PUCMMActivityItemSource *cmmActivityItemSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUActivityItemSourceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableArray *errors;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalIsolation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool itemSourcesSupportMomentShareLinkCreation;
@property (nonatomic, readonly) bool momentSharePublishAttempted;
@property (nonatomic) unsigned long long numSourcesDownloading;
@property (nonatomic) unsigned long long preferredPreparationType;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (setter=_setPublishedURL:, nonatomic, retain) NSURL *publishedURL;
@property (nonatomic) bool shouldExcludeLivenessInAllItemSources;
@property (nonatomic) bool shouldExcludeLocationInAllItemSourcess;
@property (nonatomic) bool shouldShareAsOriginals;
@property (nonatomic) bool shouldUseMomentShareLinkInMessagesIfThresholdMet;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupAfterPerform;
- (void)_didPublishMomentShareLinkToURL:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_prepareForPerformWithActivityType:(id)arg1 error:(id*)arg2;
- (void)_prepareIndividualItemSourcesForActivity:(id)arg1;
- (void)_prepareMomentShareLinkFromIndividualItemSourcesForActivity:(id)arg1;
- (void)_setPublishedURL:(id)arg1;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)activeActivityType;
- (id)activeItemSources;
- (id)activityItemSourceForAsset:(id)arg1;
- (id)activityItems;
- (id)activityViewController;
- (void)addAssetItem:(id)arg1;
- (id)assetItemSources;
- (id)assetItems;
- (id)assets;
- (void)cancel;
- (id)cmmActivityItemSource;
- (void)cmmActivityItemSource:(id)arg1 didFinishPreparationForActivityType:(id)arg2 preparationType:(unsigned long long)arg3 withItems:(id)arg4 didCancel:(bool)arg5 error:(id)arg6 completion:(id /* block */)arg7;
- (void)cmmActivityItemSource:(id)arg1 willBeginPreparationWithActivityType:(id)arg2 preparationType:(unsigned long long)arg3;
- (void)configureItemSourcesForActivityIfNeeded:(id)arg1 forcePreparationAsMomentShareLink:(bool)arg2;
- (id)delegate;
- (id)errors;
- (id)externalIsolation;
- (id)init;
- (bool)itemSourcesSupportMomentShareLinkCreation;
- (bool)momentSharePublishAttempted;
- (unsigned long long)numSourcesDownloading;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (unsigned long long)preferredPreparationType;
- (id /* block */)progressHandler;
- (void)publishLinkForActivityType:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)publishedURL;
- (void)removeAssetItem:(id)arg1;
- (struct PXAssetMediaTypeCount { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })requestAssetsMediaTypeCount;
- (void)runExplicitly:(bool)arg1 withActivityType:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setActiveActivityType:(id)arg1;
- (void)setActiveItemSources:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void)setAssetItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrors:(id)arg1;
- (void)setNumSourcesDownloading:(unsigned long long)arg1;
- (void)setPreferredPreparationType:(unsigned long long)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setShouldExcludeLivenessInAllItemSources:(bool)arg1;
- (void)setShouldExcludeLocationInAllItemSourcess:(bool)arg1;
- (void)setShouldShareAsOriginals:(bool)arg1;
- (void)setShouldUseMomentShareLinkInMessagesIfThresholdMet:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (bool)shouldExcludeLivenessInAllItemSources;
- (bool)shouldExcludeLocationInAllItemSourcess;
- (bool)shouldShareAsOriginals;
- (bool)shouldUseMomentShareLinkInMessagesIfThresholdMet;
- (unsigned long long)state;
- (struct { bool x1; bool x2; bool x3; })synthesizedSharingPreferencesForAssetItem:(id)arg1;
- (void)updateSharingPreferencesInItemSources;
- (void)updateState;

@end
