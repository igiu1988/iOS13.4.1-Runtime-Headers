/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTStickerSheetController : NSObject <AVTNotifyingContainerViewDelegate, AVTObjectViewController, AVTStickerCollectionViewCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    bool  _allowsPeel;
    UICollectionView * _collectionView;
    <AVTStickerSheetControllerDelegate> * _delegate;
    <AVTStickerDisclosureValidationDelegate> * _disclosureValidationDelegate;
    bool  _isPageVisible;
    AVTStickerSheetModel * _model;
    UIImage * _placeholderImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInsets;
    bool  _showPrereleaseSticker;
    UIView * _view;
    <AVTPresenterDelegate> * presenterDelegate;
}

@property (nonatomic, readonly) bool allowsPeel;
@property (nonatomic, readonly) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTStickerSheetControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <AVTStickerDisclosureValidationDelegate> *disclosureValidationDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPageVisible;
@property (nonatomic, retain) AVTStickerSheetModel *model;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) <AVTPresenterDelegate> *presenterDelegate;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInsets;
@property (nonatomic) bool showPrereleaseSticker;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (bool)allowsPeel;
- (id)avatarRecord;
- (void)clearStickerRendererIfNeeded;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (void)discardStickerItems;
- (id)disclosureValidationDelegate;
- (id)firstStickerView;
- (id)initWithStickerSheetModel:(id)arg1 allowsPeel:(bool)arg2;
- (bool)isPageVisible;
- (void)loadView;
- (void)lowerTaskPriority:(id /* block */)arg1;
- (struct CGPoint { double x1; double x2; })maxedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })minimumContentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)model;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize { double x1; double x2; })arg1;
- (double)numberOfItemsPerRow;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)placeholderImage;
- (id /* block */)placeholderProvider;
- (id)presenterDelegate;
- (void)reloadCollectionViewItemForStickerItem:(id)arg1;
- (void)scrollToContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisclosureValidationDelegate:(id)arg1;
- (void)setIsPageVisible:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;
- (void)setSectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowPrereleaseSticker:(bool)arg1;
- (void)setView:(id)arg1;
- (void)sheetWillAppear;
- (void)sheetWillDisappear;
- (bool)showPrereleaseSticker;
- (void)startedTask:(id /* block */)arg1 forItem:(id)arg2;
- (void)stickerCellDidPeelSticker:(id)arg1;
- (void)stickerCellDidTapSticker:(id)arg1;
- (double)topPadding;
- (void)updateItem:(id)arg1 withStickerResource:(id)arg2 reloadCell:(bool)arg3;
- (id)view;

@end
