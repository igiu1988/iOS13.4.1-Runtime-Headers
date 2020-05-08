/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBModalUIFluidDismissGestureManager : NSObject <BSTransactionObserver, PTSettingsKeyObserver, SBHomeGestureInteractionDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate> {
    SBAssistantController * _assistantController;
    SBModalUIFluidDismissGestureWorkspaceTransaction * _currentTransaction;
    SBHomeGestureInteraction * _homeGestureInteraction;
    SBHomeGestureSettings * _homeGestureSettings;
    SBTransientOverlayPresentationManager * _transientOverlayPresentationManager;
}

@property (nonatomic, readonly) SBAssistantController *assistantController;
@property (nonatomic, retain) SBModalUIFluidDismissGestureWorkspaceTransaction *currentTransaction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHomeGestureInteraction *homeGestureInteraction;
@property (nonatomic, retain) SBHomeGestureSettings *homeGestureSettings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBTransientOverlayPresentationManager *transientOverlayPresentationManager;

- (void).cxx_destruct;
- (void)_addOrRemoveGestureForCurrentSettings;
- (long long)_dismissalTypeForCurrentContext;
- (id)assistantController;
- (id)currentTransaction;
- (id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1;
- (id)homeGestureInteraction;
- (bool)homeGestureInteraction:(id)arg1 shouldReceiveTouch:(id)arg2;
- (unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2;
- (void)homeGestureInteractionBegan:(id)arg1;
- (void)homeGestureInteractionCancelled:(id)arg1;
- (void)homeGestureInteractionChanged:(id)arg1;
- (void)homeGestureInteractionEnded:(id)arg1;
- (id)homeGestureSettings;
- (id)initWithTransientOverlayPresentationManager:(id)arg1 assistantController:(id)arg2;
- (void)setCurrentTransaction:(id)arg1;
- (void)setHomeGestureInteraction:(id)arg1;
- (void)setHomeGestureSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (id)transientOverlayPresentationManager;
- (id)viewForSystemGestureRecognizer:(id)arg1;

@end
