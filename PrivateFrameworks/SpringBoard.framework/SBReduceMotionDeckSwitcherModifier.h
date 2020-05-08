/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBReduceMotionDeckSwitcherModifier : SBDeckSwitcherModifier {
    <SBFluidSwitcherScrollProvidingDelegate> * _scrollDelegate;
}

- (void).cxx_destruct;
- (double)_cardWidth;
- (struct CGPoint { double x1; double x2; })adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 locationInView:(struct CGPoint { double x1; double x2; })arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;
- (double)depthForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3;
- (double)homeScreenAlpha;
- (double)homeScreenScale;
- (struct CGSize { double x1; double x2; })interpageSpacingForPaging;
- (double)leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3;
- (double)opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (struct CGPoint { double x1; double x2; })pagingOrigin;
- (void)resetAdjustedScrollingState;
- (id)scrollDelegate;
- (double)scrollProgressForIndex:(unsigned long long)arg1;
- (double)scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 frameOrigin:(double)arg3;
- (bool)scrollViewPagingEnabled;
- (void)setScrollDelegate:(id)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)wallpaperScale;

@end
