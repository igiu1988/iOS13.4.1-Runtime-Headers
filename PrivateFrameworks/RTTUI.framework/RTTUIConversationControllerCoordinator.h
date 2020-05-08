/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

@interface RTTUIConversationControllerCoordinator : NSObject {
    NSPointerArray * _conversationControllers;
    struct __CTServerConnection { } * _ctConnection;
    NSIndexPath * _inProgressRealTimeIndexPath;
    RTTUtterance * _inProgressRealTimeUtterance;
    bool  _processingUtteranceBuffer;
    NSLock * _realtimeSendLock;
    NSMutableArray * _utteranceBuffer;
    NSObject<OS_dispatch_queue> * _utteranceRequestQueue;
}

@property (nonatomic, readonly) NSIndexPath *inProgressRealTimeIndexPath;
@property (nonatomic, readonly) RTTUtterance *inProgressRealTimeUtterance;
@property (nonatomic) bool processingUtteranceBuffer;
@property (nonatomic, retain) NSMutableArray *utteranceBuffer;

+ (id)coordinator;

- (void).cxx_destruct;
- (void)_sendNewUtteranceString:(id)arg1 atIndex:(unsigned long long)arg2 forCellPath:(id)arg3 call:(id)arg4;
- (void)_updateCallActiveStatus:(bool)arg1;
- (void)addConversationController:(id)arg1;
- (id)conversationControllers;
- (id)inProgressRealTimeIndexPath;
- (id)inProgressRealTimeUtterance;
- (id)init;
- (void)processUtteranceQueue;
- (bool)processingUtteranceBuffer;
- (bool)realtimeTextDidChange:(id)arg1 forUtterance:(id)arg2 lastRowPath:(id)arg3;
- (void)sendNewUtteranceString:(id)arg1 controller:(id)arg2;
- (void)setProcessingUtteranceBuffer:(bool)arg1;
- (void)setUtteranceBuffer:(id)arg1;
- (id)utteranceBuffer;

@end
