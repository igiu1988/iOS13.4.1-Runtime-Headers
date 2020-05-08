/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBIndirectPanGestureRecognizer : UIGestureRecognizer <SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding> {
    unsigned long long  _activatedEdge;
    double  _activationRecognitionDistance;
    UIEvent * _currentHoverEvent;
    unsigned long long  _currentInputType;
    UITouch * _currentTouch;
    unsigned long long  _edges;
    unsigned long long  _endReason;
    NSMutableSet * _gestureRecognizersToDelayOnMouseActivation;
    NSValue * _gestureStartLocation;
    BSMonotonicReferenceTime * _lastKnownMouseEventTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastKnownPoint;
    BSMonotonicReferenceTime * _lastMouseActivationTimestamp;
    BSMonotonicReferenceTime * _mouseEnteredNearEdgeRegionTimestamp;
    double  _mouseHysteresis;
    NSTimer * _mouseIdleTimer;
    <SBIndirectPanGestureRecognizerOrientationProviding> * _orientationProvider;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    bool  _pausedUntilTouchedUpOrMovedAwayFromEdge;
    bool  _shouldActivateWithThreshold;
    bool  _shouldCancelAfterMovingAwayFromEdge;
    bool  _shouldInvertXAxis;
    bool  _shouldInvertYAxis;
    bool  _shouldRequireGestureToStartAtEdge;
    bool  _shouldSwitchAxes;
    SBTouchHistory * _touchHistory;
    double  _trackpadHysteresis;
    id /* block */  _translationAdjustmentBlock;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationWithinHysteresisRange;
}

@property (nonatomic) unsigned long long activatedEdge;
@property (nonatomic) double activationRecognitionDistance;
@property (nonatomic, retain) UIEvent *currentHoverEvent;
@property (nonatomic, readonly) unsigned long long currentInputType;
@property (nonatomic, retain) UITouch *currentTouch;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSystemGestureRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edges;
@property (nonatomic, readonly) unsigned long long endReason;
@property (nonatomic, retain) NSMutableSet *gestureRecognizersToDelayOnMouseActivation;
@property (nonatomic, retain) NSValue *gestureStartLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BSMonotonicReferenceTime *lastKnownMouseEventTimestamp;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastKnownPoint;
@property (nonatomic, retain) BSMonotonicReferenceTime *lastMouseActivationTimestamp;
@property (nonatomic, retain) BSMonotonicReferenceTime *mouseEnteredNearEdgeRegionTimestamp;
@property (nonatomic) double mouseHysteresis;
@property (nonatomic, retain) NSTimer *mouseIdleTimer;
@property (nonatomic) <SBIndirectPanGestureRecognizerOrientationProviding> *orientationProvider;
@property (nonatomic) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic) bool pausedUntilTouchedUpOrMovedAwayFromEdge;
@property (nonatomic) bool shouldActivateWithThreshold;
@property (nonatomic) bool shouldCancelAfterMovingAwayFromEdge;
@property (nonatomic) bool shouldInvertXAxis;
@property (nonatomic) bool shouldInvertYAxis;
@property (nonatomic) bool shouldRequireGestureToStartAtEdge;
@property (nonatomic) bool shouldSwitchAxes;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBTouchHistory *touchHistory;
@property (nonatomic) double trackpadHysteresis;
@property (nonatomic, copy) id /* block */ translationAdjustmentBlock;
@property (nonatomic) struct CGPoint { double x1; double x2; } translationWithinHysteresisRange;

