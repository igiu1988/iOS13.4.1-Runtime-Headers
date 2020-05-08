/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFPasswordTableViewController : UITableViewController <UISearchBarDelegate, UISearchResultsUpdating, _SFPasswordIconControllerDelegate> {
    _SFPasswordTableConfiguration * _configuration;
    _SFPasswordIconController * _iconController;
    UISearchController * _searchController;
    NSString * _searchPattern;
    NSCountedSet * _visibleDomains;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *searchPattern;
@property (nonatomic, retain) NSString *searchQuery;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateIconForDomain:(id)arg1 forCell:(id)arg2;
- (void)handleContextMenuDeleteForIndexPath:(id)arg1;
- (void)iconDidUpdateForDomain:(id)arg1 iconController:(id)arg2;
- (id)initWithStyle:(long long)arg1 siteMetadataManager:(id)arg2 configuration:(id)arg3;
- (long long)positionForBar:(id)arg1;
- (id)searchPattern;
- (void)searchPatternDidUpdate;
- (id)searchQuery;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setSearchQuery:(id)arg1;
- (void)shareSavedPassword:(id)arg1 modalPresentationSourceView:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
