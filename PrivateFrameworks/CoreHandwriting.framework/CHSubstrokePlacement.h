/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHSubstrokePlacement : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _coalescedCenter;
    long long  _originalWritingDirectionIndex;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _strokeDeviation;
    CHSubstroke * _substroke;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _writingOrientation;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } coalescedCenter;
@property (nonatomic) long long originalWritingDirectionIndex;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rotatedBounds;
@property (nonatomic) struct CGVector { double x1; double x2; } strokeDeviation;
@property (nonatomic, readonly, retain) CHSubstroke *substroke;
@property (nonatomic) struct CGVector { double x1; double x2; } writingOrientation;

- (struct CGPoint { double x1; double x2; })coalescedCenter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithSubstroke:(id)arg1;
- (long long)originalWritingDirectionIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rotatedBounds;
- (void)setCoalescedCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalWritingDirectionIndex:(long long)arg1;
- (void)setStrokeDeviation:(struct CGVector { double x1; double x2; })arg1;
- (void)setWritingOrientation:(struct CGVector { double x1; double x2; })arg1;
- (struct CGVector { double x1; double x2; })strokeDeviation;
- (id)substroke;
- (struct CGVector { double x1; double x2; })writingOrientation;

@end
