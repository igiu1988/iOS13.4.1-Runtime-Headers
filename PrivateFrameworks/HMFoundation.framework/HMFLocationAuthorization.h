/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFLocationAuthorization : HMFObject <CLLocationManagerDelegate, HMFLogging> {
    NSBundle * _bundle;
    NSString * _bundleIdentifier;
    CLLocationManager * _internal;
    <HMFLocking> * _lock;
    NSMutableSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    __HMFLocationAuthorizationRequest * _request;
    long long  _state;
    int  _status;
}

@property (getter=isAuthorized, readonly) bool authorized;
@property (readonly) NSBundle *bundle;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) CLLocationManager *internal;
@property (getter=isMonitoring, readonly) bool monitoring;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) int status;
@property (readonly) Class superclass;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (id)logCategory;
+ (id)sharedAuthorization;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)bundle;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)init;
- (id)initWithBundle:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)internal;
- (bool)isAuthorized;
- (bool)isMonitoring;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)logIdentifier;
- (void)mark;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)requestAuthorization:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setQueue:(id)arg1;
- (int)status;
- (void)unregisterObserver:(id)arg1;

@end
