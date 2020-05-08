/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIReframeResult : NSObject {
    NSArray * _ANODSubjects;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    double  _confidence;
    VNSaliencyImageObservation * _saliencyObservation;
}

@property (nonatomic, copy) NSArray *ANODSubjects;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, retain) VNSaliencyImageObservation *saliencyObservation;

- (void).cxx_destruct;
- (id)ANODSubjects;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)confidence;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 confidence:(double)arg2 ANODSubjects:(id)arg3 saliencyObservation:(id)arg4;
- (id)saliencyObservation;
- (void)setANODSubjects:(id)arg1;
- (void)setSaliencyObservation:(id)arg1;

@end
