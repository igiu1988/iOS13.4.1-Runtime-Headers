/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPaywallVisualSpecConfiguration : NSObject <NSCopying> {
    FCColor * _backgroundColor;
    FCColor * _darkStyleBackgroundColor;
    FCMultiResolutionImage * _darkStyleMultiResolutionImage;
    double  _gradientPercentHeight;
    FCColor * _largeTextColor;
    FCColor * _mastheadTextColor;
    FCMultiResolutionImage * _multiResolutionImage;
    FCColor * _smallTextColor;
    long long  _textTopPadding;
    long long  _videoHeight;
    NSURL * _videoURL;
    long long  _videoWidth;
}

@property (nonatomic, retain) FCColor *backgroundColor;
@property (nonatomic, retain) FCColor *darkStyleBackgroundColor;
@property (nonatomic, retain) FCMultiResolutionImage *darkStyleMultiResolutionImage;
@property (nonatomic) double gradientPercentHeight;
@property (nonatomic, retain) FCColor *largeTextColor;
@property (nonatomic, retain) FCColor *mastheadTextColor;
@property (nonatomic, retain) FCMultiResolutionImage *multiResolutionImage;
@property (nonatomic, retain) FCColor *smallTextColor;
@property (nonatomic) long long textTopPadding;
@property (nonatomic) long long videoHeight;
@property (nonatomic, retain) NSURL *videoURL;
@property (nonatomic) long long videoWidth;

+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationLarge;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationMedium;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationSmall;
+ (id)defaultPaywallVisualSpecConfiguration;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)darkStyleBackgroundColor;
- (id)darkStyleMultiResolutionImage;
- (double)gradientPercentHeight;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithMultiResolutionImage:(id)arg1 darkStyleMultiResolutionImage:(id)arg2 videoURL:(id)arg3 videoWidth:(long long)arg4 videoHeight:(long long)arg5 gradientPercentHeight:(double)arg6 textTopPadding:(long long)arg7 backgroundColor:(id)arg8 darkStyleBackgroundColor:(id)arg9 mastheadTextColor:(id)arg10 largeTextColor:(id)arg11 smallTextColor:(id)arg12;
- (bool)isEqual:(id)arg1;
- (id)largeTextColor;
- (id)mastheadTextColor;
- (id)multiResolutionImage;
- (void)setBackgroundColor:(id)arg1;
- (void)setDarkStyleBackgroundColor:(id)arg1;
- (void)setDarkStyleMultiResolutionImage:(id)arg1;
- (void)setGradientPercentHeight:(double)arg1;
- (void)setLargeTextColor:(id)arg1;
- (void)setMastheadTextColor:(id)arg1;
- (void)setMultiResolutionImage:(id)arg1;
- (void)setSmallTextColor:(id)arg1;
- (void)setTextTopPadding:(long long)arg1;
- (void)setVideoHeight:(long long)arg1;
- (void)setVideoURL:(id)arg1;
- (void)setVideoWidth:(long long)arg1;
- (id)smallTextColor;
- (long long)textTopPadding;
- (long long)videoHeight;
- (id)videoURL;
- (long long)videoWidth;

@end
