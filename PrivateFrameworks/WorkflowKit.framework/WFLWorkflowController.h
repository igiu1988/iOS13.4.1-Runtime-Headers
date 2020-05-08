/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLWorkflowController : NSObject <WFSiriUserInterface, WFWorkflowControllerDelegate> {
    NSArray * _airPlayRouteIDs;
    WFWorkflowController * _controller;
    <WFLWorkflowControllerDelegate> * _delegate;
    long long  _executionContext;
    INInteraction * _lastInteraction;
}

@property (nonatomic, readonly, copy) NSArray *airPlayRouteIDs;
@property (nonatomic, readonly) WFWorkflowController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFLWorkflowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long executionContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) INInteraction *lastInteraction;
@property (nonatomic, readonly) NSProgress *progress;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)airPlayRouteIDs;
- (void)configureIntent:(id)arg1;
- (id)controller;
- (id)delegate;
- (bool)executeIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)executionContext;
- (id)initWithWorkflow:(id)arg1;
- (bool)isRunning;
- (id)lastInteraction;
- (void)launchAppWithCompletionHandler:(id /* block */)arg1;
- (void)openInteractionInApp:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openUserActivity:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presentAlert:(id)arg1;
- (id)progress;
- (id)runSource;
- (void)runWithInput:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutionContext:(long long)arg1;
- (void)setLastInteraction:(id)arg1;
- (void)showInteractionIfNeeded:(id)arg1 requiringConfirmation:(bool)arg2 requiringAuthentication:(bool)arg3 executionStage:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)speakText:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (id)workflow;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(bool)arg3;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2;
- (void)workflowControllerWillRun:(id)arg1;

@end
