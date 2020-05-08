/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSManeuverView : UIView {
    CPTravelEstimates * _currentTravelEstimates;
    unsigned long long  _guidanceStyle;
    CPManeuver * _maneuver;
    long long  _style;
    bool  _usesDefaultGuidanceBackgroundColor;
}

@property (nonatomic, retain) CPTravelEstimates *currentTravelEstimates;
@property (nonatomic) unsigned long long guidanceStyle;
@property (nonatomic, readonly) CPManeuver *maneuver;
@property (nonatomic) long long style;
@property (nonatomic) bool usesDefaultGuidanceBackgroundColor;

- (void).cxx_destruct;
- (id)accessibilityName:(id)arg1;
- (id)currentTravelEstimates;
- (unsigned long long)guidanceStyle;
- (id)initWithManeuver:(id)arg1;
- (id)maneuver;
- (void)setCurrentTravelEstimates:(id)arg1;
- (void)setGuidanceStyle:(unsigned long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setUsesDefaultGuidanceBackgroundColor:(bool)arg1;
- (long long)style;
- (bool)usesDefaultGuidanceBackgroundColor;

@end
