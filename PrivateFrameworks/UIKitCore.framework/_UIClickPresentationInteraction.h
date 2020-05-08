/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIClickPresentationInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction, UIInteraction_Internal, UIInteraction_Private, _UIClickInteractionDriverDelegate, _UIDragInteractionPresentationDelegate> {
    bool  _activatedFeedbackGeneratorForClick;
    <_UIClickInteractionDriving> * _activeDriver;
    NSMutableArray * _activeInteractionEffects;
    NSArray * _allDrivers;
    bool  _allowSimultaneousRecognition;
    UIDragInteraction * _associatedDragInteraction;
    NSString * _debugIdentifier;
    <_UIClickPresentationInteractionDelegate> * _delegate;
    struct { 
        bool shouldBegin; 
        bool previewForHighlightingAtLocation; 
        bool shouldPresent; 
        bool ended; 
        bool asyncShouldBegin; 
        bool shouldAllowRapidRestart; 
        bool shouldAllowDragAfterDismiss; 
        bool previewForCancellingDragItem; 
        bool willAnimateDragCancelWithAnimator; 
        bool dragSessionDidEndForItems; 
        bool interactionEffectForTargetedPreview; 
        bool endedForPresentation; 
    }  _delegateImplements;
    _UIRelationshipGestureRecognizer * _exclusionRelationshipGestureRecognizer;
    _UIRelationshipGestureRecognizer * _failureRelationshipGestureRecognizer;
    _UIClickPresentationFeedbackGenerator * _feedbackGenerator;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    <UIInteractionEffect> * _interactionEffect;
    UIDragInteraction * _latentAssociatedDragInteraction;
    NSArray * _overrideDrivers;
    _UIClickPresentation * _pendingPresentation;
    <_UIClickPresentationAssisting> * _presentationAssistant;
    NSString * _presentationTypeDebugString;
    NSMutableArray * _stateBreadCrumbs;
    _UIStateMachine * _stateMachine;
    long long  _statsPresentation;
    bool  _unableToClick;
    UIView * _view;
}

