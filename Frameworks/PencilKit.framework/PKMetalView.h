/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalView : UIView {
    bool  _doubleBuffered;
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedPixelSize;
    bool  _isFixedPixelSize;
    bool  _isWideGamut;
}

@property (nonatomic) bool doubleBuffered;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } drawableSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fixedPixelSize;
@property (nonatomic, readonly) bool isDrawableAvailable;
@property (nonatomic, readonly) bool isFixedPixelSize;
@property (nonatomic, readonly) bool isWideGamut;
@property (nonatomic, readonly) CAMetalLayer *metalLayer;

+ (Class)layerClass;

- (bool)doubleBuffered;
- (struct CGSize { double x1; double x2; })drawableSize;
- (struct CGSize { double x1; double x2; })fixedPixelSize;
- (void)flushDrawables;
- (void)initLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andPixelSize:(struct CGSize { double x1; double x2; })arg2 isWideGamut:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isWideGamut:(bool)arg2;
- (bool)isDrawableAvailable;
- (bool)isFixedPixelSize;
- (bool)isWideGamut;
- (id)metalLayer;
- (void)resizeDrawableIfNecessary;
- (void)setDoubleBuffered:(bool)arg1;
- (void)setFixedPixelSize:(struct CGSize { double x1; double x2; })arg1;

@end
