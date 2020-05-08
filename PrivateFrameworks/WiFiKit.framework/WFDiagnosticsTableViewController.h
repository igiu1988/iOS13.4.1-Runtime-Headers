/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFDiagnosticsTableViewController : UITableViewController {
    WFNetworkSettingsCellFactory * _cellFactory;
    <WFDiagnosticsProviderContext> * _context;
    WFHyperlinkFooterView * _linkFooterView;
    NSOrderedSet * _sections;
}

@property (nonatomic, retain) WFNetworkSettingsCellFactory *cellFactory;
@property (nonatomic, retain) <WFDiagnosticsProviderContext> *context;
@property (nonatomic, retain) WFHyperlinkFooterView *linkFooterView;
@property (nonatomic, retain) NSOrderedSet *sections;

- (void).cxx_destruct;
- (id)_defaultSections;
- (void)_refresh;
- (id)cellFactory;
- (id)context;
- (id)initWithDiagnosticsContext:(id)arg1;
- (id)linkFooterView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sections;
- (void)setCellFactory:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setLinkFooterView:(id)arg1;
- (void)setSections:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
