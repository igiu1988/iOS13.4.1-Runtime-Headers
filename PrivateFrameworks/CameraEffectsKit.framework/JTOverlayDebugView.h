/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JTOverlayDebugView : UIView {
    <JTOverlayDebugViewDelegate> * _delegate;
    UIView * _nonTrackedAdditionalRectsContainerView;
    UIView * _nonTrackedContainerView;
    UIColor * _nonTrackedCornerPoint0Color;
    UIColor * _nonTrackedCornerPoint1Color;
    UIColor * _nonTrackedCornerPoint2Color;
    UIColor * _nonTrackedCornerPoint3Color;
    UIColor * _nonTrackedDocumentBoundingBoxColor;
    CAShapeLayer * _nonTrackedDocumentBoundingBoxLayer;
    UIView * _nonTrackedDocumentBoundingBoxView;
    UIColor * _nonTrackedMidpointColor;
    UIView * _nonTrackedMidpointView;
    UIColor * _nonTrackedObjectAlignedBoundingBoxColor;
    UIView * _nonTrackedObjectAlignedBoundingBoxView;
    UIView * _nonTrackedPointsView;
    UIView * _rootContainerView;
    NSNumber * _showCornerPoints;
    NSNumber * _showDocumentBoundingBox;
    NSNumber * _showMidpoint;
    NSNumber * _showNonTrackedWhenTracking;
    NSNumber * _showObjectAlignedBoundingBox;
    UIView * _trackedAdditionalRectsContainerView;
    UIView * _trackedContainerView;
    UIColor * _trackedCornerPoint0Color;
    UIColor * _trackedCornerPoint1Color;
    UIColor * _trackedCornerPoint2Color;
    UIColor * _trackedCornerPoint3Color;
    CAShapeLayer * _trackedDocumentBoundingBox;
    UIColor * _trackedDocumentBoundingBoxColor;
    UIView * _trackedDocumentBoundingBoxView;
    UIColor * _trackedMidpointColor;
    UIView * _trackedMidpointView;
    UIColor * _trackedObjectAlignedBoundingBoxColor;
    UIView * _trackedObjectAlignedBoundingBoxView;
    UIView * _trackedPointsView;
}

@property (nonatomic, readonly) NSArray *additionalNonTrackedRectsToDraw;
@property (nonatomic, readonly) NSArray *additionalTrackedRectsToDraw;
@property (nonatomic) <JTOverlayDebugViewDelegate> *delegate;
@property (nonatomic, retain) UIView *nonTrackedAdditionalRectsContainerView;
@property (nonatomic, retain) UIView *nonTrackedContainerView;
@property (nonatomic, retain) UIColor *nonTrackedCornerPoint0Color;
@property (nonatomic, retain) UIColor *nonTrackedCornerPoint1Color;
@property (nonatomic, retain) UIColor *nonTrackedCornerPoint2Color;
@property (nonatomic, retain) UIColor *nonTrackedCornerPoint3Color;
@property (nonatomic, retain) UIColor *nonTrackedDocumentBoundingBoxColor;
@property (nonatomic, retain) CAShapeLayer *nonTrackedDocumentBoundingBoxLayer;
@property (nonatomic, retain) UIView *nonTrackedDocumentBoundingBoxView;
@property (nonatomic, retain) UIColor *nonTrackedMidpointColor;
@property (nonatomic, retain) UIView *nonTrackedMidpointView;
@property (nonatomic, retain) UIColor *nonTrackedObjectAlignedBoundingBoxColor;
@property (nonatomic, retain) UIView *nonTrackedObjectAlignedBoundingBoxView;
@property (nonatomic, retain) UIView *nonTrackedPointsView;
@property (nonatomic, retain) UIView *rootContainerView;
@property (nonatomic, retain) UIView *trackedAdditionalRectsContainerView;
@property (nonatomic, retain) UIView *trackedContainerView;
@property (nonatomic, retain) UIColor *trackedCornerPoint0Color;
@property (nonatomic, retain) UIColor *trackedCornerPoint1Color;
@property (nonatomic, retain) UIColor *trackedCornerPoint2Color;
@property (nonatomic, retain) UIColor *trackedCornerPoint3Color;
@property (nonatomic, retain) CAShapeLayer *trackedDocumentBoundingBox;
@property (nonatomic, retain) UIColor *trackedDocumentBoundingBoxColor;
@property (nonatomic, retain) UIView *trackedDocumentBoundingBoxView;
@property (nonatomic, retain) UIColor *trackedMidpointColor;
@property (nonatomic, retain) UIView *trackedMidpointView;
@property (nonatomic, retain) UIColor *trackedObjectAlignedBoundingBoxColor;
@property (nonatomic, retain) UIView *trackedObjectAlignedBoundingBoxView;
@property (nonatomic, retain) UIView *trackedPointsView;

