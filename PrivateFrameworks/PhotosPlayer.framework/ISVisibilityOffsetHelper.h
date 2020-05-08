/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISVisibilityOffsetHelper : NSObject <ISVisibilityOffsetComputer> {
    UIScrollView * __scrollView;
    struct CGPoint { 
        double x; 
        double y; 
    }  __targetContentOffset;
    long long  _direction;
    double  _maximumDistance;
    double  _maximumDistanceLag;
}

@property (setter=_setScrollView:, nonatomic, retain) UIScrollView *_scrollView;
@property (setter=_setTargetContentOffset:, nonatomic) struct CGPoint { double x1; double x2; } _targetContentOffset;
@property (nonatomic) long long direction;
@property (nonatomic) double maximumDistance;
@property (nonatomic) double maximumDistanceLag;

- (void).cxx_destruct;
- (id)_scrollView;
- (void)_setScrollView:(id)arg1;
- (void)_setTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_targetContentOffset;
- (void)_updateDirectionIfNeeded;
- (struct ISVisibilityRange { double x1; double x2; })_visibilityRangeForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForView:(id)arg1 inScrollView:(id)arg2;
- (void)computeVisibilityOffsetsInScrollView:(id)arg1 withTargetContentOffset:(struct CGPoint { double x1; double x2; })arg2 usingBlock:(id /* block */)arg3;
- (long long)direction;
- (void)getVisibility:(bool*)arg1 offset:(double*)arg2 targetVisibilityOffset:(double*)arg3 forView:(id)arg4;
- (double)maximumDistance;
- (double)maximumDistanceLag;
- (void)setDirection:(long long)arg1;
- (void)setMaximumDistance:(double)arg1;
- (void)setMaximumDistanceLag:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectForScrollView:(id)arg1;

@end
