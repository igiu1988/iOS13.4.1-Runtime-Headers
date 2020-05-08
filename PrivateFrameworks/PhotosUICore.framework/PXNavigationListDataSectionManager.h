/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListDataSectionManager : PXDataSectionManager <PXCollectionsDataSourceManagerObserver, PXNavigationListDataSectionManagerObserver> {
    NSMutableDictionary * _childDataSectionIndexes;
    NSMutableDictionary * _childDataSectionManagers;
    PHCollectionList * _collectionList;
    PXPhotoKitCollectionsDataSource * _collectionsDataSource;
    PXPhotoKitCollectionsDataSourceManager * _collectionsDataSourceManager;
    long long  _indentationLevel;
    NSMapTable * _parentListItems;
}

@property (nonatomic, readonly) PHCollectionList *collectionList;
@property (nonatomic, retain) PXPhotoKitCollectionsDataSource *collectionsDataSource;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManager *collectionsDataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indentationLevel;
@property (readonly) Class superclass;

+ (id)makeCollectionsDataSourceManagerForConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)_changeDetailsForItemAtIndex:(long long)arg1 childDataSection:(id)arg2 expanding:(bool)arg3;
- (void)_requestParentForListItem:(id)arg1 hintIndex:(long long)arg2 resultHandler:(id /* block */)arg3 recursionHandler:(id /* block */)arg4;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;
- (void)collapseListItem:(id)arg1 hintIndex:(long long)arg2;
- (id)collectionList;
- (id)collectionsDataSource;
- (id)collectionsDataSourceManager;
- (id)createDataSection;
- (id)description;
- (void)expandListItem:(id)arg1 hintIndex:(long long)arg2;
- (long long)indentationLevel;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)initWithCollectionList:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setCollectionsDataSource:(id)arg1;
- (void)setIndentationLevel:(long long)arg1;
- (void)startBackgroundFetchingIfNeeded;

@end