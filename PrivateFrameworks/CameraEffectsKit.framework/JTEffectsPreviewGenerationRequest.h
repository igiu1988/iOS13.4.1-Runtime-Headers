/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JTEffectsPreviewGenerationRequest : NSObject {
    struct PVTransformAnimationInfo { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
        struct CGPoint { 
            double x; 
            double y; 
        } translation; 
        double scale; 
        double rotation; 
    }  _animationTransformInfo;
    unsigned int  _childCode;
    NSDictionary * _customRenderingProperties;
    NSArray * _effectStack;
    JTEffect * _generatorEffect;
    bool  _highQuality;
    PVImageBuffer * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    unsigned int  _parentCode;
    NSArray * _pickerPreviewEffectList;
    int  _priority;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _renderTime;
    bool  _scaleAnimationTransformInfoToOutputSize;
}

@property (nonatomic) struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; } animationTransformInfo;
@property (nonatomic) unsigned int childCode;
@property (nonatomic, copy) NSDictionary *customRenderingProperties;
@property (nonatomic, readonly) NSArray *effectStack;
@property (nonatomic, readonly) JTEffect *generatorEffect;
@property (nonatomic) bool highQuality;
@property (nonatomic, readonly) PVImageBuffer *image;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic) unsigned int parentCode;
@property (nonatomic, retain) NSArray *pickerPreviewEffectList;
@property (nonatomic) int priority;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } renderTime;
@property (nonatomic) bool scaleAnimationTransformInfoToOutputSize;

- (void).cxx_destruct;
- (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })animationTransformInfo;
- (unsigned int)childCode;
- (id)customRenderingProperties;
- (id)effectStack;
- (id)generatorEffect;
- (id)generatorJobWithGraphBuilder:(id)arg1;
- (bool)highQuality;
- (id)image;
- (id)initWithInput:(id)arg1 effectStack:(id)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 renderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)initWithInputGenerator:(id)arg1 effectStack:(id)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 renderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (struct CGSize { double x1; double x2; })outputSize;
- (unsigned int)parentCode;
- (id)pickerPreviewEffectList;
- (id)placeholderGeneratorBackground;
- (int)priority;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })renderTime;
- (id)renderWithInputs:(id)arg1 inputIDs:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 metadata:(id)arg4;
- (bool)scaleAnimationTransformInfoToOutputSize;
- (void)setAnimationTransformInfo:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg1;
- (void)setChildCode:(unsigned int)arg1;
- (void)setCustomRenderingProperties:(id)arg1;
- (void)setHighQuality:(bool)arg1;
- (void)setParentCode:(unsigned int)arg1;
- (void)setPickerPreviewEffectList:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setScaleAnimationTransformInfoToOutputSize:(bool)arg1;
- (void)setTransformAnimationInfo:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg1 scaleToOutput:(bool)arg2;
- (id)sourceIGNodeUsingGraphBuilder:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })sourceTransform;

@end
