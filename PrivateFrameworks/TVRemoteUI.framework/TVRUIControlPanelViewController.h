/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface TVRUIControlPanelViewController : UIViewController <TVRUIRemoteViewProvider, _TVRUIEventDelegate> {
    UIView * _backgroundView;
    <_TVRUIEventDelegate> * _buttonActionsDelegate;
    _TVRUIButtonPanelView * _genericButtonPanel;
    _TVRUIButtonPanelView * _legacyButtonPanel;
    _TVRUIButtonPanelView * _legacyPanelWithKeyboardButton;
    _TVRUIButtonPanelView * _panelWithKeyboardButton;
    <TVRUIDevice> * _remoteDevice;
    _TVRSiriHaptic * _siriHaptic;
    <TVRUIStyleProvider> * _styleProvider;
    _TVRUIButtonPanelView * _touchpadButtonPanel;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic) <_TVRUIEventDelegate> *buttonActionsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _TVRUIButtonPanelView *genericButtonPanel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _TVRUIButtonPanelView *legacyButtonPanel;
@property (nonatomic, retain) _TVRUIButtonPanelView *legacyPanelWithKeyboardButton;
@property (nonatomic, retain) _TVRUIButtonPanelView *panelWithKeyboardButton;
@property (nonatomic, retain) <TVRUIDevice> *remoteDevice;
@property (nonatomic, retain) _TVRSiriHaptic *siriHaptic;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) _TVRUIButtonPanelView *touchpadButtonPanel;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_createButtonPanelWithKeyboard;
- (void)_createGenericControlButtonPanel;
- (void)_createLegacyButtonPanel;
- (void)_createLegacyPanelWithkeyboard;
- (void)_createTouchpadButtonPanel;
- (id)_createViewWithPrimaryButtonType:(long long)arg1 leftButtonTypes:(id)arg2 rightButtonTypes:(id)arg3;
- (void)_transitionToButtonPanelAndCreateIfNeeded;
- (void)_transitionToPanelView:(id)arg1;
- (void)_transitionToTouchpadPanelAndCreateIfNeeded;
- (id)backgroundView;
- (id)buttonActionsDelegate;
- (void)disableControls;
- (void)disableSearchButton;
- (void)enableControls;
- (void)enableSearchButton;
- (id)genericButtonPanel;
- (void)hideKeyboardButton;
- (id)legacyButtonPanel;
- (id)legacyPanelWithKeyboardButton;
- (id)panelWithKeyboardButton;
- (id)remoteDevice;
- (void)setBackgroundView:(id)arg1;
- (void)setButtonActionsDelegate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setGenericButtonPanel:(id)arg1;
- (void)setLegacyButtonPanel:(id)arg1;
- (void)setLegacyPanelWithKeyboardButton:(id)arg1;
- (void)setPanelWithKeyboardButton:(id)arg1;
- (void)setRemoteDevice:(id)arg1;
- (void)setSiriHaptic:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTouchpadButtonPanel:(id)arg1;
- (void)showKeyboardButton;
- (id)siriHaptic;
- (id)styleProvider;
- (id)touchpadButtonPanel;
- (void)transitonToViewForDeviceType:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
