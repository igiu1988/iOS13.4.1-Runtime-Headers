/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSiderealWaypointsView : UIView {
    double  _dialDiameter;
    UIView * _orbitContainerView;
    double  _orbitDiameter;
    NSMutableArray * _separatorLines;
    UIView * _separatorLinesContainer;
    UIView * _waypointContainerView;
    double  _waypointDiameter;
    NSArray * _waypoints;
}

- (void).cxx_destruct;
- (id)_newSeparatorLineForWaypoint:(id)arg1;
- (id)_newWaypointView;
- (void)_updateSeparatorLines;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orbitDiameter:(double)arg2 dialDiameter:(double)arg3 waypoints:(id)arg4;
- (void)setWaypoints:(id)arg1;

@end
