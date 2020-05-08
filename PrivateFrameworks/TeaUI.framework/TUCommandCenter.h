/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
 */

@interface TUCommandCenter : NSObject <TUCommandCenterType> {
    void commandCenter;
}

+ (void)setSharedCommandCenter:(id)arg1;
+ (id)sharedCommandCenter;

- (void).cxx_destruct;
- (void)addContextProvider:(id)arg1 forCommand:(id)arg2 completion:(id /* block */)arg3;
- (bool)canExecuteCommand:(id)arg1;
- (void)executeCommand:(id)arg1;
- (id)init;
- (void)removeContextProvider:(id)arg1;
- (void)removeContextProvider:(id)arg1 forCommand:(id)arg2;
- (long long)stateForCommand:(id)arg1;

@end