/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBWindowHidingManager : NSObject <SBSceneHandleObserver> {
    struct SBWindowLevelRange_struct { 
        double start; 
        double end; 
    }  _hideRange;
    NSMapTable * _hidingContextMap;
    <UIScenePresenter> * _keyboardPresenter;
    SBSceneHandle * _keyboardSceneHandle;
    NSMapTable * _windowStateMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (void)start;

- (void).cxx_destruct;
- (void)_adjustWindowsForActiveHideRange;
- (void)_captureWindow:(id)arg1;
- (bool)_isHidingWindowLevel:(double)arg1;
- (bool)_isHidingWindows;
- (void)_recomputeHideRangeAndAdjustWindows;
- (void)_releaseWindow:(id)arg1;
- (void)_takeNoteOfWindow:(id)arg1 onScreen:(id)arg2;
- (id)dumpHidingState;
- (id)dumpKnownWindows;
- (id)init;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)setAlpha:(double)arg1 forWindow:(id)arg2;
- (void)startHidingWindowsExclusivelyFromLevel:(double)arg1 toLevel:(double)arg2 forContext:(id)arg3 reason:(id)arg4;
- (void)stopHidingWindowsForContext:(id)arg1;

@end
