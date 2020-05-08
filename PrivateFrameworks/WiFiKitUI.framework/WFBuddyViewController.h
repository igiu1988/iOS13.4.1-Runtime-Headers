/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFBuddyViewController : OBWelcomeController <UITableViewDataSource, UITableViewDelegate, WFNetworkListing> {
    NSString * _alternateSetupFooter;
    NSString * _alternateSetupTitle;
    <WFBuddyViewControllerDelegate> * _buddyDelegate;
    UIView * _buddyIPadContainerView;
    <WFNetworkListRecord> * _currentNetwork;
    float  _currentNetworkScaledRSSI;
    long long  _currentNetworkState;
    long long  _deviceCapability;
    UISwitch * _enableWAPISwitch;
    NSLayoutConstraint * _heightAnchor;
    <WFNetworkListDelegate> * _listDelegate;
    bool  _networkResultsChangedWhileUIUpdates;
    NSArray * _pendingNetworks;
    NSOrderedSet * _sections;
    bool  _showAdditionalSetupInfo;
    bool  _showNetworkSettings;
    NSArray * _sortedNetworks;
    bool  _supportsCellularActivation;
    bool  _tableReloadRequestQueued;
    UITableView * _tableView;
    bool  _tableViewIsUpdating;
    bool  showOtherNetwork;
}

@property (nonatomic, copy) NSString *alternateSetupFooter;
@property (nonatomic, copy) NSString *alternateSetupTitle;
@property (nonatomic) <WFBuddyViewControllerDelegate> *buddyDelegate;
@property (nonatomic, retain) UIView *buddyIPadContainerView;
@property (retain) <WFNetworkListRecord> *currentNetwork;
@property float currentNetworkScaledRSSI;
@property unsigned long long currentNetworkSignalBars;
@property long long currentNetworkState;
@property (nonatomic, copy) NSString *currentNetworkSubtitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long deviceCapability;
@property (nonatomic) bool disabled;
@property (nonatomic, retain) UISwitch *enableWAPISwitch;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightAnchor;
@property <WFNetworkListDelegate> *listDelegate;
@property (nonatomic) bool networkResultsChangedWhileUIUpdates;
@property (nonatomic, retain) NSArray *pendingNetworks;
@property (retain) NSOrderedSet *sections;
@property (nonatomic) bool showAdditionalSetupInfo;
@property (nonatomic) bool showNetworkSettings;
@property (nonatomic) bool showOtherNetwork;
@property (nonatomic, retain) NSArray *sortedNetworks;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsCellularActivation;
@property (nonatomic) bool tableReloadRequestQueued;
@property (nonatomic, retain) UITableView *tableView;
@property bool tableViewIsUpdating;
@property (nonatomic) bool userAutoJoinEnabled;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_cellForNetworkRecord:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)_chooseOtherNetworkTapped:(id)arg1;
- (id)_debugSectionStringFromSections:(id)arg1;
- (void)_enableWAPISwitchChanged:(id)arg1;
- (id)_nameOfSection:(long long)arg1;
- (void)_notifyBuddyWiFiPickerIsVisble:(bool)arg1;
- (void)_refreshSections;
- (void)_updateCellsWithNewData:(id)arg1 oldData:(id)arg2 inSection:(long long)arg3;
- (id)alternateSetupFooter;
- (id)alternateSetupTitle;
- (id)buddyDelegate;
- (id)buddyIPadContainerView;
- (id)currentNetwork;
- (float)currentNetworkScaledRSSI;
- (long long)currentNetworkState;
- (long long)deviceCapability;
- (id)enableWAPISwitch;
- (id)heightAnchor;
- (id)init;
- (id)listDelegate;
- (void)loadView;
- (void)networkListDelegateWillPresentAccessoryViewController:(id)arg1;
- (bool)networkResultsChangedWhileUIUpdates;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pendingNetworks;
- (void)powerStateDidChange:(bool)arg1;
- (void)refresh;
- (id)sections;
- (void)setAlternateSetupFooter:(id)arg1;
- (void)setAlternateSetupTitle:(id)arg1;
- (void)setBuddyDelegate:(id)arg1;
- (void)setBuddyIPadContainerView:(id)arg1;
- (void)setCurrentNetwork:(id)arg1;
- (void)setCurrentNetworkScaledRSSI:(float)arg1;
- (void)setCurrentNetworkState:(long long)arg1;
- (void)setDeviceCapability:(long long)arg1;
- (void)setEnableWAPISwitch:(id)arg1;
- (void)setHeightAnchor:(id)arg1;
- (void)setListDelegate:(id)arg1;
- (void)setNetworkResultsChangedWhileUIUpdates:(bool)arg1;
- (void)setNetworks:(id)arg1;
- (void)setPendingNetworks:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setShowAdditionalSetupInfo:(bool)arg1;
- (void)setShowNetworkSettings:(bool)arg1;
- (void)setShowOtherNetwork:(bool)arg1;
- (void)setSortedNetworks:(id)arg1;
- (void)setSupportsCellularActivation:(bool)arg1;
- (void)setTableReloadRequestQueued:(bool)arg1;
- (void)setTableView:(id)arg1;
- (void)setTableViewIsUpdating:(bool)arg1;
- (bool)showAdditionalSetupInfo;
- (bool)showNetworkSettings;
- (bool)showOtherNetwork;
- (id)sortedNetworks;
- (bool)supportsCellularActivation;
- (bool)tableReloadRequestQueued;
- (id)tableView;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (bool)tableViewIsUpdating;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
