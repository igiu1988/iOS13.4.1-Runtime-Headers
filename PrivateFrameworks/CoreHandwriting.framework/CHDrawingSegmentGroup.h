/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHDrawingSegmentGroup : NSObject {
    NSArray * _delayedSegments;
    long long  _segmentGroupIndex;
    NSArray * _segments;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) NSArray *delayedSegments;
@property (nonatomic, readonly) long long segmentGroupIndex;
@property (nonatomic, readonly) NSArray *segments;
@property (nonatomic, readonly) long long totalSegmentCount;

+ (id)segmentGroupsFromSegments:(id)arg1 delayedSegments:(id)arg2 segmentGroupRanges:(id)arg3;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (id)delayedSegments;
- (id)initWithSegmentGroupIndex:(long long)arg1 segments:(id)arg2 delayedSegments:(id)arg3;
- (long long)segmentGroupIndex;
- (id)segments;
- (long long)totalSegmentCount;

@end
