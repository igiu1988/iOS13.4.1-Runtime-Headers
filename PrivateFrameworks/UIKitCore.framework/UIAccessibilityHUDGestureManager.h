/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAccessibilityHUDGestureManager : NSObject <UIGestureRecognizerDelegatePrivate> {
    <UIAccessibilityHUDGestureDelegate> * _delegate;
    bool  _delegateDirectlyShowsHUD;
    bool  _isInvalidated;
    UILongPressGestureRecognizer * _recognizer;
    NSMutableArray * _subscribedConcurrentGestureRecognizers;
    UIView * _view;
    UIViewController * _viewControllerDisplayingHUD;
}

@property (nonatomic, readonly) UIGestureRecognizer *_recognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)_bestViewControllerForView;
- (void)_clearButtonItemGestureSubscriptions;
- (void)_concurrentGestureRecognizerFired:(id)arg1;
- (void)_didToggleLargeContentViewer:(id)arg1;
- (void)_dismissAccessibilityHUD;
- (bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_gestureRecognizerChanged:(id)arg1;
- (void)_invalidate;
- (id)_recognizer;
- (void)_showAccessibilityHUDItem:(id)arg1;
- (id)_subscribedConcurrentGestureRecognizers;
- (void)dealloc;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithView:(id)arg1 delegate:(id)arg2;
- (id)view;

@end