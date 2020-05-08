/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
 */

@interface ADExecutor : NSObject {
    unsigned long long  _engineType;
    ADEspressoGenericExecutor * _espressoExecutor;
    unsigned int  _inputOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputRoi;
    unsigned long long  _layout;
}

@property (nonatomic, readonly, copy) NSString *networkVersionString;

- (void).cxx_destruct;
- (long long)convertIntrensicsFrom:(struct __CVBuffer { }*)arg1 cropBy:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 to:(struct __CVBuffer { }*)arg3;
- (id)getIntermediates;
- (id)init;
- (id)networkVersionString;
- (long long)prepareForEngineType:(unsigned long long)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 exifOrientation:(unsigned int)arg3 espressoInputNamesForBind:(id)arg4 espressoOutputNamesForBind:(id)arg5 inferenceDescriptor:(id)arg6;
- (long long)solveRotationPreference:(unsigned long long)arg1;
- (struct __CVBuffer { }*)wrapEspressoBufferAsPixelBuffer:(id)arg1;

@end
