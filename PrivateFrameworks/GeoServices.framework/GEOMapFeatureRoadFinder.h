/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder {
    bool  _flipNegativeTravelDirectionRoads;
    GEOTileLoader * _tileLoader;
    bool  _visitDoubleTravelDirectionRoadsTwice;
}

@property (nonatomic) bool flipNegativeTravelDirectionRoads;
@property (nonatomic) bool visitDoubleTravelDirectionRoadsTwice;

- (void).cxx_destruct;
- (id)findRoadsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (bool)flipNegativeTravelDirectionRoads;
- (id)initWithTileLoader:(id)arg1;
- (void)setFlipNegativeTravelDirectionRoads:(bool)arg1;
- (void)setVisitDoubleTravelDirectionRoadsTwice:(bool)arg1;
- (bool)visitDoubleTravelDirectionRoadsTwice;

@end
