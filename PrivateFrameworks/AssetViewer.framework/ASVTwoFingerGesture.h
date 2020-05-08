/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

@interface ASVTwoFingerGesture : ASVGesture {
    float  _assetBaseScale;
    float  _baseDistanceBetweenFingers;
    <ASVTwoFingerGestureDelegate> * _delegate;
    <ASVTouch> * _firstTouch;
    float  _initialDistanceBetweenFingers;
    float  _initialFingerAngle;
    void _initialFirstTouchLocation;
    void _initialMidPoint;
    void _initialSecondTouchLocation;
    float  _lastAssetScale;
    float  _lastFingerAngle;
    bool  _levitationThresholdPassed;
    float  _maxScale;
    float  _minScale;
    bool  _panThresholdPassed;
    bool  _rotationThresholdPassed;
    ASVRubberBand * _rubberBand;
    float  _scaleFactor;
    float  _scaleOvershoot;
    bool  _scaleThresholdPassed;
    <ASVTouch> * _secondTouch;
    NSSet * _snapScalesSet;
}

@property (nonatomic) float assetBaseScale;
@property (nonatomic) float baseDistanceBetweenFingers;
@property (nonatomic) <ASVTwoFingerGestureDelegate> *delegate;
@property (nonatomic, retain) <ASVTouch> *firstTouch;
@property (nonatomic) float initialDistanceBetweenFingers;
@property (nonatomic) float initialFingerAngle;
@property (nonatomic) void initialFirstTouchLocation;
@property (nonatomic) void initialMidPoint;
@property (nonatomic) void initialSecondTouchLocation;
@property (nonatomic) float lastAssetScale;
@property (nonatomic) float lastFingerAngle;
@property (nonatomic) bool levitationThresholdPassed;
@property (nonatomic) float maxScale;
@property (nonatomic) float minScale;
@property (nonatomic) bool panThresholdPassed;
@property (nonatomic) bool rotationThresholdPassed;
@property (nonatomic, retain) ASVRubberBand *rubberBand;
@property (nonatomic) float scaleFactor;
@property (nonatomic) float scaleOvershoot;
@property (nonatomic) bool scaleThresholdPassed;
@property (nonatomic, retain) <ASVTouch> *secondTouch;
@property (nonatomic, retain) NSSet *snapScalesSet;

- (void).cxx_destruct;
- (float)assetBaseScale;
- (float)baseDistanceBetweenFingers;
- (id)delegate;
- (void)finishGesture;
- (id)firstTouch;
- (id)initWithFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4;
- (float)initialDistanceBetweenFingers;
- (float)initialFingerAngle;
- (void)initialFirstTouchLocation;
- (void)initialMidPoint;
- (void)initialSecondTouchLocation;
- (float)lastAssetScale;
- (float)lastFingerAngle;
- (bool)levitationThresholdPassed;
- (float)maxScale;
- (float)minScale;
- (bool)panThresholdPassed;
- (bool)rotationThresholdPassed;
- (id)rubberBand;
- (float)scaleFactor;
- (bool)scaleIsWithinSnapRange:(float)arg1 snapTarget:(float)arg2;
- (float)scaleOvershoot;
- (bool)scaleThresholdPassed;
- (id)secondTouch;
- (void)setAssetBaseScale:(float)arg1;
- (void)setBaseDistanceBetweenFingers:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstTouch:(id)arg1;
- (void)setInitialDistanceBetweenFingers:(float)arg1;
- (void)setInitialFingerAngle:(float)arg1;
- (void)setInitialFirstTouchLocation;
- (void)setInitialMidPoint;
- (void)setInitialSecondTouchLocation;
- (void)setLastAssetScale:(float)arg1;
- (void)setLastFingerAngle:(float)arg1;
- (void)setLevitationThresholdPassed:(bool)arg1;
- (void)setMaxScale:(float)arg1;
- (void)setMinScale:(float)arg1;
- (void)setPanThresholdPassed:(bool)arg1;
- (void)setRotationThresholdPassed:(bool)arg1;
- (void)setRubberBand:(id)arg1;
- (void)setScaleFactor:(float)arg1;
- (void)setScaleOvershoot:(float)arg1;
- (void)setScaleThresholdPassed:(bool)arg1;
- (void)setSecondTouch:(id)arg1;
- (void)setSnapScalesSet:(id)arg1;
- (id)snapScalesSet;
- (void)updateGesture;
- (void)updatePanWithFirstTouchLocationsecondTouchLocationmidPoint;
- (void)updateRotationWithSpan;
- (void)updateRubberBand;
- (void)updateScalingWithSpan;

@end
