/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUISubscriptionContextMenusProductionFactory : NSObject <PSUISubscriptionContextMenusFactory> {
    PSSpecifier * _groupSpecifier;
    PSListController * _hostController;
    PSSpecifier * _parentSpecifier;
    bool  _popViewControllerOnPlanRemoval;
}

@property (nonatomic) PSSpecifier *groupSpecifier;
@property (nonatomic) PSListController *hostController;
@property (nonatomic) PSSpecifier *parentSpecifier;
@property (nonatomic) bool popViewControllerOnPlanRemoval;

- (void).cxx_destruct;
- (id)createCallingSubgroup;
- (id)createCarrierBundleCache;
- (id)createCarrierSpaceSubgroup;
- (id)createCellularPlanManager;
- (id)createCellularPlanManagerCache;
- (id)createDataCache;
- (id)createLowDataModeSubgroup;
- (id)createMyNumberSubgroup;
- (id)createNetworkSelectionSubgroup;
- (id)createNetworkSettingsSubgroup;
- (id)createRoamingSpecifiersSubgroup;
- (id)createSimStatusCache;
- (id)createSimSubgroup;
- (id)groupSpecifier;
- (id)hostController;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 groupSpecifier:(id)arg3 popViewControllerOnPlanRemoval:(bool)arg4;
- (id)parentSpecifier;
- (bool)popViewControllerOnPlanRemoval;
- (void)setGroupSpecifier:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setParentSpecifier:(id)arg1;
- (void)setPopViewControllerOnPlanRemoval:(bool)arg1;
- (bool)shouldPopViewControllerOnPlanRemoval;

@end
