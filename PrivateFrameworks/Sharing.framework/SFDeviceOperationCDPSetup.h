/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceOperationCDPSetup : NSObject <CDPUIDelegate> {
    int  _cdpApprovalServerState;
    CDPContext * _cdpContext;
    CDPStateController * _cdpController;
    int  _cdpSetupRequestState;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    double  _metricSeconds;
    id  _presentingViewController;
    SFSession * _sfSession;
    unsigned long long  _startTicks;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double metricSeconds;
@property (nonatomic, retain) id presentingViewController;
@property (nonatomic, retain) SFSession *sfSession;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_complete:(id)arg1;
- (void)_run;
- (int)_runCDPApprovalServerStart;
- (int)_runCDPSetupRequest;
- (void)activate;
- (id /* block */)completionHandler;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (double)metricSeconds;
- (id)presentingViewController;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setSfSession:(id)arg1;
- (id)sfSession;
- (void)uiController:(id)arg1 didPresentRootViewController:(id)arg2;

@end
