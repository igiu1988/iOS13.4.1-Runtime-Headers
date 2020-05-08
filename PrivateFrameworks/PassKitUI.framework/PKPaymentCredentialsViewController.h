/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCredentialsViewController : PKPaymentSetupTableViewController <PKPaymentProvisioningControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupPresentationProtocol> {
    bool  _allowsManualEntry;
    double  _cachedHeaderViewWidth;
    NSMutableArray * _credentialCaches;
    PKPaymentSetupFlowController * _flowController;
    bool  _hideSetupLaterButton;
    NSString * _lastBackedUpDefaultPaymentPassSerialNumber;
    unsigned long long  _maximumNumberOfSelectableCredentials;
    NSMutableOrderedSet * _ordering;
    NSMutableDictionary * _paymentCredentialToCredentialSectionMap;
    PKPaymentCredentialCache * _peerPaymentCredentialCache;
    UIImage * _placeHolder;
    PKPaymentSetupProduct * _product;
    PKPaymentProvisioningController * _provisioningController;
    NSMutableArray * _refundedCredentialCaches;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    PKPaymentCredentialTableViewCell * _sizingCell;
    PKPaymentSetupFooterView * _tableFooter;
    PKTableHeaderView * _tableHeader;
    NSMutableArray * _unavailableCredentialCaches;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSetupLaterButton;
@property (nonatomic, copy) NSString *lastBackedUpDefaultPaymentPassSerialNumber;
@property (nonatomic, retain) PKPaymentSetupProduct *product;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canSelectCredential:(id)arg1;
- (void)_configureCell:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3 sizing:(bool)arg4;
- (void)_continue;
- (void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (id)_credentialCacheRequiringAlert;
- (unsigned long long)_credentialSectionForPaymentCredential:(id)arg1;
- (unsigned long long)_credentialSectionForSection:(long long)arg1;
- (unsigned long long)_numberOfSelectedCredentials;
- (void)_populateOrderCredentialCaches;
- (void)_presentAccountAlertIfNotSelectedWithContinueHandler:(id /* block */)arg1 setupLaterHandler:(id /* block */)arg2;
- (void)_presentAlertForCredentialCache:(id)arg1 continueHandler:(id /* block */)arg2 setupLaterHandler:(id /* block */)arg3;
- (void)_presentManualAddController;
- (void)_presentSecurityCapabilitiesFlowWithFeature:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_queue_updatePassSnapshot:(id)arg1 paymentCredential:(id)arg2 credentialSection:(unsigned long long)arg3 credentialsInCache:(id)arg4;
- (long long)_sectionForCredentialSection:(unsigned long long)arg1;
- (void)_setPassSnapshotOnCell:(id)arg1 cell:(id)arg2;
- (void)_setUserInteractionEnabled:(bool)arg1;
- (void)_setupLaterTapped;
- (void)_showRefund:(id)arg1;
- (void)_showUnavailableDetail:(id)arg1;
- (void)_sortCredentialCaches:(id)arg1;
- (void)_startProvisioningForCredentials:(id)arg1;
- (void)_startProvisioningForSelectedCards;
- (void)_terminateSetupFlow;
- (void)_updateForSelectionCount;
- (void)_updateMaximumSelectableCredentials;
- (void)_updateRemoteCredentialCache;
- (void)_updateTableHeaderViewSubtitle;
- (void)dealloc;
- (bool)hideSetupLaterButton;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 credentials:(id)arg4 allowsManualEntry:(bool)arg5;
- (id)lastBackedUpDefaultPaymentPassSerialNumber;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)paymentPassUpdatedOnCredential:(id)arg1;
- (id)paymentSetupMarker;
- (void)performSecurityCheckForCredentials:(id)arg1 completion:(id /* block */)arg2;
- (id)product;
- (void)setHideSetupLaterButton:(bool)arg1;
- (void)setLastBackedUpDefaultPaymentPassSerialNumber:(id)arg1;
- (void)setProduct:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
