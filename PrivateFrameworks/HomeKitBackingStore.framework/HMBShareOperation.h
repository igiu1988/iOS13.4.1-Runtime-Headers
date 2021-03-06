/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBShareOperation : HMFOperation <HMFLogging> {
    id /* block */  _block;
    HMBCloudZone * _cloudZone;
    NAFuture * _future;
}

@property (readonly, copy) id /* block */ block;
@property (readonly) HMBCloudZone *cloudZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NAFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)cancelWithError:(id)arg1;
- (id)cloudZone;
- (id)future;
- (id)initWithCloudZone:(id)arg1 block:(id /* block */)arg2;
- (void)main;

@end
