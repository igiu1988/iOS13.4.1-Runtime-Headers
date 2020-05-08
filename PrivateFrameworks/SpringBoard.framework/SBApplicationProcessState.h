/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBApplicationProcessState : NSObject {
    bool  _isBeingDebugged;
    FBApplicationProcess * _process;
    FBProcessState * _processState;
}

@property (getter=isForeground, nonatomic, readonly) bool foreground;
@property (nonatomic, readonly) bool isBeingDebugged;
@property (nonatomic, readonly) int pid;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, readonly) long long taskState;
@property (nonatomic, readonly) long long visibility;

- (void).cxx_destruct;
- (id)_initWithProcess:(id)arg1 stateSnapshot:(id)arg2;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (bool)isBeingDebugged;
- (bool)isEqual:(id)arg1;
- (bool)isForeground;
- (bool)isRunning;
- (int)pid;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)taskState;
- (long long)visibility;

@end
