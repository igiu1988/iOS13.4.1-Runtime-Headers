/* Generated by EzioChiu
   Image: /usr/lib/libapplist.dylib
 */

@interface ALApplicationTableDataSource : NSObject <UITableViewDataSource> {
    bool  _loadsAsynchronously;
    NSBundle * _localizationBundle;
    NSMutableArray * _sectionDescriptors;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool loadsAsynchronously;
@property (nonatomic, retain) NSBundle *localizationBundle;
@property (nonatomic, copy) NSArray *sectionDescriptors;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

+ (id)dataSource;
+ (id)standardSectionDescriptors;

- (id)cellDescriptorForIndexPath:(id)arg1;
- (void)dealloc;
- (id)displayIdentifierForIndexPath:(id)arg1;
- (void)iconLoadedFromNotification:(id)arg1;
- (id)init;
- (void)insertSectionDescriptor:(id)arg1 atIndex:(long long)arg2;
- (bool)loadsAsynchronously;
- (id)localizationBundle;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeSectionDescriptorAtIndex:(long long)arg1;
- (void)removeSectionDescriptorsAtIndexes:(id)arg1;
- (id)sectionDescriptors;
- (void)sectionRequestedSectionReload:(id)arg1 animated:(bool)arg2;
- (void)setLoadsAsynchronously:(bool)arg1;
- (void)setLocalizationBundle:(id)arg1;
- (void)setSectionDescriptors:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (bool)waitUntilDate:(id)arg1 forContentInSectionAtIndex:(long long)arg2;

@end
