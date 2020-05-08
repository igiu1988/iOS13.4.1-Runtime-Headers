/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextBaseCell : UICollectionViewCell <CLKMonochromeComplicationView, UIGestureRecognizerDelegate> {
    REContent * _content;
    double  _contentBrightness;
    UIImage * _contentImage;
    double  _darkeningAmount;
    CLKDevice * _device;
    <CLKMonochromeFilterProvider> * _filterProvider;
    UIColor * _imageColor;
    CALayer * _imageLayer;
    NSHashTable * _layerProviders;
    UIView * _overlayView;
    UIImage * _overrideContentImage;
    bool  _paused;
    NSString * _representedElementIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowSize;
    UIImageView * _shadowView;
}

@property (nonatomic, readonly) REContent *content;
@property (nonatomic, readonly) UIImage *contentImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *imageColor;
@property (nonatomic, readonly) CALayer *imageLayer;
@property (nonatomic, retain) UIImage *overrideContentImage;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, retain) NSString *representedElementIdentifier;
@property (readonly) Class superclass;

+ (void)clearLabel:(id)arg1;
+ (double)cornerRadiusForDevice:(id)arg1;
+ (struct CGSize { double x1; double x2; })suggestedBodyImageSizeForDevice:(id)arg1;
+ (Class)suggestedCellClassForContent:(id)arg1;
+ (struct CGSize { double x1; double x2; })suggestedHeaderImageSizeForDevice:(id)arg1;

- (void).cxx_destruct;
- (void)_updateColorOverlay;
- (void)addContentsLayerProvider:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)configureWithContent:(id)arg1;
- (id)content;
- (id)contentImage;
- (id)device;
- (void)enumerateContentsLayersWithBlock:(id /* block */)arg1;
- (id)filterProvider;
- (id)imageColor;
- (id)imageLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPaused;
- (void)layoutSubviews;
- (id)overrideContentImage;
- (void)prepareForReuse;
- (void)removeContentsLayerProvider:(id)arg1;
- (id)representedElementIdentifier;
- (void)setContentBrightness:(double)arg1 animated:(bool)arg2;
- (void)setContentImage:(id)arg1 animated:(bool)arg2;
- (void)setFilterProvider:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageColor:(id)arg1;
- (void)setOverrideContentImage:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setRepresentedElementIdentifier:(id)arg1;
- (id)transitionContextInView:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
