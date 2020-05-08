/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFBackgroundShortcutRunnerHostExtensionContext : NSExtensionContext <WFOutOfProcessWorkflowControllerHost> {
    <WFOutOfProcessWorkflowControllerHost> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFOutOfProcessWorkflowControllerHost> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)workflowDidFinishRunningWithError:(id)arg1 cancelled:(bool)arg2;
- (void)workflowDidStart;

@end
