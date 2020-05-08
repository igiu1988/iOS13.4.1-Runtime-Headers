/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIEditingOverlayViewController : UIViewController {
    UIUndoGestureInteraction * _undoInteraction;
}

@property (nonatomic, retain) UIUndoGestureInteraction *undoInteraction;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)_addInteractions;
- (bool)_canShowWhileLocked;
- (void)_removeInteractions;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)loadView;
- (void)setUndoInteraction:(id)arg1;
- (id)undoInteraction;
- (void)updateEditingOverlayContainer;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
