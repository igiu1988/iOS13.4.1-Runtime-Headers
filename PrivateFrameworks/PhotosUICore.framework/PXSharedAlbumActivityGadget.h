/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharedAlbumActivityGadget : NSObject <PXGadget, PXOneUpPresentationDelegate, PXSettingsKeyObserver> {
    NSArray * _assets;
    PXPhotoKitAssetsDataSourceManager * _assetsDataSourceManager;
    PXFeedAssetsSectionInfo * _assetsSectionInfo;
    NSAttributedString * _caption;
    UILabel * _captionLabel;
    PXAssetCollageView * _collageView;
    _PXSharedAlbumActivityGadgetContentView * _contentView;
    PXAssetReference * _currentAssetReference;
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    PXSharedAlbumHeaderView * _headerView;
    PXPhotoKitUIMediaProvider * _mediaProvider;
    NSSet * _oneUpHiddenAssetReferences;
    long long  _priority;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleContentRect;
    bool  _wasAskedToLoadContentData;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, retain) NSArray *assets;
@property (nonatomic, retain) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager;
@property (nonatomic, retain) PXFeedAssetsSectionInfo *assetsSectionInfo;
@property (nonatomic, copy) NSAttributedString *caption;
@property (nonatomic, retain) UILabel *captionLabel;
@property (nonatomic, retain) PXAssetCollageView *collageView;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (nonatomic, retain) _PXSharedAlbumActivityGadgetContentView *contentView;
@property (nonatomic, retain) PXAssetReference *currentAssetReference;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long gadgetCapabilities;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, retain) PXSharedAlbumHeaderView *headerView;
@property (nonatomic, readonly) bool isContentViewLoaded;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) PXPhotoKitUIMediaProvider *mediaProvider;
@property (nonatomic, copy) NSSet *oneUpHiddenAssetReferences;
@property (nonatomic) long long priority;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;
@property (nonatomic) bool wasAskedToLoadContentData;

+ (void)preloadResources;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleActionTap:(id)arg1;
- (void)_handleCollageViewTap:(id)arg1;
- (bool)_isAccessibilityContentSize;
- (void)_layoutContentView;
- (void)_loadAssets;
- (void)_loadCaption;
- (void)_loadContentFromSectionInfo;
- (void)_navigateToAssetView:(id)arg1;
- (unsigned long long)_numberOfLinesForCaption;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateCollageView;
- (void)_updateCollageViewHiddenAssets;
- (void)_updateCollageViewVideoEnabled;
- (id)assets;
- (id)assetsDataSourceManager;
- (id)assetsSectionInfo;
- (id)caption;
- (id)captionLabel;
- (id)collageView;
- (id)contentView;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (id)currentAssetReference;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)gadgetCapabilities;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (id)headerView;
- (id)init;
- (bool)isContentViewLoaded;
- (id)mediaProvider;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)oneUpHiddenAssetReferences;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (long long)priority;
- (void)setAssets:(id)arg1;
- (void)setAssetsDataSourceManager:(id)arg1;
- (void)setAssetsSectionInfo:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setCaptionLabel:(id)arg1;
- (void)setCollageView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCurrentAssetReference:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setOneUpHiddenAssetReferences:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setVisibleContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWasAskedToLoadContentData:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)uniqueGadgetIdentifier;
- (void)userDidSelectGadget;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;
- (bool)wasAskedToLoadContentData;

@end
