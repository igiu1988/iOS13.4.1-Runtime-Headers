/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitIncidentsViewController : _MKTableViewController {
    NSArray * _incidents;
}

@property (nonatomic, copy) NSArray *incidents;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_cellForRow:(long long)arg1 inSection:(long long)arg2;
- (void)_localeDidChange;
- (void)_updateTitle;
- (void)dealloc;
- (id)incidents;
- (void)infoCardThemeChanged;
- (id)initWithIncidents:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setIncidents:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end
