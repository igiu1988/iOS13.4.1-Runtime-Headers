/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDownloadShowTableViewController : UITableViewController <VUIDownloadEntityTableViewCellDelegate, VUILibraryDataSourceDelegate> {
    NSMutableArray * _assetControllersToRemove;
    UIBarButtonItem * _backBarButtonItem;
    VUIDownloadShowDataSource * _downloadDataSource;
    NSMutableArray * _groupings;
    UIBarButtonItem * _leftBarButtonItem;
    UIBarButtonItem * _rightBarButtonItem;
    VUIDownloadShowTableHeaderView * _sizingHeader;
}

@property (nonatomic, retain) NSMutableArray *assetControllersToRemove;
@property (nonatomic, retain) UIBarButtonItem *backBarButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIDownloadShowDataSource *downloadDataSource;
@property (nonatomic, retain) NSMutableArray *groupings;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *leftBarButtonItem;
@property (nonatomic, retain) UIBarButtonItem *rightBarButtonItem;
@property (nonatomic, retain) VUIDownloadShowTableHeaderView *sizingHeader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (id)_configureAlertControllerForIndexPath:(id)arg1;
- (void)_editToggled;
- (void)_exitEditingMode;
- (void)_popIfNeeded;
- (id)assetControllersToRemove;
- (id)backBarButtonItem;
- (void)dataSourceDidFinishFetching:(id)arg1;
- (void)downloadCellDidRequestCancelDownload:(id)arg1;
- (id)downloadDataSource;
- (id)groupings;
- (id)initWithDataSource:(id)arg1;
- (id)leftBarButtonItem;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)rightBarButtonItem;
- (void)setAssetControllersToRemove:(id)arg1;
- (void)setBackBarButtonItem:(id)arg1;
- (void)setDownloadDataSource:(id)arg1;
- (void)setGroupings:(id)arg1;
- (void)setLeftBarButtonItem:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1;
- (void)setSizingHeader:(id)arg1;
- (id)sizingHeader;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end