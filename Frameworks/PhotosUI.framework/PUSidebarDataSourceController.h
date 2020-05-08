/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSidebarDataSourceController : NSObject <PXAggregatedDataSourceManagerObserver> {
    PXStackedDataSectionManager * _dataSectionManager;
    PUSidebarDataSource * _dataSource;
    PXStackedDataSourceManager * _dataSourceManager;
    <PUSidebarDataSourceControllerDelegate> * _delegate;
    PXStackedDataSource * _stackedDataSource;
}

@property (nonatomic, copy) NSArray *childDataSectionManagers;
@property (nonatomic, readonly) PUSidebarDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSidebarDataSourceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)childDataSectionManagerForListItem:(id)arg1 hintIndexPath:(id)arg2 localIndex:(long long*)arg3;
- (id)childDataSectionManagers;
- (id)dataSource;
- (id)delegate;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setChildDataSectionManagers:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
