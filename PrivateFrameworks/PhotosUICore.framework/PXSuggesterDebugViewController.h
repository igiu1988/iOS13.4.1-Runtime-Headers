/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSuggesterDebugViewController : UITableViewController <PXOneUpPresentationDelegate> {
    unsigned long long  _currentSortCriteria;
    PHSuggestion * _currentSuggestion;
    NSDate * _date;
    UIBarButtonItem * _dateButton;
    UIBarButtonItem * _fullLibraryButton;
    bool  _fullLibraryIsEnabled;
    NSArray * _heuristicallySortedItems;
    NSString * _name;
    UILabel * _noResultLabel;
    NSDictionary * _options;
    UIBarButtonItem * _showInvalidItemsButton;
    bool  _showsInvalidItems;
    UIBarButtonItem * _sortButton;
    NSArray * _sortedItems;
    UIActivityIndicatorView * _spinnerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchSuggestions;
- (void)_sortItems;
- (id)_stringWithSortCriteria:(unsigned long long)arg1;
- (void)_updateToolbarItems;
- (id)assetsDataSourceManagerForSuggestion:(id)arg1;
- (void)configureCell:(id)arg1 withItem:(id)arg2;
- (id)dateButton;
- (void)didSelectDateButton:(id)arg1;
- (void)didSelectFullLibraryButton:(id)arg1;
- (void)didSelectShowInvalidItemsButton:(id)arg1;
- (void)didSelectSortButton:(id)arg1;
- (void)didStopProcessing;
- (id)fullLibraryButton;
- (id)initWithName:(id)arg1 options:(id)arg2;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)refresh;
- (id)showInvalidItemsButton;
- (id)sortButton;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)updateShowInvalidItemsButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willStartProcessing;

@end