- (void).cxx_destruct;
- (id)additionalNonTrackedRectsToDraw;
- (id)additionalTrackedRectsToDraw;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 delegate:(id)arg2;
- (id)nonTrackedAdditionalRectsContainerView;
- (id)nonTrackedContainerView;
- (id)nonTrackedCornerPoint0Color;
- (id)nonTrackedCornerPoint1Color;
- (id)nonTrackedCornerPoint2Color;
- (id)nonTrackedCornerPoint3Color;
- (id)nonTrackedDocumentBoundingBoxColor;
- (id)nonTrackedDocumentBoundingBoxLayer;
- (id)nonTrackedDocumentBoundingBoxView;
- (id)nonTrackedMidpointColor;
- (id)nonTrackedMidpointView;
- (id)nonTrackedObjectAlignedBoundingBoxColor;
- (id)nonTrackedObjectAlignedBoundingBoxView;
- (id)nonTrackedPointsView;
- (id)rootContainerView;
- (void)setDelegate:(id)arg1;
- (void)setNonTrackedAdditionalRectsContainerView:(id)arg1;
- (void)setNonTrackedContainerView:(id)arg1;
- (void)setNonTrackedCornerPoint0Color:(id)arg1;
- (void)setNonTrackedCornerPoint1Color:(id)arg1;
- (void)setNonTrackedCornerPoint2Color:(id)arg1;
- (void)setNonTrackedCornerPoint3Color:(id)arg1;
- (void)setNonTrackedDocumentBoundingBoxColor:(id)arg1;
- (void)setNonTrackedDocumentBoundingBoxLayer:(id)arg1;
- (void)setNonTrackedDocumentBoundingBoxView:(id)arg1;
- (void)setNonTrackedMidpointColor:(id)arg1;
- (void)setNonTrackedMidpointView:(id)arg1;
- (void)setNonTrackedObjectAlignedBoundingBoxColor:(id)arg1;
- (void)setNonTrackedObjectAlignedBoundingBoxView:(id)arg1;
- (void)setNonTrackedPointsView:(id)arg1;
- (void)setRootContainerView:(id)arg1;
- (void)setTrackedAdditionalRectsContainerView:(id)arg1;
- (void)setTrackedContainerView:(id)arg1;
- (void)setTrackedCornerPoint0Color:(id)arg1;
- (void)setTrackedCornerPoint1Color:(id)arg1;
- (void)setTrackedCornerPoint2Color:(id)arg1;
- (void)setTrackedCornerPoint3Color:(id)arg1;
- (void)setTrackedDocumentBoundingBox:(id)arg1;
- (void)setTrackedDocumentBoundingBoxColor:(id)arg1;
- (void)setTrackedDocumentBoundingBoxView:(id)arg1;
- (void)setTrackedMidpointColor:(id)arg1;
- (void)setTrackedMidpointView:(id)arg1;
- (void)setTrackedObjectAlignedBoundingBoxColor:(id)arg1;
- (void)setTrackedObjectAlignedBoundingBoxView:(id)arg1;
- (void)setTrackedPointsView:(id)arg1;
- (void)setupViews;
- (bool)showCornerPoints;
- (bool)showDocumentBoundingBox;
- (bool)showMidpoint;
- (bool)showNonTrackedWhenTracking;
- (bool)showObjectAlignedBoundingBox;
- (id)trackedAdditionalRectsContainerView;
- (id)trackedContainerView;
- (id)trackedCornerPoint0Color;
- (id)trackedCornerPoint1Color;
- (id)trackedCornerPoint2Color;
- (id)trackedCornerPoint3Color;
- (id)trackedDocumentBoundingBox;
- (id)trackedDocumentBoundingBoxColor;
- (id)trackedDocumentBoundingBoxView;
- (id)trackedMidpointColor;
- (id)trackedMidpointView;
- (id)trackedObjectAlignedBoundingBoxColor;
- (id)trackedObjectAlignedBoundingBoxView;
- (id)trackedPointsView;
- (void)updateAdditionalRectsView:(id)arg1 rects:(id)arg2 transform:(id)arg3;
- (void)updateDocumentBoundingBoxView:(id)arg1 transform:(id)arg2 borderLayer:(id)arg3 borderColor:(id)arg4 borderPhase:(double)arg5;
- (void)updateObjectAlignedBoundingBoxView:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 color:(id)arg3 transform:(id)arg4;
- (void)updatePointsView:(id)arg1 points:(id)arg2 colors:(id)arg3 pointSize:(double)arg4 hidden:(bool)arg5;
- (void)updateWithEffectFrame:(id)arg1 effect:(id)arg2;

@end
