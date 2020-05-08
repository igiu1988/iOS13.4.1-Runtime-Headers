/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsBluetoothListeningModeButton : MediaControlsExpandableButton {
    NSSet * _availableListeningModes;
    MediaControlsHapticPlayer * _hapticPlayer;
    UIColor * _offColor;
}

@property (nonatomic, retain) NSSet *availableListeningModes;
@property (nonatomic, retain) MediaControlsHapticPlayer *hapticPlayer;
@property (nonatomic, retain) UIColor *offColor;
@property (nonatomic, retain) NSString *selectedListeningMode;

- (void).cxx_destruct;
- (void)_springAnimate:(id /* block */)arg1;
- (id)availableListeningModes;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hapticPlayer;
- (id)initForControlCenter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)offColor;
- (void)playFailedValueChangedEventHaptic;
- (void)playFailedValueChangedEventHapticWithMessage:(id)arg1;
- (void)playRequiresBothBudsInEarErrorHaptic;
- (void)playValueChangedEventHaptic;
- (id)selectedListeningMode;
- (void)setAvailableListeningModes:(id)arg1;
- (void)setHapticPlayer:(id)arg1;
- (void)setOffColor:(id)arg1;
- (void)setSelectedListeningMode:(id)arg1;
- (void)setSelectedListeningMode:(id)arg1 animated:(bool)arg2;

@end