- (void).cxx_destruct;
- (unsigned long long)_axisForEdge:(unsigned long long)arg1;
- (bool)_computeShouldSwitchAxes;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2 toView:(id)arg3;
- (unsigned long long)_edgeForPointerModelLocation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2 inset:(double)arg3;
- (bool)_hasTranslationReachedThreshold:(double)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2 forEdge:(unsigned long long)arg3;
- (void)_hoverEntered:(id)arg1 withEvent:(id)arg2;
- (void)_hoverExited:(id)arg1 withEvent:(id)arg2;
- (void)_hoverMoved:(id)arg1 withEvent:(id)arg2;
- (bool)_isTrackpadEvent:(id)arg1;
- (bool)_isVelocityOrthogonalToAxis:(struct CGPoint { double x1; double x2; })arg1 axis:(unsigned long long)arg2;
- (void)_mouseIdleTimerElapsed;
- (void)_mouseIdleTimerFired:(id)arg1;
- (bool)_pointerEventHasNonZeroOffset:(id)arg1 axis:(unsigned long long)arg2;
- (bool)_pointerEventRepresentsTrackpadTouchUp:(id)arg1;
- (struct __IOHIDEvent { }*)_pointerHIDSubEventFromEvent:(struct __IOHIDEvent { }*)arg1;
- (struct CGPoint { double x1; double x2; })_pointerModelLocation;
- (void)_resetTranslationState;
- (bool)_shouldReceiveEvent:(id)arg1;
- (void)_updateTranslationWithPointerEventAttributes:(id)arg1 activeEdge:(unsigned long long)arg2;
- (bool)_wantsHoverEvents;
- (unsigned long long)activatedEdge;
- (double)activationRecognitionDistance;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint { double x1; double x2; })averageTouchVelocityOverTimeDuration:(double)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)containerView;
- (id)currentHoverEvent;
- (unsigned long long)currentInputType;
- (id)currentTouch;
- (unsigned long long)edges;
- (unsigned long long)endReason;
- (id)gestureRecognizersToDelayOnMouseActivation;
- (id)gestureStartLocation;
- (double)hysteresisForInputType:(unsigned long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 edges:(unsigned long long)arg3;
- (id)lastKnownMouseEventTimestamp;
- (struct CGPoint { double x1; double x2; })lastKnownPoint;
- (id)lastMouseActivationTimestamp;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)mouseEnteredNearEdgeRegionTimestamp;
- (double)mouseHysteresis;
- (id)mouseIdleTimer;
- (id)orientationProvider;
- (struct CGPoint { double x1; double x2; })origin;
- (bool)pausedUntilTouchedUpOrMovedAwayFromEdge;
- (double)peakSpeed;
- (void)reset;
- (void)setActivatedEdge:(unsigned long long)arg1;
- (void)setActivationRecognitionDistance:(double)arg1;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setCurrentHoverEvent:(id)arg1;
- (void)setCurrentTouch:(id)arg1;
- (void)setEdges:(unsigned long long)arg1;
- (void)setGestureRecognizersToDelayOnMouseActivation:(id)arg1;
- (void)setGestureStartLocation:(id)arg1;
- (void)setHysteresis:(double)arg1 forInputType:(unsigned long long)arg2;
- (void)setLastKnownMouseEventTimestamp:(id)arg1;
- (void)setLastKnownPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastMouseActivationTimestamp:(id)arg1;
- (void)setMouseEnteredNearEdgeRegionTimestamp:(id)arg1;
- (void)setMouseHysteresis:(double)arg1;
- (void)setMouseIdleTimer:(id)arg1;
- (void)setOrientationProvider:(id)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPausedUntilTouchedUpOrMovedAwayFromEdge:(bool)arg1;
- (void)setShouldActivateWithThreshold:(bool)arg1;
- (void)setShouldCancelAfterMovingAwayFromEdge:(bool)arg1;
- (void)setShouldInvertXAxis:(bool)arg1;
- (void)setShouldInvertYAxis:(bool)arg1;
- (void)setShouldRequireGestureToStartAtEdge:(bool)arg1;
- (void)setShouldSwitchAxes:(bool)arg1;
- (void)setTouchHistory:(id)arg1;
- (void)setTrackpadHysteresis:(double)arg1;
- (void)setTranslationAdjustmentBlock:(id /* block */)arg1;
- (void)setTranslationWithinHysteresisRange:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldActivateWithThreshold;
- (bool)shouldCancelAfterMovingAwayFromEdge;
- (void)shouldDelayOtherSystemGesturesOnMouseActivation:(id)arg1;
- (bool)shouldInvertXAxis;
- (bool)shouldInvertYAxis;
- (bool)shouldRequireGestureToStartAtEdge;
- (bool)shouldSwitchAxes;
- (id)touchHistory;
- (double)trackpadHysteresis;
- (id /* block */)translationAdjustmentBlock;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })translationWithinHysteresisRange;
- (void)updateTouchHistoryWithTouches:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;

@end