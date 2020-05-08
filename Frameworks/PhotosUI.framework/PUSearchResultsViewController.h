/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsViewController : UIViewController <PUSearchResultsFooterViewDelegate, PXOneUpPresentationDelegate, PXSearchResultsLayoutDataSource, PXSearchResultsSectionedDataSourceChangeObserver, UISearchBarDelegate, UISearchResultsUpdating, UITableViewDataSource, UITableViewDataSourcePrefetching, UITableViewDelegate> {
    bool  _aggdSearchSucceeded;
    PXSearchAnalyticsSession * _analyticsSession;
    PXSearchResultsSectionedDataSourceManager * _dataSourceManager;
    bool  _hasLimitedScreenSize;
    unsigned long long  _nextAnalyticsSessionBeginType;
    PXSearchResultsOneUpViewModel * _oneUpViewModel;
    id /* block */  _ppt_searchTestCompletionHandler;
    UISearchController * _searchController;
    UITableView * _searchResultsTableView;
    NSIndexPath * _selectedTopAssetsResultIndexPath;
    bool  _shouldMergePendingChanges;
    id /* block */  _siriSearchCompletionHandler;
    PXSearchLoggingUtility * _suggestionsAggdLogHelper;
    PUSearchResultsFooterView * _tableFooterView;
    PXSearchResultsViewModel * _viewModel;
}

@property (nonatomic) bool aggdSearchSucceeded;
@property (nonatomic, retain) PXSearchAnalyticsSession *analyticsSession;
@property (nonatomic, retain) PXSearchResultsSectionedDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasLimitedScreenSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long nextAnalyticsSessionBeginType;
@property (nonatomic, retain) PXSearchResultsOneUpViewModel *oneUpViewModel;
@property (nonatomic, copy) id /* block */ ppt_searchTestCompletionHandler;
@property (nonatomic) UISearchController *searchController;
@property (nonatomic, retain) UITableView *searchResultsTableView;
@property (nonatomic, retain) NSIndexPath *selectedTopAssetsResultIndexPath;
@property (nonatomic) bool shouldMergePendingChanges;
@property (nonatomic, copy) id /* block */ siriSearchCompletionHandler;
@property (nonatomic, retain) PXSearchLoggingUtility *suggestionsAggdLogHelper;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUSearchResultsFooterView *tableFooterView;
@property (nonatomic, retain) PXSearchResultsViewModel *viewModel;

+ (id)_gridViewControllerSpec;
+ (id)_newSearchResultsControllerWithSpec:(id)arg1 searchResults:(id)arg2 orAlbum:(id)arg3 title:(id)arg4 headerViewTitle:(id)arg5;
+ (id)preQuerySearchResultsLog;

