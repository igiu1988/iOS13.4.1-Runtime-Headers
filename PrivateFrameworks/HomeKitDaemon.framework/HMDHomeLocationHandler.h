/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeLocationHandler : HMFObject <HMDBatchLocationDelegate, HMDHomeMessageReceiver, NSSecureCoding> {
    HMDHome * _home;
    NSString * _isoCountryCode;
    CLLocation * _location;
    int  _locationAuthorization;
    NSDate * _locationUpdateTimestamp;
    HMFMessageDispatcher * _msgDispatcher;
    CLRegion * _region;
    NSTimeZone * _timeZone;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, retain) NSString *isoCountryCode;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) int locationAuthorization;
@property (nonatomic, readonly) HMDHomeLocationData *locationData;
@property (nonatomic, retain) NSDate *locationUpdateTimestamp;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) CLRegion *region;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (bool)mergeLocationDataForLocalHome:(id)arg1 withCloudHome:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canExtractBatchLocations;
- (void)_evaluateHomeRegionStateForCurrentDeviceLocation:(id)arg1;
- (id)_handleHomeLocationData:(id)arg1 message:(id)arg2;
- (void)_handleLocationAuthorization:(int)arg1;
- (void)_handleLocationAuthorizationChangedNotification:(id)arg1;
- (void)_handleRetrieveLocation:(id)arg1;
- (bool)_needToExtractBatchLocations;
- (void)_registerForMessages;
- (void)_registerForRegionUpdate;
- (void)_sendLocationUpdate;
- (void)_updateTimeZone:(id)arg1;
- (void)accessoriesBecomeReachable;
- (void)accessoriesBecomeUnreachable;
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;
- (void)dealloc;
- (id)description;
- (void)didDetermineBatchLocation:(id)arg1;
- (void)didDetermineLocation:(id)arg1;
- (void)didDetermineState:(long long)arg1 forRegion:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)getReachableIPAccessory:(unsigned long long*)arg1 btleAccessory:(unsigned long long*)arg2 mediaAccessory:(unsigned long long*)arg3;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDate:(id)arg1 laterThanDate:(id)arg2;
- (bool)isLocation:(id)arg1 closeToLocation:(id)arg2;
- (id)isoCountryCode;
- (id)location;
- (int)locationAuthorization;
- (id)locationData;
- (id)locationUpdateTimestamp;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)region;
- (void)runTransactionWithLocation:(id)arg1 updateTime:(id)arg2;
- (void)setHome:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationAuthorization:(int)arg1;
- (void)setLocationUpdateTimestamp:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)timeZone;
- (void)updateHomeLocation;
- (id)workQueue;

@end
