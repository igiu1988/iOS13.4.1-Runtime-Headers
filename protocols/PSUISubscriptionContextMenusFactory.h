/* Generated by EzioChiu.
 */

@protocol PSUISubscriptionContextMenusFactory

@required

- (PSUICallingSubgroup *)createCallingSubgroup;
- (PSUICoreTelephonyCarrierBundleCache *)createCarrierBundleCache;
- (PSUICarrierSpaceGroup *)createCarrierSpaceSubgroup;
- (CTCellularPlanManager *)createCellularPlanManager;
- (PSUICellularPlanManagerCache *)createCellularPlanManagerCache;
- (PSUICoreTelephonyDataCache *)createDataCache;
- (PSUILowDataModeSubgroup *)createLowDataModeSubgroup;
- (PSUIMyNumberSubgroup *)createMyNumberSubgroup;
- (PSUINetworkSelectionSubgroup *)createNetworkSelectionSubgroup;
- (PSUINetworkSettingsSubgroup *)createNetworkSettingsSubgroup;
- (PSUICellularDataOptionsController *)createRoamingSpecifiersSubgroup;
- (PSSimStatusCache *)createSimStatusCache;
- (PSUISIMSubgroup *)createSimSubgroup;
- (PSSpecifier *)groupSpecifier;
- (PSListController *)hostController;
- (PSSpecifier *)parentSpecifier;
- (bool)shouldPopViewControllerOnPlanRemoval;

@end
