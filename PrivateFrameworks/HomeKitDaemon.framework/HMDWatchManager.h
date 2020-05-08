/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWatchManager : HMFObject <HMFLogging, IDSServiceDelegate> {
    NSArray * _connectedWatches;
    <HMFLocking> * _lock;
    bool  _pairedWithWatch;
    NSObject<OS_dispatch_queue> * _queue;
    IDSService * _service;
}

@property (readonly, copy) NSArray *connectedWatches;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPairedWithWatch, readonly) bool pairedWithWatch;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *watches;

+ (bool)isCompatibleWatchDevice:(id)arg1;
+ (id)logCategory;
+ (id)sharedManager;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)__initializeConnectedDevices;
- (id)attributeDescriptions;
- (id)connectedWatchFromDeviceID:(id)arg1;
- (id)connectedWatches;
- (id)init;
- (bool)isPairedWithWatch;
- (id)service;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (id)watches;

@end
