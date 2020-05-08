/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKOverlayView : UIView {
    bool  _deferWasMovedToSuperviewUntilMoveToWindow;
    bool  _isObserving;
    AKMainEventHandler * _mainEventHandler;
    UIScrollView * _observedScrollView;
    AKPageController * _pageController;
    bool  _scrollViewIsInLiveMagnify;
}

@property bool deferWasMovedToSuperviewUntilMoveToWindow;
@property bool isObserving;
@property AKMainEventHandler *mainEventHandler;
@property (retain) UIScrollView *observedScrollView;
@property AKPageController *pageController;
@property bool scrollViewIsInLiveMagnify;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_postScrollViewRectChangedNotification;
- (void)_postScrollViewScrollOrMagnifyEndNotification;
- (void)_scrollViewDidEndAnimation:(id)arg1;
- (void)_scrollViewDidEndDecelerating:(id)arg1;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewDidScrollToTop:(id)arg1;
- (void)_setupObservation;
- (void)_teardownObservation;
- (void)_updateLayersUsingScrollView;
- (void)_updateLayersUsingScrollViewWithForcedUpdate:(bool)arg1;
- (void)_wasMovedToNewSuperview;
- (void)_willEndLiveMagnify:(id)arg1;
- (void)_willRemoveFromOldSuperview;
- (void)_willStartLiveMagnify:(id)arg1;
- (id)annotationController;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (bool)deferWasMovedToSuperviewUntilMoveToWindow;
- (void)delete:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)duplicate:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithPageController:(id)arg1;
- (bool)isObserving;
- (id)keyCommands;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)mainEventHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedScrollView;
- (id)pageController;
- (void)paste:(id)arg1;
- (bool)scrollViewIsInLiveMagnify;
- (void)setDeferWasMovedToSuperviewUntilMoveToWindow:(bool)arg1;
- (void)setIsObserving:(bool)arg1;
- (void)setMainEventHandler:(id)arg1;
- (void)setObservedScrollView:(id)arg1;
- (void)setPageController:(id)arg1;
- (void)setScrollViewIsInLiveMagnify:(bool)arg1;
- (void)updateLayers;
- (void)willMoveToSuperview:(id)arg1;

@end
