/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBLockScreenBatteryChargingViewController : CSCoverSheetViewControllerBase {
    CSBatteryChargingView * _chargingView;
    NSMutableArray * _connectedDevices;
    <SBLockScreenBatteryChargingViewControllerDelegate> * _delegate;
    bool  _shouldDisplayBattery;
    NSTimer * _visibilityTimer;
}

@property (nonatomic) <SBLockScreenBatteryChargingViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_clearVisibilityTimer;
- (void)_visibilityTimerFired:(id)arg1;
- (bool)batteryVisible;
- (id)chargingView;
- (void)dealloc;
- (id)delegate;
- (id)initForDisplayOfBattery:(bool)arg1;
- (void)loadView;
- (void)prepareForDismissalWithAnimation:(bool)arg1;
- (void)presentWithAnimation:(bool)arg1;
- (long long)presentationStyle;
- (void)setDelegate:(id)arg1;
- (void)showChargeLevelWithBatteryVisible:(bool)arg1;

@end
