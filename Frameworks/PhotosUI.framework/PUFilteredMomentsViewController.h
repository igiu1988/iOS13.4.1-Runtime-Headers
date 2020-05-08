/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilteredMomentsViewController : PUPhotosGridViewController <PUFilteredMomentsDataSourceDelegate, PUPhotosSectionHeaderViewDelegate> {
    NSString * _emptyPlaceholderText;
    PUFilteredMomentsDataSource * _filteredMomentsDataSource;
    long long  _gridPresentationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *emptyPlaceholderText;
@property (nonatomic, retain) PUFilteredMomentsDataSource *filteredMomentsDataSource;
@property (nonatomic) long long gridPresentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getDataForVisualSection:(long long)arg1 hasActionButton:(bool*)arg2 actionButtonTitle:(id*)arg3 hasDisclosure:(bool*)arg4 locations:(id*)arg5 title:(id*)arg6 startDate:(id*)arg7 endDate:(id*)arg8;
- (void)_reloadVisibleMomentHeaders;
- (bool)allowSlideshowButton;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (void)didTapHeaderView:(id)arg1;
- (id)emptyPlaceholderText;
- (id)filteredMomentsDataSource;
- (void)filteredMomentsDataSourceHasPendingChanges:(id)arg1;
- (long long)gridPresentationContext;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (id)newEmptyPlaceholderView;
- (id)newGridLayout;
- (long long)oneUpPresentationOrigin;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEmptyPlaceholderText:(id)arg1;
- (void)setFilteredMomentsDataSource:(id)arg1;
- (void)setGridPresentationContext:(long long)arg1;
- (void)setSelected:(bool)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(bool)arg4;
- (void)viewDidLoad;

@end