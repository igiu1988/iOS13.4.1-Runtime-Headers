/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUIFauxCardScannerSpecifier : PSSpecifier <TSSIMSetupDelegate> {
    TSSIMSetupFlow * _flow;
    PSListController * _hostController;
    CTCellularPlanManager * _planManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) TSSIMSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *hostController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fauxCardScannerCellPressed:(id)arg1;
- (id)flow;
- (id)hostController;
- (id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(bool)arg2;
- (id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(bool)arg2 planManager:(id)arg3;
- (void)setFlow:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)simSetupFlowCompleted;
- (long long)userConsentResponse;

@end
