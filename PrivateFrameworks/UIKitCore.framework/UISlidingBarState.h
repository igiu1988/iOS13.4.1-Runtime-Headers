/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISlidingBarState : NSObject <NSCopying> {
    long long  __collapsedState;
    double  __keyboardAdjustment;
    double  __leadingOverlayWidth;
    double  __trailingOverlayWidth;
    bool  __treatLeadingHiddenAsOverlaps;
    bool  __treatTrailingHiddenAsOverlaps;
    UISlidingBarConfiguration * _configuration;
    double  _leadingDragOffset;
    double  _leadingWidth;
    double  _trailingDragOffset;
    double  _trailingWidth;
}

@property (setter=_setCollapsedState:, nonatomic) long long _collapsedState;
@property (nonatomic) double _keyboardAdjustment;
@property (setter=_setLeadingOverlayWidth:, nonatomic) double _leadingOverlayWidth;
@property (setter=_setTrailingOverlayWidth:, nonatomic) double _trailingOverlayWidth;
@property (setter=_setTreatLeadingHiddenAsOverlaps:, nonatomic) bool _treatLeadingHiddenAsOverlaps;
@property (setter=_setTreatTrailingHiddenAsOverlaps:, nonatomic) bool _treatTrailingHiddenAsOverlaps;
@property (getter=isCollapsed, nonatomic, readonly) bool collapsed;
@property (nonatomic, retain) UISlidingBarConfiguration *configuration;
@property (nonatomic, readonly) bool isLeadingVisible;
@property (nonatomic, readonly) bool isTrailingVisible;
@property (nonatomic) double leadingDragOffset;
@property (nonatomic, readonly) bool leadingOverlapsMain;
@property (nonatomic) double leadingWidth;
@property (nonatomic) double trailingDragOffset;
@property (nonatomic, readonly) bool trailingOverlapsMain;
@property (nonatomic) double trailingWidth;

- (void).cxx_destruct;
- (double)_absoluteDistanceFromRequest:(id)arg1;
- (long long)_collapsedState;
- (double)_distanceFromRequest:(id)arg1;
- (id)_interactiveStateRequest;
- (double)_keyboardAdjustment;
- (bool)_leadingEntirelyOverlapsMain;
- (double)_leadingOverlayWidth;
- (void)_setCollapsedState:(long long)arg1;
- (void)_setLeadingOverlayWidth:(double)arg1;
- (void)_setTrailingOverlayWidth:(double)arg1;
- (void)_setTreatLeadingHiddenAsOverlaps:(bool)arg1;
- (void)_setTreatTrailingHiddenAsOverlaps:(bool)arg1;
- (bool)_shouldUseSlidingBars;
- (bool)_trailingEntirelyOverlapsMain;
- (double)_trailingOverlayWidth;
- (bool)_treatLeadingHiddenAsOverlaps;
- (bool)_treatTrailingHiddenAsOverlaps;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isCollapsed;
- (bool)isEqual:(id)arg1;
- (bool)isLeadingVisible;
- (bool)isTrailingVisible;
- (double)leadingDragOffset;
- (bool)leadingOverlapsMain;
- (double)leadingWidth;
- (bool)matchesRequest:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setLeadingDragOffset:(double)arg1;
- (void)setLeadingWidth:(double)arg1;
- (void)setTrailingDragOffset:(double)arg1;
- (void)setTrailingWidth:(double)arg1;
- (void)set_keyboardAdjustment:(double)arg1;
- (id)stateRequest;
- (double)trailingDragOffset;
- (bool)trailingOverlapsMain;
- (double)trailingWidth;

@end
