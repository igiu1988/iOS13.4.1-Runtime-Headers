/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLDebugItemViewController : QLItemViewController {
    NSLayoutConstraint * _bottomConstraint;
    bool  _constraintsSetUp;
    UITextView * _logTextView;
    NSMutableDictionary * _selectorToCount;
    NSLayoutConstraint * _topConstraint;
}

- (void).cxx_destruct;
- (void)_addLog:(id)arg1 logLevel:(unsigned long long)arg2;
- (id)_attributesForLogLevel:(unsigned long long)arg1;
- (void)_encounterMethodCall:(SEL)arg1;
- (void)_encounterMethodCall:(SEL)arg1 animatedValue:(unsigned long long)arg2;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)previewWillFinishAppearing;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;

@end
