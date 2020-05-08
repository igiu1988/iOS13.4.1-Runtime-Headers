/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

@interface SRSensorReader : NSObject <SRAuthorizationClientDelegate, SRDaemonNotificationDelegate> {
    SRAuthorizationClient * _authorizationClient;
    unsigned long long  _authorizationState;
    NSString * _bundleId;
    bool  _bypassHoldingPeriod;
    NSXPCConnection * _connection;
    bool  _connectionDidInterrupt;
    bool  _connectionDidInvalidate;
    SRDaemonNotification * _daemonNotification;
    SRSensorDatastore * _datastore;
    <SRSensorReaderDelegate> * _delegate;
    NSDictionary * _deviceDetails;
    Class  _exportingSampleClass;
    NSDictionary * _nextDatastoreFiles;
    Class  _sampleClass;
    NSString * _sensor;
}

@property (retain) SRAuthorizationClient *authorizationClient;
@property (nonatomic) unsigned long long authorizationState;
@property (getter=isAuthorized, readonly) bool authorized;
@property (copy) NSString *bundleId;
@property (nonatomic) bool bypassHoldingPeriod;
@property (retain) NSXPCConnection *connection;
@property bool connectionDidInterrupt;
@property bool connectionDidInvalidate;
@property (readonly, retain) SRSensorDatastore *datastore;
@property (readonly, copy) NSString *debugDescription;
@property <SRSensorReaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double earliestEligibleTime;
@property (nonatomic, readonly) Class exportingSampleClass;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *nextDatastoreFiles;
@property (nonatomic, readonly) Class sampleClass;
@property (copy) NSString *sensor;
@property (readonly) Class superclass;

+ (void)authorizationRequestStatusForBundle:(id)arg1 sensors:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)clientInterface;
+ (id)connectionToDaemon;
+ (id /* block */)createExportDataWithCompletionHandler:(id /* block */)arg1;
+ (void)initialize;
+ (id)new;
+ (id)remoteInterface;
+ (void)requestAuthorizationForBundle:(id)arg1 sensors:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)requestAuthorizationForSensors:(id)arg1;
+ (void)requestAuthorizationForSensors:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)authorizationClient;
- (unsigned long long)authorizationState;
- (id)authorizedServices;
- (void)authorizedServicesDidChange:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)bundleId;
- (bool)bypassHoldingPeriod;
- (id)connection;
- (bool)connectionDidInterrupt;
- (bool)connectionDidInvalidate;
- (void)continueFetch:(id)arg1;
- (void)continueFetchRequest:(id)arg1 from:(double)arg2 to:(double)arg3 withDatastoreFiles:(id)arg4 callback:(id /* block */)arg5;
- (void)daemonNotificationDaemonDidStart:(id)arg1;
- (id)datastore;
- (void)dealloc;
- (id)delegate;
- (void)didCompleteFetch:(id)arg1;
- (void)didFetchDevices:(id)arg1;
- (double)earliestEligibleTime;
- (Class)exportingSampleClass;
- (void)fetch:(id)arg1;
- (void)fetchDevices;
- (void)fetchDevices:(id /* block */)arg1;
- (void)fetchDevicesDidFailWithError:(id)arg1;
- (void)fetchSampleBytes:(id)arg1 sampleCallback:(id /* block */)arg2;
- (void)fetchSampleBytesFrom:(double)arg1 to:(double)arg2 inSegment:(id)arg3 fetchRequest:(id)arg4 sampleCallback:(id /* block */)arg5;
- (bool)fetchingRequest:(id)arg1 didFetchResult:(id)arg2;
- (void)fetchingRequest:(id)arg1 failedWithError:(id)arg2;
- (id)init;
- (id)initWithSensor:(id)arg1;
- (id)initWithSensor:(id)arg1 bundle:(id)arg2;
- (id)initWithSensor:(id)arg1 xpcConnection:(id)arg2 daemonNotification:(id)arg3 authorizationClient:(id)arg4 bundleId:(id)arg5;
- (bool)isAuthorized;
- (id)nextDatastoreFiles;
- (void)registerWithDaemonIfNeededForFetchRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)registerWithDaemonIfNeededForFetchRequest:(id)arg1 synchronously:(bool)arg2 reply:(id /* block */)arg3;
- (void)registerWithDaemonIfNeededForReadingWithReply:(id /* block */)arg1;
- (void)resetDatastoreFiles:(id)arg1;
- (Class)sampleClass;
- (id)sensor;
- (void)sensorReaderDidStopRecording;
- (void)sensorReaderWillStartRecording;
- (void)setAuthorizationClient:(id)arg1;
- (void)setAuthorizationState:(unsigned long long)arg1;
- (void)setBundleId:(id)arg1;
- (void)setBypassHoldingPeriod:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionDidInterrupt:(bool)arg1;
- (void)setConnectionDidInvalidate:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExportingSampleClass:(Class)arg1;
- (void)setNextDatastoreFiles:(id)arg1;
- (void)setSampleClass:(Class)arg1;
- (void)setSensor:(id)arg1;
- (void)setupConnection;
- (void)startReadingForDevice:(id)arg1 reply:(id /* block */)arg2;
- (void)startRecording;
- (void)startRecordingFailedWithError:(id)arg1;
- (void)startRecordingWithCompletionHandler:(id /* block */)arg1;
- (void)stopRecording;
- (void)stopRecordingFailedWithError:(id)arg1;
- (void)stopRecordingWithCompletionHandler:(id /* block */)arg1;

@end
