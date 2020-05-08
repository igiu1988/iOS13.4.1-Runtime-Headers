/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSTransferFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    UIViewController<TSSetupFlowItem> * _currentViewController;
    NSMutableArray * _transferItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)needsToRunUsingMessageSession:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_getTransferPlanList;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)nextViewControllerFrom:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;

@end
