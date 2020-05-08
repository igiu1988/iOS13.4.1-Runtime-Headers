/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanManagerDelegate : NSObject <CTCellularPlanClientDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)carrierInfoDidUpdate;
- (void)localPlanInfoDidUpdate:(id)arg1;
- (void)pendingTransferPlanInfoDidUpdate;
- (void)planInfoDidUpdate;
- (void)remoteProvisioningDidBecomeAvailable;

@end
