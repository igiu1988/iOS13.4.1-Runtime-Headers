/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBProcess : NSObject <BSDescriptionProviding, RBSProcessIdentifier> {
    int  _appliedJetsamPriority;
    BSAuditToken * _auditToken;
    <RBBundleProperties> * _bundleProperties;
    double  _cachedProcessStartTime;
    RBSProcessHandle * _handle;
    RBProcess * _hostProcess;
    RBSProcessIdentifier * _identifier;
    RBSProcessIdentity * _identity;
    RBSProcessInstance * _instance;
    RBSProcessExitStatus * _intendedExitStatus;
    <RBJetsamBandProviding> * _jetsamProvider;
    RBLaunchdJob * _job;
    RBSProcessExitContext * _lastExitContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBProcessState * _lock_appliedState;
    RBProcessState * _lock_state;
    NSString * _logProem;
    unsigned char  _manageFlags;
    int  _pid;
    bool  _platformBinary;
    NSObject<OS_dispatch_source> * _procSource;
    double  _processStartTime;
    int  _requestedJetsamPriority;
    bool  _suspended;
    bool  _systemPreventsIdleSleep;
    bool  _systemShell;
    BSMachPortTaskNameRight * _taskNameRight;
    bool  _terminating;
    NSString * _underlyingAssertion;
    bool  _usesSocketMonitoring;
}

@property (nonatomic, readonly, copy) BSAuditToken *auditToken;
@property (getter=isBeingPtraced, nonatomic, readonly) bool beingPtraced;
@property (nonatomic, readonly) <RBBundleProperties> *bundleProperties;
@property (nonatomic, readonly) int currentJetsamPriority;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) RBSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RBProcess *hostProcess;
@property (nonatomic, readonly, copy) RBSProcessIdentifier *identifier;
@property (nonatomic, readonly, copy) RBSProcessIdentity *identity;
@property (nonatomic, readonly, copy) RBSProcessInstance *instance;
@property (nonatomic, copy) RBSProcessExitStatus *intendedExitStatus;
@property (nonatomic, readonly) RBLaunchdJob *job;
@property (nonatomic, readonly, copy) RBSProcessExitContext *lastExitContext;
@property (getter=isLifecycleManaged, nonatomic, readonly) bool lifecycleManaged;
@property (nonatomic, readonly) NSString *logProem;
@property (getter=isPlatformBinary, nonatomic, readonly) bool platformBinary;
@property (nonatomic, readonly) double processStartTime;
@property (getter=isReported, nonatomic, readonly) bool reported;
@property (nonatomic, readonly) int requestedJetsamPriority;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;
@property (getter=isSystemShell, nonatomic, readonly) bool systemShell;
@property (getter=isTerminating, nonatomic) bool terminating;
@property (nonatomic, readonly) NSString *underlyingAssertion;

- (void).cxx_destruct;
- (void)_applyJetsamLenientModeState:(bool)arg1;
- (void)_applyState:(id)arg1;
- (id)_initWithInstance:(id)arg1 taskNameRight:(id)arg2 job:(id)arg3 bundleProperties:(id)arg4 jetsamBandProvider:(id)arg5 initialState:(id)arg6 hostProcess:(id)arg7 properties:(id)arg8 systemPreventsIdleSleep:(bool)arg9;
- (id)_lock_allowedLockedFilePaths;
- (void)_lock_applyCPULimits;
- (void)_lock_applyCurrentStateIfPossible;
- (void)_lock_applyGPU;
- (void)_lock_applyJetsamLenientMode;
- (void)_lock_applyJetsamPriority;
- (void)_lock_applyRole;
- (void)_lock_disableCPULimits;
- (id)_lock_lockedFilePathsIgnoringAllowed;
- (void)_lock_restoreCPULimitDefaults;
- (void)_lock_resume;
- (void)_lock_resumeCPUMonitoring;
- (void)_lock_setCPULimits:(struct { int x1; int x2; }*)arg1 violationPolicy:(unsigned long long)arg2;
- (void)_lock_shutdownSockets;
- (void)_lock_suspend;
- (bool)_lock_terminateWithContext:(id)arg1;
- (bool)_sendSignal:(int)arg1;
- (void)_systemPreventIdleSleepStateDidChange:(bool)arg1;
- (id)auditToken;
- (id)bundleProperties;
- (int)currentJetsamPriority;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)handle;
- (id)hostProcess;
- (id)identifier;
- (id)identity;
- (id)init;
- (id)instance;
- (id)intendedExitStatus;
- (void)invalidate;
- (void)invokeHandlerOnProcessDeath:(id /* block */)arg1 onQueue:(id)arg2;
- (bool)isBeingPtraced;
- (bool)isLifecycleManaged;
- (bool)isPlatformBinary;
- (bool)isReported;
- (bool)isSuspended;
- (bool)isSystemShell;
- (bool)isTerminating;
- (id)job;
- (id)lastExitContext;
- (id)logProem;
- (bool)matchesProcess:(id)arg1;
- (id)processPredicate;
- (double)processStartTime;
- (int)rbs_pid;
- (int)requestedJetsamPriority;
- (void)setIntendedExitStatus:(id)arg1;
- (void)setTerminating:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)terminateWithContext:(id)arg1;
- (id)underlyingAssertion;

@end
