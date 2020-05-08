/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCloudSynchronizerRunConditions : NSObject {
    <MSPCloudSynchronizerRunConditionsDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _hasiCloudAccount;
    bool  _isDeviceToDeviceEncryptionReady;
    bool  _isNetworkReachable;
    NSDate * _lastErrorDate;
    double  _lastRetryDelayInSeconds;
    GEONetworkObserver * _networkObserver;
}

@property (nonatomic) <MSPCloudSynchronizerRunConditionsDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) bool hasiCloudAccount;
@property (nonatomic) bool isDeviceToDeviceEncryptionReady;
@property (nonatomic) bool isNetworkReachable;
@property (nonatomic, retain) NSDate *lastErrorDate;
@property (nonatomic) double lastRetryDelayInSeconds;
@property (nonatomic, retain) GEONetworkObserver *networkObserver;
@property (nonatomic, readonly) bool shouldRun;

- (void).cxx_destruct;
- (void)accountChanged:(id)arg1;
- (void)announceRunConditionsChanged;
- (double)currentRetryDelay;
- (double)delayRetryingAfterError:(id)arg1;
- (id)delegate;
- (id)delegateQueue;
- (bool)hasiCloudAccount;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (bool)isDeviceToDeviceEncryptionReady;
- (bool)isNetworkReachable;
- (id)lastErrorDate;
- (double)lastRetryDelayInSeconds;
- (void)networkConditionsChanged;
- (id)networkObserver;
- (void)refreshAccountStatus;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setHasiCloudAccount:(bool)arg1;
- (void)setIsDeviceToDeviceEncryptionReady:(bool)arg1;
- (void)setIsNetworkReachable:(bool)arg1;
- (void)setLastErrorDate:(id)arg1;
- (void)setLastRetryDelayInSeconds:(double)arg1;
- (void)setNetworkObserver:(id)arg1;
- (bool)shouldRetryAfterError:(id)arg1;
- (bool)shouldRun;
- (void)subscribeToAccountChangeNotifications;
- (void)subscribeToNetworkChangeNotifications;

@end