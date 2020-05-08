/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKRouteAnnotator : NSObject {
    struct { 
        struct CLLocationCoordinate2D { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _boundingRegion;
    GEOComposedRoute * _composedRoute;
    struct { double x1; double x2; } * _mapPoints;
    struct CGSize { 
        double width; 
        double height; 
    }  _snapshotSize;
    struct { 
        double x; 
        double y; 
    }  _topLeftCorner;
    double  _zoomLevel;
}

- (void).cxx_destruct;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_calculateBoundingRegionForRoute;
- (id)_createSnapshotter;
- (id)_drawRouteInImage:(id)arg1;
- (void)_drawRouteLineInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomLevel:(double)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 inImage:(id)arg4;
- (void)_generateMapPoints;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_overviewAffineTransformForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomLevel:(double)arg2;
- (double)_zoomLevelForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)createSnapshotOnQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1 contentSize:(struct CGSize { double x1; double x2; })arg2;

@end
