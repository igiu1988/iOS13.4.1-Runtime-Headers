/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFStartPageCollectionViewController : UIViewController <UICollectionViewDelegate, _SFStartPageDataSourceObserving> {
    NSSet * _collapsibleSectionIdentifiers;
    UICollectionViewDiffableDataSource * _collectionDataSource;
    UICollectionView * _collectionView;
    NSMapTable * _contextMenuToIndexPathMap;
    <SFStartPageCollectionDataSource> * _dataSource;
    <SFStartPageCollectionDelegate><_SFStartPagePreviewProviding> * _delegate;
    bool  _displaysSectionHeaders;
    NSSet * _expandedSectionIdentifiers;
    double  _lastLayoutWidth;
    NSArray * _sections;
    <SFStartPageCollectionDataSource> * _strongDataSource;
}

@property (nonatomic) <SFStartPageCollectionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFStartPageCollectionDelegate><_SFStartPagePreviewProviding> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displaysSectionHeaders;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SFStartPageCollectionDataSource> *strongDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyCurrentSnapshotAnimatingDifferences:(bool)arg1;
- (id)_bannerSectionLayoutForEnvironment:(id)arg1;
- (id)_collectionView:(id)arg1 cellForIdentifier:(id)arg2 indexPath:(id)arg3;
- (id)_collectionView:(id)arg1 supplementaryViewWithKind:(id)arg2 forIndexPath:(id)arg3;
- (void)_configureHeader:(id)arg1 forSection:(id)arg2 atIndexPath:(id)arg3;
- (id)_currentSnapshot;
- (bool)_isSectionExpanded:(id)arg1;
- (id)_layoutForSectionAtIndex:(long long)arg1 inEnvironment:(id)arg2;
- (id)_makeCollectionViewLayout;
- (long long)_numberOfColumnsForSectionItemType:(long long)arg1 containerWidth:(double)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_sectionContentInsetsWithYAxisPadding:(double)arg1;
- (void)_setUpDataSource:(id)arg1;
- (id)_siteCardSectionLayoutForEnvironment:(id)arg1;
- (struct { double x1; double x2; })_siteIconLayoutValuesForTraitCollection:(id)arg1;
- (id)_siteIconSectionLayoutForEnvironment:(id)arg1;
- (id)_toggleExpandedActionForSection:(id)arg1 atIndexPath:(id)arg2;
- (void)_toggleSectionExpanded:(id)arg1;
- (bool)_updateExpandedSectionIdentifiers;
- (void)_updateNavigationItemAnimated:(bool)arg1;
- (void)_updateSections;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)dataSource;
- (id)delegate;
- (bool)displaysSectionHeaders;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentViewController:(id)arg1 fromItemWithIdentifier:(id)arg2;
- (void)reloadDataAnimatingDifferences:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysSectionHeaders:(bool)arg1;
- (void)setStrongDataSource:(id)arg1;
- (id)strongDataSource;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillAppear:(bool)arg1;

@end
