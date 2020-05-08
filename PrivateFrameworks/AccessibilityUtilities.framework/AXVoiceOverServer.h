/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXVoiceOverServer : AXServer

+ (id)server;

- (bool)_connectIfNecessary;
- (id)_serviceName;
- (id)currentFocusedElement;
- (id)currentRotorName;
- (bool)isBluetoothBrailleDisplayConnected;
- (bool)isBrailleInputUIShowing;
- (bool)isHandwritingInputUIShowing;
- (id)lastScreenChange;
- (id)lastSoundsPlayed;
- (id)lastSpokenContents;
- (id)lastSpokenPhrases;
- (void)performAutomationTestingCommand:(id)arg1 userInfo:(id)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;
- (bool)triggerCommand:(long long)arg1;
- (bool)triggerCommand:(long long)arg1 withArgument:(id)arg2;
- (bool)triggerGesture:(id)arg1;

@end
