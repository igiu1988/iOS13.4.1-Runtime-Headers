/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKPaintAreaView : UIView <PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget> {
    PKPaintAreaViewSurface * _currentPaintSurfaceObject;
    <PKPaintAreaViewDelegate> * _delegate;
    PKDrawingGestureRecognizer * _drawingGestureRecognizer;
    bool  _fingerDrawingEnabled;
    PKInk * _ink;
    NSMutableArray * _liveSurfaces;
    bool  _switchSurfacesDuringStrokes;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaintAreaViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fingerDrawingEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKInk *ink;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } strokeTransform;
@property (readonly) Class superclass;
@property (nonatomic) bool switchSurfacesDuringStrokes;

- (void).cxx_destruct;
- (void)_commonInit;
- (struct CGPoint { double x1; double x2; })applyTransformToTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })applyTransformToTouchLocation:(struct CGPoint { double x1; double x2; })arg1 previousPoint:(struct CGPoint { double x1; double x2; })arg2 newSurface:(id*)arg3;
- (bool)canAddStroke;
- (id)delegate;
- (void)drawingBegan:(id)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1;
- (void)drawingEstimatedPropertiesUpdated:(id)arg1;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })drawingInputPoint:(struct CGPoint { double x1; double x2; })arg1 forTouch:(id)arg2 predicted:(bool)arg3;
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;
- (bool)fingerDrawingEnabled;
- (id)hitSurface:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)ink;
- (void)setDelegate:(id)arg1;
- (void)setFingerDrawingEnabled:(bool)arg1;
- (void)setInk:(id)arg1;
- (void)setSwitchSurfacesDuringStrokes:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (bool)switchSurfacesDuringStrokes;
- (void)switchToNewPaintSurface:(id)arg1;
- (void)vsync:(double)arg1;

@end
