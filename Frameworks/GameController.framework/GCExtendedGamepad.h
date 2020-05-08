/* Generated by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCExtendedGamepad : NSObject {
    GCControllerButtonInput * __buttonHome;
    GCControllerButtonInput * _button0;
    GCControllerButtonInput * _button1;
    GCControllerButtonInput * _button2;
    GCControllerButtonInput * _button3;
    long long  _buttonHomeUsage;
    GCControllerButtonInput * _buttonMenu;
    long long  _buttonMenuUsage;
    GCControllerButtonInput * _buttonOptions;
    long long  _buttonOptionsUsage;
    GCController * _controller;
    GCControllerDirectionPad * _dpad;
    bool  _dpadFlippedY;
    bool  _leftFlippedY;
    GCControllerButtonInput * _leftShoulder;
    GCControllerDirectionPad * _leftThumbstick;
    GCControllerButtonInput * _leftThumbstickButton;
    GCControllerButtonInput * _leftTrigger;
    GCMotion * _motion;
    bool  _rightFlippedY;
    GCControllerButtonInput * _rightShoulder;
    GCControllerDirectionPad * _rightThumbstick;
    GCControllerButtonInput * _rightThumbstickButton;
    GCControllerButtonInput * _rightTrigger;
    id /* block */  _valueChangedHandler;
}

@property (nonatomic, retain) GCControllerButtonInput *_buttonHome;
@property (nonatomic, readonly) GCControllerButtonInput *buttonA;
@property (nonatomic, readonly) GCControllerButtonInput *buttonB;
@property (nonatomic, readonly) GCControllerButtonInput *buttonMenu;
@property (nonatomic, readonly) GCControllerButtonInput *buttonOptions;
@property (nonatomic, readonly) GCControllerButtonInput *buttonX;
@property (nonatomic, readonly) GCControllerButtonInput *buttonY;
@property (nonatomic, readonly) GCController *controller;
@property (nonatomic, readonly) GCControllerDirectionPad *dpad;
@property (nonatomic, readonly) GCControllerButtonInput *leftShoulder;
@property (nonatomic, readonly) GCControllerDirectionPad *leftThumbstick;
@property (nonatomic, readonly) GCControllerButtonInput *leftThumbstickButton;
@property (nonatomic, readonly) GCControllerButtonInput *leftTrigger;
@property (nonatomic, readonly) GCControllerButtonInput *rightShoulder;
@property (nonatomic, readonly) GCControllerDirectionPad *rightThumbstick;
@property (nonatomic, readonly) GCControllerButtonInput *rightThumbstickButton;
@property (nonatomic, readonly) GCControllerButtonInput *rightTrigger;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_buttonHome;
- (id)_motion;
- (bool)allowsRotation;
- (id)button0;
- (id)button1;
- (id)button2;
- (id)button3;
- (id)buttonA;
- (id)buttonB;
- (id)buttonMenu;
- (id)buttonOptions;
- (id)buttonX;
- (id)buttonY;
- (id)controller;
- (id)dpad;
- (void)encodeWithCoder:(id)arg1;
- (void)handleEvent:(struct __IOHIDEvent { }*)arg1;
- (void)initAuxiliaryButtonsWithInitInfo:(const struct GCExtendedGamepadInitWithControllerInitInfo { bool x1; bool x2; bool x3; struct GCExtendedGamepadElementInitInfo { bool x_4_1_1; bool x_4_1_2; } x4[16]; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 initInfo:(const struct GCExtendedGamepadInitWithControllerInitInfo { bool x1; bool x2; bool x3; struct GCExtendedGamepadElementInitInfo { bool x_4_1_1; bool x_4_1_2; } x4[16]; }*)arg2;
- (bool)isBluetoothAndUSBMirrored;
- (id)leftShoulder;
- (id)leftThumbstick;
- (id)leftThumbstickButton;
- (id)leftTrigger;
- (id)name;
- (id)productCategory;
- (bool)reportsAbsoluteDpadValues;
- (id)rightShoulder;
- (id)rightThumbstick;
- (id)rightThumbstickButton;
- (id)rightTrigger;
- (id)saveSnapshot;
- (void)setAllowsRotation:(bool)arg1;
- (void)setButton:(id)arg1 pressed:(bool)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setController:(id)arg1;
- (void)setControllerForElements;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setEnableTimeForHaptics:(bool)arg1;
- (void)setHapticMotor:(int)arg1 frequency:(float)arg2;
- (void)setLightbarColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (void)setPlayerIndex:(long long)arg1;
- (void)setReportsAbsoluteDpadValues:(bool)arg1;
- (void)setStateFromExtendedGamepad:(id)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (void)set_buttonHome:(id)arg1;
- (void)set_motion:(id)arg1;
- (id /* block */)valueChangedHandler;

@end
