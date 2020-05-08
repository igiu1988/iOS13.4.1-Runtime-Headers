/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCManagedAppDetailsViewController : UITableViewController <PSStateRestoration> {
    MCUIProfile * _UIProfile;
    LSApplicationProxy * _managedAppProxy;
}

@property (nonatomic, retain) MCUIProfile *UIProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LSApplicationProxy *managedAppProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UIProfile;
- (void)_profileChanged:(id)arg1;
- (void)_setup;
- (bool)canBeShownFromSuspendedState;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithUIProfile:(id)arg1 managedApp:(id)arg2;
- (id)initWithUIProfile:(id)arg1 managedAppID:(id)arg2;
- (id)managedAppProxy;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setManagedAppProxy:(id)arg1;
- (void)setUIProfile:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
