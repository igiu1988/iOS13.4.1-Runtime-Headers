/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface BTLEScanner : HMFObject <HAPBTLECentralManagerDelegate, HMFTimerDelegate> {
    HAPBTLECentralManager * centralManager;
    CUBLEScanner * cubleScanner;
    HMDAccessoryQueues * scanQueue;
    HMFTimer * scanTimer;
    NSObject<OS_dispatch_queue> * workQueue;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, retain) HAPBTLECentralManager *centralManager;
@property (nonatomic, retain) CUBLEScanner *cubleScanner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, retain) HMDAccessoryQueues *scanQueue;
@property (nonatomic, retain) HMFTimer *scanTimer;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)initializeScanner;
+ (id)sharedScanLock;

- (void).cxx_destruct;
- (void)_checkCanScan;
- (void)_flushQueue;
- (void)_stopScan;
- (void)_stopTimer;
- (id)centralManager;
- (id)cubleScanner;
- (void)didUpdateBTLEState:(long long)arg1;
- (id)init;
- (id)scanQueue;
- (id)scanTimer;
- (void)setCentralManager:(id)arg1;
- (void)setCubleScanner:(id)arg1;
- (void)setScanQueue:(id)arg1;
- (void)setScanTimer:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)startScan:(id)arg1 timeout:(double)arg2;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