@property (nonatomic, readonly) unsigned long long activationMode;
@property (nonatomic, retain) <_UIClickInteractionDriving> *activeDriver;
@property (nonatomic, retain) NSMutableArray *activeInteractionEffects;
@property (nonatomic, retain) NSArray *allDrivers;
@property (nonatomic) bool allowSimultaneousRecognition;
@property (nonatomic) UIDragInteraction *associatedDragInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *debugIdentifier;
@property (nonatomic, readonly) <_UIClickPresentationInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIRelationshipGestureRecognizer *exclusionRelationshipGestureRecognizer;
@property (nonatomic, retain) _UIRelationshipGestureRecognizer *failureRelationshipGestureRecognizer;
@property (nonatomic, retain) _UIClickPresentationFeedbackGenerator *feedbackGenerator;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialLocation;
@property (nonatomic, readonly) unsigned long long inputPrecision;
@property (nonatomic, retain) <UIInteractionEffect> *interactionEffect;
@property (nonatomic, retain) UIDragInteraction *latentAssociatedDragInteraction;
@property (nonatomic, retain) NSArray *overrideDrivers;
@property (nonatomic, retain) _UIClickPresentation *pendingPresentation;
@property (nonatomic, retain) <_UIClickPresentationAssisting> *presentationAssistant;
@property (nonatomic, copy) NSString *presentationTypeDebugString;
@property (getter=_reachedForceThreshold, nonatomic, readonly) bool reachedForceThreshold;
@property (nonatomic, readonly) NSMutableArray *stateBreadCrumbs;
@property (nonatomic, retain) _UIStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)_activeEffectForPreview:(id)arg1;
- (void)_associateWithActiveDragInteraction;
- (void)_attemptDragLiftAtLocation:(struct CGPoint { double x1; double x2; })arg1 useDefaultLiftAnimation:(bool)arg2;
- (bool)_beginDragIfPossibleWithTouch:(id)arg1 previewProvider:(id /* block */)arg2 fenceHandler:(id /* block */)arg3;
- (bool)_canPerformPresentation;
- (void)_cancelAllDrivers;
- (void)_cancelWithReason:(unsigned long long)arg1 alongsideActions:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)_clickDragDriver;
- (id)_clickDriverTouch;
- (unsigned long long)_currentState;
- (void)_delegate_interactionEndedWithContext:(id)arg1;
- (bool)_delegate_shouldAllowDragAfterDismiss;
- (void)_dragInteractionPresentation:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)_dragInteractionPresentation:(id)arg1 previewForCancellingItem:(id)arg2 defaultPreview:(id)arg3 proposedPreview:(id)arg4;
- (void)_dragInteractionPresentation:(id)arg1 sessionDidEnd:(id)arg2 withoutBeginning:(bool)arg3;
- (void)_driverClickedDown;
- (void)_driverClickedUp;
- (void)_driverEnded;
- (void)_endInteractionDidComplete:(bool)arg1 completion:(id /* block */)arg2;
- (void)_endInteractionEffectIfNeeded;
- (void)_endInteractionWithContext:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handleDidTransitionToActive;
- (void)_handleDidTransitionToHighlight;
- (void)_handleDidTransitionToPossibleFromState:(unsigned long long)arg1 context:(id)arg2;
- (void)_handleDidTransitionToPreview;
- (unsigned long long)_handleTransitionToActive;
- (unsigned long long)_handleTransitionToHighlight;
- (unsigned long long)_handleTransitionToPossibleByEndingWithContext:(id)arg1;
- (unsigned long long)_handleTransitionToPreview;
- (bool)_isActive;
- (bool)_isControlledByCC;
- (bool)_isPaused;
- (void)_performPresentation;
- (void)_performPreviewPresentation;
- (void)_prepareInteractionEffect;
- (void)_prepareStateMachine;
- (Class)_primaryDriverClass;
- (bool)_reachedForceThreshold;
- (void)_refreshAllDrivers;
- (void)_setDelegate:(id)arg1;
- (bool)_supportsRapidRestart;
- (void)_viewTraitCollectionDidChange:(id)arg1;
- (unsigned long long)activationMode;
- (id)activeDriver;
- (id)activeInteractionEffects;
- (id)allDrivers;
- (bool)allowSimultaneousRecognition;
- (id)associatedDragInteraction;
- (void)beginDragWithTouch:(id)arg1 previewProvider:(id /* block */)arg2 fenceHandler:(id /* block */)arg3;
- (void)beginPanInteraction;
- (void)cancelInteraction;
- (void)clickDriver:(id)arg1 didPerformEvent:(unsigned long long)arg2;
- (void)clickDriver:(id)arg1 didUpdateHighlightProgress:(double)arg2;
- (void)clickDriver:(id)arg1 shouldBegin:(id /* block */)arg2;
- (bool)clickDriver:(id)arg1 shouldDelayGestureRecognizer:(id)arg2;
- (void)dealloc;
- (id)debugIdentifier;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (void)endPanInteraction;
- (id)exclusionRelationshipGestureRecognizer;
- (id)failureRelationshipGestureRecognizer;
- (id)feedbackGenerator;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gestureRecognizerForExclusionRelationship;
- (id)initWithDelegate:(id)arg1;
- (struct CGPoint { double x1; double x2; })initialLocation;
- (unsigned long long)inputPrecision;
- (id)interactionEffect;
- (id)latentAssociatedDragInteraction;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)overrideDrivers;
- (id)pendingPresentation;
- (void)present;
- (id)presentationAssistant;
- (id)presentationTypeDebugString;
- (void)setActiveDriver:(id)arg1;
- (void)setActiveInteractionEffects:(id)arg1;
- (void)setAllDrivers:(id)arg1;
- (void)setAllowSimultaneousRecognition:(bool)arg1;
- (void)setAssociatedDragInteraction:(id)arg1;
- (void)setDebugIdentifier:(id)arg1;
- (void)setExclusionRelationshipGestureRecognizer:(id)arg1;
- (void)setFailureRelationshipGestureRecognizer:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setInitialLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInteractionEffect:(id)arg1;
- (void)setLatentAssociatedDragInteraction:(id)arg1;
- (void)setOverrideDrivers:(id)arg1;
- (void)setPendingPresentation:(id)arg1;
- (void)setPresentationAssistant:(id)arg1;
- (void)setPresentationTypeDebugString:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (id)stateBreadCrumbs;
- (id)stateMachine;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end