/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextTangierTextWrapper : NSObject <TSWPTextWrap> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _canvasSpaceToWrapSpace;
    NSArray * _exclusionPaths;
    NSMutableArray * _tangierExclusionPaths;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _wrapSpaceToCanvasSpace;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } canvasSpaceToWrapSpace;
@property (nonatomic, retain) NSArray *exclusionPaths;
@property (nonatomic, retain) NSMutableArray *tangierExclusionPaths;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } wrapSpaceToCanvasSpace;

- (void).cxx_destruct;
- (id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(bool*)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })canvasSpaceToWrapSpace;
- (id)collectWrappables:(id)arg1 target:(id)arg2;
- (id)exclusionPaths;
- (id)groupInfoContainingWrappable:(id)arg1;
- (unsigned long long)intersectRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 rects1Count:(unsigned long long)arg2 rects2:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 rects2Count:(unsigned long long)arg4 minSize:(double)arg5;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (void)setCanvasSpaceToWrapSpace:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setExclusionPaths:(id)arg1;
- (void)setTangierExclusionPaths:(id)arg1;
- (void)setWrapSpaceToCanvasSpace:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (unsigned int)splitLine:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineSegmentRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(bool)arg4 floatingCausedWrap:(bool*)arg5 skipHint:(double*)arg6 userInfo:(id)arg7;
- (unsigned long long)splitLineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineSegmentRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 wrappable:(id)arg3 wrapContext:(id)arg4;
- (unsigned long long)splitLineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineSegmentRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 wrappableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)tangierExclusionPaths;
- (bool)textShouldFlowAroundWrappable:(id)arg1 inTarget:(id)arg2 inColumn:(id)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })wrapSpaceToCanvasSpace;

@end
