/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavJunction : NSObject <VKLabelNavFeature> {
    bool  _areLabelsDisabled;
    bool  _cachedSignVisibility;
    unsigned long long  _depthFromRoute;
    float  _distanceFromPreviousShieldLabel;
    bool  _foundRoads;
    struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; } * _geoJunction;
    bool  _hasSharedRouteDirection;
    VKLabelNavRoad * _incomingRoad;
    bool  _isOnDualCarriageway;
    bool  _isOverpass;
    bool  _isPicked;
    bool  _isRouteOverpass;
    bool  _isRouteRefineJunction;
    bool  _isVisibilityCached;
    bool  _isVisible;
    VKLabelNavRoadLabel * _junctionSign;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3; struct { float x_4_1_1; float x_4_1_2; } x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; short x9; short x10; unsigned char x11; float x12; float x13; unsigned int x14; unsigned int x15; unsigned char x16; unsigned char x17; bool x18; bool x19; bool x20; bool x21; bool x22; } * _labelFeature;
    int  _largestRoadClass;
    NSString * _name;
    VKLabelNavRoad * _outgoingRoad;
    VKLabelNavJunction * _overpassJunction;
    int  _preferredLabelPlacement;
    NSMutableArray * _roads;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _sharedRouteDirection;
    double  _sortValue;
    struct shared_ptr<md::LabelTile> { 
        struct LabelTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _tile;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _tileCoordinate;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _worldCoordinate;
    double  _worldUnitsPerMeter;
}

@property (nonatomic) unsigned long long depthFromRoute;
@property (nonatomic) float distanceFromPreviousShieldLabel;
@property (nonatomic, readonly) const struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*geoJunction;
@property (nonatomic, readonly) bool hasSharedRouteDirection;
@property (nonatomic, readonly) VKLabelNavRoad *incomingRoad;
@property (nonatomic, readonly) long long intraRoadPriority;
@property (nonatomic, readonly) bool isAwayFromRoute;
@property (nonatomic, readonly) bool isEtaFeature;
@property (nonatomic, readonly) bool isGuidanceStepStart;
@property (nonatomic, readonly) bool isInGuidance;
@property (nonatomic, readonly) bool isIntersection;
@property (nonatomic, readonly) bool isIntraRamp;
@property (nonatomic, readonly) bool isMultiRoadIntersection;
@property (nonatomic, readonly) bool isOffRouteGraph;
@property (nonatomic) bool isOnDualCarriageway;
@property (nonatomic, readonly) bool isOnRoute;
@property (nonatomic, readonly) bool isOverpass;
@property (nonatomic) bool isPicked;
@property (nonatomic, readonly) bool isRamp;
@property (nonatomic, readonly) bool isRoadTerminus;
@property (nonatomic) bool isRouteOverpass;
@property (nonatomic) bool isRouteRefineJunction;
@property (nonatomic, readonly) bool isStartOfRoadName;
@property (nonatomic, readonly) bool isTileEdgeJunction;
@property (nonatomic, readonly) bool isTrafficCameraFeature;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic, readonly) VKLabelNavRoadLabel *junctionSign;
@property (nonatomic, readonly) int largestRoadClass;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) VKLabelNavRoad *outgoingRoad;
@property (nonatomic) VKLabelNavJunction *overpassJunction;
@property (nonatomic) int preferredLabelPlacement;
@property (nonatomic, readonly) int requiredLabelPlacement;
@property (nonatomic, readonly) NSArray *roads;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  sharedRouteDirection; /* unknown property attribute:  1>=[2f]} */
@property (nonatomic, readonly) NSString *shieldDisplayGroup;
@property (nonatomic, readonly) const struct shared_ptr<md::LabelTile> { struct LabelTile {} *x1; struct __shared_weak_count {} *x2; }*tile;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  tileCoordinate; /* unknown property attribute:  1>=[2f]} */
@property (nonatomic, readonly) double worldUnitsPerMeter;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Matrix<double, 3, 1> { double x1[3]; })_anchorCoordinateForSignOrientation:(unsigned char)arg1;
- (unsigned char)_signOrientationWithDrivingSide:(bool)arg1;
- (void)_updateWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (void)_updateWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1 threshold:(double)arg2;
- (void)addRouteEdge:(const struct VKLabelNavRouteRoadEdge { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; struct { /* ? */ } *x3; }*)arg1 atA:(bool)arg2;
- (void)createLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1 isDrivingSideRight:(bool)arg2 artworkCache:(struct VKLabelNavArtworkCache { struct unique_ptr<geo::LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<geo::LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<geo::LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<geo::LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<geo::LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<geo::LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<geo::LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<geo::LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; }*)arg3;
- (void)dealloc;
- (unsigned long long)depthFromRoute;
- (id)description;
- (float)distanceFromPreviousShieldLabel;
- (void)evaluateCrossStreets;
- (void)evaluateCrossStreetsUsingRouteJunction:(id)arg1;
- (void)findRoads;
- (const struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*)geoJunction;
- (bool)hasSharedRouteDirection;
- (id)incomingRoad;
- (id)initWithGEOJunction:(struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*)arg1 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 tile:(const struct shared_ptr<md::LabelTile> { struct LabelTile {} *x1; struct __shared_weak_count {} *x2; }*)arg3;
- (id)initWithRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 atA:(bool)arg2 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 tile:(const struct shared_ptr<md::LabelTile> { struct LabelTile {} *x1; struct __shared_weak_count {} *x2; }*)arg4;
- (long long)intraRoadPriority;
- (bool)isAwayFromRoute;
- (bool)isEtaFeature;
- (bool)isGuidanceStepStart;
- (bool)isInGuidance;
- (bool)isIntersection;
- (bool)isIntraRamp;
- (bool)isMultiRoadIntersection;
- (bool)isOffRouteGraph;
- (bool)isOnDualCarriageway;
- (bool)isOnRoute;
- (bool)isOverpass;
- (bool)isPicked;
- (bool)isRamp;
- (bool)isRoadTerminus;
- (bool)isRouteOverpass;
- (bool)isRouteRefineJunction;
- (bool)isStartOfRoadName;
- (bool)isTileEdgeJunction;
- (bool)isTrafficCameraFeature;
- (bool)isVisible;
- (id)junctionSign;
- (int)largestRoadClass;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (bool)matchesLocationForJunction:(id)arg1;
- (id)name;
- (id)outgoingRoad;
- (id)overpassJunction;
- (int)preferredLabelPlacement;
- (void)prepareStyleVarsWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (int)requiredLabelPlacement;
- (id)roads;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setDepthFromRoute:(unsigned long long)arg1;
- (void)setDistanceFromPreviousShieldLabel:(float)arg1;
- (void)setIsOnDualCarriageway:(bool)arg1;
- (void)setIsPicked:(bool)arg1;
- (void)setIsRouteOverpass:(bool)arg1;
- (void)setIsRouteRefineJunction:(bool)arg1;
- (void)setOverpassJunction:(id)arg1;
- (void)setPreferredLabelPlacement:(int)arg1;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setSharedRouteDirection:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (struct Matrix<float, 2, 1> { float x1[2]; })sharedRouteDirection;
- (id)shieldDisplayGroup;
- (const struct shared_ptr<md::LabelTile> { struct LabelTile {} *x1; struct __shared_weak_count {} *x2; }*)tile;
- (struct Matrix<float, 2, 1> { float x1[2]; })tileCoordinate;
- (double)worldUnitsPerMeter;

@end
