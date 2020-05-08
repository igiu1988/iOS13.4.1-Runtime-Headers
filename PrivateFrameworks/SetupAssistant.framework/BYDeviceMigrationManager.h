/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYDeviceMigrationManager : NSObject {
    unsigned long long  _bytesTransferred;
    long long  _cancellationCause;
    MBDeviceTransferConnectionInfo * _connectionInfo;
    NSHashTable * _delegates;
    struct __MKBAssertion { } * _deviceLockAssertion;
    MBDeviceTransferTask * _deviceTransferTask;
    double  _durationOfRestore;
    double  _durationOfTransfer;
    NSError * _error;
    RPFileTransferSession * _fileTransferSession;
    unsigned long long  _filesTransferred;
    bool  _migrating;
    NSObject<OS_dispatch_queue> * _migrationQueue;
    int  _passcodeChangeNotificationToken;
    BKSProcessAssertion * _processAssertion;
    MBDeviceTransferProgress * _progressInfo;
    bool  _willMigrate;
}

@property (nonatomic) unsigned long long bytesTransferred;
@property (nonatomic) long long cancellationCause;
@property (nonatomic, retain) MBDeviceTransferConnectionInfo *connectionInfo;
@property (nonatomic, retain) NSHashTable *delegates;
@property (nonatomic) struct __MKBAssertion { }*deviceLockAssertion;
@property (nonatomic, retain) MBDeviceTransferTask *deviceTransferTask;
@property (nonatomic) double durationOfRestore;
@property (nonatomic) double durationOfTransfer;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) RPFileTransferSession *fileTransferSession;
@property (nonatomic) unsigned long long filesTransferred;
@property (getter=isMigrating, nonatomic) bool migrating;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *migrationQueue;
@property (nonatomic) int passcodeChangeNotificationToken;
@property (nonatomic, retain) BKSProcessAssertion *processAssertion;
@property (nonatomic, retain) MBDeviceTransferProgress *progressInfo;
@property (nonatomic) bool willMigrate;

+ (id)createDeviceTransferTask:(id)arg1;

- (void).cxx_destruct;
- (bool)_hasAssertions;
- (void)_reacquireDeviceLockAssertion;
- (struct __MKBAssertion { }*)acquireDeviceLockAssertion;
- (void)addDelegate:(id)arg1;
- (unsigned long long)bytesTransferred;
- (void)cancelDeviceTransferTask;
- (void)cancelWithCause:(long long)arg1;
- (long long)cancellationCause;
- (id)connectionInfo;
- (void)dealloc;
- (id)delegates;
- (struct __MKBAssertion { }*)deviceLockAssertion;
- (id)deviceTransferTask;
- (void)didCancel;
- (void)didCompleteWithError:(id)arg1;
- (double)durationOfRestore;
- (double)durationOfTransfer;
- (id)error;
- (id)fileTransferSession;
- (unsigned long long)filesTransferred;
- (id)initWithFileTranferSession:(id)arg1;
- (bool)isMigrating;
- (id)migrationQueue;
- (int)passcodeChangeNotificationToken;
- (id)processAssertion;
- (id)progressInfo;
- (void)releaseAssertions;
- (void)removeDelegate:(id)arg1;
- (bool)requiresProcessAssertion;
- (void)restartDeviceTransferTask:(id)arg1;
- (void)setBytesTransferred:(unsigned long long)arg1;
- (void)setCancellationCause:(long long)arg1;
- (void)setConnectionInfo:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setDeviceLockAssertion:(struct __MKBAssertion { }*)arg1;
- (void)setDeviceTransferTask:(id)arg1;
- (void)setDurationOfRestore:(double)arg1;
- (void)setDurationOfTransfer:(double)arg1;
- (void)setError:(id)arg1;
- (void)setFileTransferSession:(id)arg1;
- (void)setFilesTransferred:(unsigned long long)arg1;
- (void)setMigrating:(bool)arg1;
- (void)setMigrationQueue:(id)arg1;
- (void)setPasscodeChangeNotificationToken:(int)arg1;
- (void)setProcessAssertion:(id)arg1;
- (void)setProgressInfo:(id)arg1;
- (void)setWillMigrate:(bool)arg1;
- (void)start;
- (void)startDeviceTransferTask;
- (bool)takeAssertions;
- (bool)willMigrate;

@end