/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavTrafficFeature : NSObject <VKLabelNavFeature> {
    struct Mercator2<double> { 
        double _e[2]; 
    }  _displayMercatorPoint;
    unsigned char  _iconState;
    bool  _isAwayFromRoute;
    bool  _isOnRoute;
    bool  _isPicked;
    unsigned char  _labelNavMode;
    struct shared_ptr<md::LabelStyle> { 
        struct LabelStyle {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _labelStyle;
    struct Mercator2<double> { 
        double _e[2]; 
    }  _nextMercatorPoint;
    struct Mercator2<double> { 
        double _e[2]; 
    }  _previousMercatorPoint;
    VKLabelNavRoadLabel * _roadLabel;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    bool  _shouldRestyleFeature;
    unsigned char  _tailDirection;
    VKTrafficFeature * _trafficFeature;
}

@property (nonatomic, readonly) unsigned char currentIconState;
@property (nonatomic) struct Mercator2<double> { double x1[2]; } displayMercatorPoint;
@property (nonatomic, readonly) unsigned char expectedIconState;
@property (nonatomic, readonly) struct Mercator2<double> { double x1[2]; } featureMercatorPoint;
@property (nonatomic, readonly) long long intraRoadPriority;
@property (nonatomic, readonly) bool isAwayFromRoute;
@property (nonatomic, readonly) bool isEtaFeature;
@property (nonatomic, readonly) bool isGuidanceStepStart;
@property (nonatomic, readonly) bool isInGuidance;
@property (nonatomic, readonly) bool isOnRoute;
@property (nonatomic) bool isPicked;
@property (nonatomic, readonly) bool isRamp;
@property (nonatomic, readonly) bool isStartOfRoadName;
@property (nonatomic, readonly) bool isTrafficCameraFeature;
@property (nonatomic, readonly) VKLabelNavRoadLabel *label;
@property (nonatomic, readonly) unsigned char labelNavMode;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long navState;
@property (nonatomic, readonly) struct Mercator2<double> { double x1[2]; } nextMercatorPoint;
@property (nonatomic, readonly) struct Mercator2<double> { double x1[2]; } previousMercatorPoint;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic, readonly) NSString *shieldDisplayGroup;
@property (nonatomic) bool shouldRestyleFeature;
@property (nonatomic) unsigned char tailDirection;
@property (nonatomic, readonly) unsigned char tailOrientation;
@property (nonatomic, readonly) VKTrafficFeature *trafficFeature;

+ (id)newFeatureForExternalFeature:(id)arg1 previousMercatorPoint:(const struct Mercator2<double> { double x1[2]; }*)arg2 nextMercatorPoint:(const struct Mercator2<double> { double x1[2]; }*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearLabel;
- (struct shared_ptr<md::LabelIcon> { struct LabelIcon {} *x1; struct __shared_weak_count {} *x2; })createIcon:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (unsigned char)currentIconState;
- (void)dealloc;
- (struct Mercator2<double> { double x1[2]; })displayMercatorPoint;
- (unsigned char)expectedIconState;
- (struct Mercator2<double> { double x1[2]; })featureMercatorPoint;
- (bool)hasLabelWithArtwork;
- (id)initWithTrafficFeature:(id)arg1 previousMercatorPoint:(const struct Mercator2<double> { double x1[2]; }*)arg2 nextMercatorPoint:(const struct Mercator2<double> { double x1[2]; }*)arg3;
- (long long)intraRoadPriority;
- (bool)isAwayFromRoute;
- (bool)isCallout;
- (bool)isCamera;
- (bool)isEtaFeature;
- (bool)isGuidanceStepStart;
- (bool)isInGuidance;
- (bool)isOnRoute;
- (bool)isPOI;
- (bool)isPicked;
- (bool)isRamp;
- (bool)isSignal;
- (bool)isStartOfRoadName;
- (bool)isTrafficCameraFeature;
- (id)label;
- (unsigned char)labelNavMode;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (id)name;
- (long long)navState;
- (struct Mercator2<double> { double x1[2]; })nextMercatorPoint;
- (struct Mercator2<double> { double x1[2]; })previousMercatorPoint;
- (void)recreateRoadSignWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setDisplayMercatorPoint:(struct Mercator2<double> { double x1[2]; })arg1;
- (void)setIsPicked:(bool)arg1;
- (void)setShouldRestyleFeature:(bool)arg1;
- (void)setTailDirection:(unsigned char)arg1;
- (id)shieldDisplayGroup;
- (bool)shouldRestyleFeature;
- (void)swapExternalFeature:(id)arg1;
- (unsigned char)tailDirection;
- (unsigned char)tailOrientation;
- (id)trafficFeature;

@end
