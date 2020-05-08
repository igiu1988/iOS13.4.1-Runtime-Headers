/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceSnapshotClient : NSObject {
    NSXPCConnection * _connection;
    bool  _registrationNeeded;
    NSObject<OS_dispatch_queue> * _snapshotFileQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleActiveDeviceChangedNotification;
- (void)_handleConnectionInterrupted;
- (void)_handleCustomMonogramChangedNotification;
- (void)_handleSignificantLocationChangeNotification;
- (void)_registerIfNeeded;
- (void)_setupConnection;
- (void)_updateAllSnapshots;
- (void)createFaceForPerformanceTesting:(long long)arg1;
- (void)dealloc;
- (void)faceSnapshotChangedForKey:(id)arg1;
- (id)init;
- (void)performAfterCompletingCurrentlyPendingSnapshots:(id /* block */)arg1;
- (void)requestSnapshotOfFace:(id)arg1;
- (void)snapshotFace:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)snapshotLibrarySelectedFaceForDeviceUUID:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)synchronouslyUpdateAllSnapshots;

@end
