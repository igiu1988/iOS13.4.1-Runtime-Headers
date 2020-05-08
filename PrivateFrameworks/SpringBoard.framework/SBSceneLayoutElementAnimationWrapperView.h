/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSceneLayoutElementAnimationWrapperView : UIView <SBSceneLayoutInterfaceOrientedView> {
    SBApplicationSceneView * _appView;
    SBLayoutElement * _layoutElement;
    SBOrientationTransformWrapperView * _orientedView;
}

@property (nonatomic, readonly) SBApplicationSceneView *appView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBLayoutElement *layoutElement;
@property (nonatomic, readonly) long long layoutOrientation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)addContentView:(id)arg1;
- (id)appView;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutElement:(id)arg1 appView:(id)arg2;
- (void)invalidate;
- (id)layoutElement;
- (long long)layoutOrientation;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;

@end