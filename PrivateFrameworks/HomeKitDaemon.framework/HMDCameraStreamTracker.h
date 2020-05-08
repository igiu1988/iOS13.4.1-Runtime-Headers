/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraStreamTracker : HMFObject <HMFLogging> {
    NSMutableSet * _currentStreamIdentifiers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableSet *currentStreamIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)sharedTracker;

- (void).cxx_destruct;
- (id)currentStreamIdentifiers;
- (void)endStream:(id)arg1;
- (id)init;
- (void)setCurrentStreamIdentifiers:(id)arg1;
- (bool)startStream:(id)arg1;
- (id)workQueue;

@end
