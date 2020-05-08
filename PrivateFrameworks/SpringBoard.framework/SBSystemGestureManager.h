/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSystemGestureManager : NSObject <BSDescriptionProviding, UIGestureRecognizerDelegate> {
    FBSDisplayIdentity * _displayIdentity;
    NSMutableDictionary * _gestureToType;
    NSSet * _gestureTypesAllowedWhileDisableAssertionsExist;
    NSMutableSet * _gesturesDisabledAssertions;
    NSSet * _gesturesPreventedByStylus;
    NSMutableSet * _recognizingTouchGestures;
    UIGestureRecognizer * _stylusPriorityRecognizer;
    bool  _systemGesturesDisabledForAccessibility;
    NSMutableSet * _touchGestures;
    NSMutableDictionary * _typeToGesture;
    NSMutableDictionary * _typeToState;
}

@property (getter=isAnyTouchGestureRunning, nonatomic, readonly) bool anyTouchGestureRunning;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *gesturesPreventedByStylus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=areSystemGesturesDisabledForAccessibility, nonatomic) bool systemGesturesDisabledForAccessibility;

+ (id)mainDisplayManager;

- (void).cxx_destruct;
- (void)_disableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;
- (void)_enableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;
- (void)_evaluateEnablement;
- (id)_initWithDisplayIdentity:(id)arg1;
- (bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;
- (bool)_isTouchGestureWithType:(unsigned long long)arg1;
- (long long)_recognitionEventForTouchGestureType:(unsigned long long)arg1;
- (bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (void)_systemGestureChanged:(id)arg1;
- (id)acquireSystemGestureDisableAssertionForReason:(id)arg1 exceptSystemGestureTypes:(id)arg2;
- (void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2;
- (bool)areSystemGesturesDisabledForAccessibility;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)gestureRecognizerOfType:(unsigned long long)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)gestureRecognizerOfType:(unsigned long long)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)gesturesPreventedByStylus;
- (void)ignoreScreenEdgeTouchWithIdentifier:(unsigned int)arg1;
- (id)init;
- (bool)isAnyTouchGestureRunning;
- (bool)isGestureWithTypeAllowed:(unsigned long long)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)setGesturesPreventedByStylus:(id)arg1;
- (void)setSystemGesturesDisabledForAccessibility:(bool)arg1;
- (bool)shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)windowForSystemGestures;

@end
