/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
 */

@interface IAMModalTarget : NSObject <IAMMessageTarget, IAMWebMessagePresentationCoordinatorDelegate> {
    bool  _isPresentingMessage;
    IAMMessageCoordinator * _messageCoordinator;
    IAMMessage * _priorityMessage;
    NSString * _targetIdentifier;
    IAMWebMessagePresentationCoordinator * _webMessagePresentationCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *targetIdentifier;

+ (void)initialize;
+ (bool)isAnyModalTargetPresentingMessage;

- (void).cxx_destruct;
- (void)_presentFromMessageEntry:(id)arg1;
- (void)dealloc;
- (id)initWithMessageCoordinator:(id)arg1 targetIdentifier:(id)arg2;
- (void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3;
- (id)targetIdentifier;
- (void)unregister;
- (id)viewControllerForModalPresentationUsingCoordinator:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFail:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFinishPresentation:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidLoad:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidReportEvent:(id)arg1 event:(id)arg2;
- (void)webMessagePresentationCoordinatorWebMessageDidRequestAction:(id)arg1 actionConfiguration:(id)arg2;

@end
