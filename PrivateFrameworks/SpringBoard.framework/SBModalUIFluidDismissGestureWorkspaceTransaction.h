/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBModalUIFluidDismissGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction {
    SBAssistantController * _assistantController;
    SBAssistantRootViewController * _assistantRootViewController;
    SBMainWorkspaceTransaction * _currentTransaction;
    UINotificationFeedbackGenerator * _dismissalFeedbackGenerator;
    long long  _dismissalType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dismissingViewTouchOffset;
    bool  _hasPreservedInputViews;
    bool  _isDismissing;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalCenter;
    SBAppSwitcherSettings * _settings;
    SBAppStatusBarSettingsAssertion * _statusBarAssertion;
    SBTransientOverlayPresentationManager * _transientOverlayPresentationManager;
    SBTransientOverlayViewController * _transientOverlayViewController;
}

@property (nonatomic, retain) SBAssistantController *assistantController;
@property (nonatomic, retain) SBMainWorkspaceTransaction *currentTransaction;
@property (nonatomic, readonly) long long dismissalType;

- (void).cxx_destruct;
- (double)_backgroundWeightingForGestureProgress;
- (void)_begin;
- (void)_beginWithGesture:(id)arg1;
- (bool)_canBeInterrupted;
- (void)_cleanupHierarchyForDismissal:(bool)arg1;
- (double)_clientAnimationsDelay;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_dismissClientAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)_dismissalFeedbackGenerator;
- (void)_finishInteractionAndDismiss:(bool)arg1 animated:(bool)arg2;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)_finishWithGesture:(id)arg1;
- (double)_hapticDelay;
- (id)_layoutSettings;
- (long long)_notificationFeedbackType;
- (double)_scaleForDismissal;
- (double)_scaleForGestureProgress;
- (void)_setFluidDismissalState:(id)arg1;
- (bool)_shouldDismissImmmediatelyAtFullGestureProgress;
- (double)_swipeUpGestureProgress;
- (double)_swipeUpGestureTranslation;
- (void)_updateDismissingViewLayoutAndStyleForGesture;
- (void)_updateWithGesture:(id)arg1;
- (id)_viewForGesture;
- (double)_yOffsetForGestureProgress;
- (double)_zoomOutDelay;
- (id)assistantController;
- (bool)canInterruptForTransitionRequest:(id)arg1;
- (id)currentTransaction;
- (long long)dismissalType;
- (id)initWithTransitionRequest:(id)arg1 assistantController:(id)arg2 dismissalType:(long long)arg3;
- (void)setAssistantController:(id)arg1;
- (void)setCurrentTransaction:(id)arg1;
- (void)systemGestureStateChanged:(id)arg1;

@end
