/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSCellularPlanManagerCache : NSObject {
    NSArray * _danglingPlanItems;
    NSArray * _planItems;
    unsigned long long  _supportedFlowTypes;
    <TSCellularPlanManagerCacheDelegate> * delegate;
}

@property (retain) NSArray *danglingPlanItems;
@property (nonatomic) <TSCellularPlanManagerCacheDelegate> *delegate;
@property (retain) NSArray *planItems;
@property (nonatomic) unsigned long long supportedFlowTypes;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getByteRepresentationOf:(id)arg1;
- (id)_getValidatedPlanItemFor:(id)arg1;
- (void)_initialize;
- (void)_updateCachedFlowTypes;
- (void)_updateCachedPlanItems;
- (void)_updateLocalCachedPlanItems:(id)arg1;
- (void)addNewPlanWithAddress:(id)arg1 matchingId:(id)arg2 confirmationCode:(id)arg3 userConsent:(long long)arg4 completion:(id /* block */)arg5;
- (void)addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 userConsentResponse:(long long)arg3 completion:(id /* block */)arg4;
- (long long)calculateInstallConsentTextTypeFor:(id)arg1;
- (id)danglingPlanItems;
- (void)dealloc;
- (id)delegate;
- (void)didPurchasePlanForEid:(id)arg1 iccid:(id)arg2 smdpURL:(id)arg3;
- (void)didTransferPlanForEid:(id)arg1 iccid:(id)arg2 smdpURL:(id)arg3 state:(id)arg4;
- (id)getDanglingPlanItems;
- (id)getPredefinedLabels;
- (id)getShortLabelsForLabels:(id)arg1;
- (id)init;
- (id)planItems;
- (void)provideUserResponse:(long long)arg1 confirmationCode:(id)arg2;
- (id)remapSimLabel:(id)arg1 to:(id)arg2;
- (void)resumePlanProvisioning:(bool)arg1 userConsent:(long long)arg2;
- (void)selectPlanForData:(id)arg1;
- (void)selectPlanForVoice:(id)arg1;
- (void)selectPlansForIMessage:(id)arg1;
- (void)sendUserResponse:(unsigned long long)arg1 confirmationCode:(id)arg2;
- (void)setDanglingPlanItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)setLabelForPlan:(id)arg1 label:(id)arg2;
- (void)setPlanItems:(id)arg1;
- (void)setSupportedFlowTypes:(unsigned long long)arg1;
- (void)setUserInPurchaseFlow:(bool)arg1;
- (void)shouldShowPlanSetupWithCompletion:(id /* block */)arg1;
- (unsigned long long)supportedFlowTypes;

@end
