/* Generated by EzioChiu
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPImagePresentationProperties : NSObject {
    UIColor * _backgroundColor;
    long long  _filter;
    UIColor * _maskColor;
    bool  _requireFixedSize;
    long long  _scalingMode;
    bool  _shouldApplyBackground;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) long long filter;
@property (nonatomic, retain) UIColor *maskColor;
@property (nonatomic) bool requireFixedSize;
@property (nonatomic) long long scalingMode;
@property (nonatomic) bool shouldApplyBackground;

- (void).cxx_destruct;
- (id)backgroundColor;
- (long long)filter;
- (id)init;
- (id)maskColor;
- (bool)requireFixedSize;
- (long long)scalingMode;
- (void)setBackgroundColor:(id)arg1;
- (void)setFilter:(long long)arg1;
- (void)setMaskColor:(id)arg1;
- (void)setRequireFixedSize:(bool)arg1;
- (void)setScalingMode:(long long)arg1;
- (void)setShouldApplyBackground:(bool)arg1;
- (bool)shouldApplyBackground;

@end
