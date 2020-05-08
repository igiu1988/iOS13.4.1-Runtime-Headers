/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSceneWatchdogProvider : NSObject <FBProcessWatchdogProviding> {
    FBApplicationProcessWatchdogPolicy * _defaultProcessWatchdogProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultSceneWatchdogProvider;

- (void).cxx_destruct;
- (id)_scaleProvisions:(id)arg1 byFactor:(double)arg2;
- (id)init;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;

@end