- (void).cxx_destruct;
- (id)_activeSearch;
- (double)_availableContentWidth;
- (id)_cellFromIdentifier:(id)arg1 inTableView:(id)arg2;
- (double)_collectiveInterItemSpacing;
- (id)_configureSearchResultsCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_configureSuggestionsCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_configureTopResultsCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_configureWordEmbeddingsCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_configureWordEmbeddingsTitleCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_endAnalyticsSession;
- (void)_expandTableViewSection:(unsigned long long)arg1;
- (double)_marginWidthTotal;
- (void)_notifyAnalyticsInteractedWithCurrentSearch;
- (void)_notifyAnalyticsOneUpTopAssets;
- (void)_notifyAnalyticsSearchChanged;
- (void)_notifyAnalyticsSearchResult:(id)arg1;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)_presentAlertControllerFromButton:(id)arg1;
- (void)_pushDetailViewForPhotosWithUUIDs:(id)arg1 title:(id)arg2;
- (void)_pushGridForAlbumWithUUID:(id)arg1;
- (void)_pushGridForPhotosWithUUIDs:(id)arg1 title:(id)arg2 searchCategories:(unsigned long long)arg3 headerViewTitle:(id)arg4;
- (void)_pushPersonDetailViewForPerson:(id)arg1;
- (void)_pushViewForCollectionWithUUID:(id)arg1 collectionClass:(Class)arg2;
- (void)_pushViewForMemoryWithUUID:(id)arg1;
- (id)_regionOfInterestForAsset:(id)arg1;
- (void)_registerNotificationsForAnalytics;
- (bool)_rowShouldAllowTapForIndexPath:(id)arg1;
- (void)_selectSearchResult:(id)arg1;
- (void)_selectSuggestionAtIndexPath:(id)arg1;
- (void)_setupResultsTableView;
- (bool)_shouldApplyReadabilityInset;
- (void)_showOneUpWithAssetCollection:(id)arg1 withInitialAsset:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_thumbnailAssetsForIndexPaths:(id)arg1;
- (void)_unregisterNotificationsForAnalytics;
- (void)_updateIndexingProgressViewVisibility:(bool)arg1;
- (bool)aggdSearchSucceeded;
- (id)analyticsSession;
- (id)dataSourceManager;
- (id)dateRangeFormatter;
- (id)debugDescription;
- (void)didSelectSectionShowAllButton:(id)arg1;
- (void)didSelectTapToRadarButton:(id)arg1;
- (bool)hasLimitedScreenSize;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGSize { double x1; double x2; })imageViewSize;
- (id)init;
- (unsigned long long)maximumNumberOfThumbnailsPerRow;
- (unsigned long long)maximumNumberSuggestionRows;
- (unsigned long long)maximumNumberWordEmbeddingRows;
- (unsigned long long)nextAnalyticsSessionBeginType;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)oneUpViewModel;
- (void)ppt_expandAllSections;
- (id /* block */)ppt_searchTestCompletionHandler;
- (void)prepareDataSource;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)searchController;
- (void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 atIndexes:(id)arg3;
- (void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 topAssetsSectionExists:(bool)arg3;
- (void)searchResultsDataSource:(id)arg1 didFetchAssetsForSearchResult:(id)arg2 indexPath:(id)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(id)arg1 shouldMergePendingChanges:(bool)arg2;
- (id)searchResultsTableView;
- (id)selectedTopAssetsResultIndexPath;
- (void)setAggdSearchSucceeded:(bool)arg1;
- (void)setAnalyticsSession:(id)arg1;
- (void)setDataSourceManager:(id)arg1;
- (void)setHasLimitedScreenSize:(bool)arg1;
- (void)setNextAnalyticsSessionBeginType:(unsigned long long)arg1;
- (void)setOneUpViewModel:(id)arg1;
- (void)setPpt_searchTestCompletionHandler:(id /* block */)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchResultsTableView:(id)arg1;
- (void)setSelectedTopAssetsResultIndexPath:(id)arg1;
- (void)setShouldMergePendingChanges:(bool)arg1;
- (void)setSiriSearchCompletionHandler:(id /* block */)arg1;
- (void)setSuggestionsAggdLogHelper:(id)arg1;
- (void)setTableFooterView:(id)arg1;
- (void)setViewModel:(id)arg1;
- (bool)shouldMergePendingChanges;
- (void)shouldShowSearchResultsController:(bool)arg1;
- (id /* block */)siriSearchCompletionHandler;
- (id)suggestionsAggdLogHelper;
- (id)tableFooterView;
- (bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)topAssetGridCustomWidthMargin;
- (double)topAssetThumbnailInterItemSpacing;
- (struct CGSize { double x1; double x2; })topAssetThumbnailViewSize;
- (void)topResultCell:(id)arg1 didSelectAssetIndex:(unsigned long long)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withNumberOfImages:(unsigned long long)arg4;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateSearchResultsTable;
- (void)updateSearchResultsTableAtIndexPath:(id)arg1;
- (void)updateSearchResultsTableTopAssetsSectionWithResult:(id)arg1;
- (void)updateTableFooterViewFrame;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)wordEmbeddingTapped:(id)arg1;

@end