/* Generated by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerButtonInput : GCControllerElement {
    NSString * _descriptionName;
    bool  _nonAnalog;
    int  _pressCounter;
    id /* block */  _pressedChangedHandler;
    float  _value;
    id /* block */  _valueChangedHandler;
}

@property bool nonAnalog;
@property (getter=isPressed, nonatomic, readonly) bool pressed;
@property (nonatomic, copy) id /* block */ pressedChangedHandler;
@property (nonatomic, readonly) float value;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

- (void).cxx_destruct;
- (bool)_setValue:(float)arg1;
- (bool)_setValue:(float)arg1 queue:(id)arg2;
- (id)description;
- (int)getAndResetTimesPressed;
- (id)initWithDescriptionName:(id)arg1;
- (bool)isAnalog;
- (bool)isPressed;
- (bool)nonAnalog;
- (id /* block */)pressedChangedHandler;
- (void)setNonAnalog:(bool)arg1;
- (void)setPressedChangedHandler:(id /* block */)arg1;
- (void)setValue:(float)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (float)value;
- (id /* block */)valueChangedHandler;

@end
