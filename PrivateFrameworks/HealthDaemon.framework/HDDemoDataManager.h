/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataManager : NSObject <HDHealthDaemonReadyObserver> {
    NSObject<OS_dispatch_queue> * _demoDataQueue;
    HDDemoDataGenerator * _generator;
    HDProfile * _profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDDemoDataGenerator *generator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_generateDemoDataIfNeeded;
- (void)daemonReady:(id)arg1;
- (id)generator;
- (id)initWithProfile:(id)arg1;
- (id)profile;

@end
