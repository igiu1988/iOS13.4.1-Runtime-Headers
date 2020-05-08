/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISlidingBarConfiguration : NSObject <NSCopying> {
    long long  __leadingBackgroundStyle;
    bool  __leadingBorderWidthIsInPixels;
    double  __rawLeadingBorderWidth;
    double  __rawTrailingBorderWidth;
    long long  __trailingBackgroundStyle;
    bool  __trailingBorderWidthIsInPixels;
    bool  _allowMixedSideBySideAndOverlay;
    UIColor * _borderColor;
    bool  _leadingMayBeHidden;
    NSArray * _leadingWidths;
    double  _maximumMainWidth;
    double  _minimumMainWidthFraction;
    double  _minimumMainWidthFractionForSecondColumn;
    bool  _trailingMayBeHidden;
    NSArray * _trailingWidths;
}

@property (setter=_setLeadingBackgroundStyle:, nonatomic) long long _leadingBackgroundStyle;
@property (setter=_setLeadingBorderWidthIsInPixels:, nonatomic) bool _leadingBorderWidthIsInPixels;
@property (setter=_setRawLeadingBorderWidth:, nonatomic) double _rawLeadingBorderWidth;
@property (setter=_setRawTrailingBorderWidth:, nonatomic) double _rawTrailingBorderWidth;
@property (setter=_setTrailingBackgroundStyle:, nonatomic) long long _trailingBackgroundStyle;
@property (setter=_setTrailingBorderWidthIsInPixels:, nonatomic) bool _trailingBorderWidthIsInPixels;
@property (nonatomic) bool allowMixedSideBySideAndOverlay;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) bool leadingMayBeHidden;
@property (nonatomic, copy) NSArray *leadingWidths;
@property (nonatomic) double maximumMainWidth;
@property (nonatomic) double minimumMainWidthFraction;
@property (nonatomic) double minimumMainWidthFractionForSecondColumn;
@property (nonatomic) bool trailingMayBeHidden;
@property (nonatomic, copy) NSArray *trailingWidths;

- (void).cxx_destruct;
- (long long)_leadingBackgroundStyle;
- (bool)_leadingBorderWidthIsInPixels;
- (double)_rawLeadingBorderWidth;
- (double)_rawTrailingBorderWidth;
- (void)_setLeadingBackgroundStyle:(long long)arg1;
- (void)_setLeadingBorderWidthIsInPixels:(bool)arg1;
- (void)_setRawLeadingBorderWidth:(double)arg1;
- (void)_setRawTrailingBorderWidth:(double)arg1;
- (void)_setTrailingBackgroundStyle:(long long)arg1;
- (void)_setTrailingBorderWidthIsInPixels:(bool)arg1;
- (long long)_trailingBackgroundStyle;
- (bool)_trailingBorderWidthIsInPixels;
- (bool)allowMixedSideBySideAndOverlay;
- (id)borderColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)leadingBorderWidthForScale:(double)arg1;
- (bool)leadingMayBeHidden;
- (id)leadingWidths;
- (double)maximumMainWidth;
- (double)minimumMainWidthFraction;
- (double)minimumMainWidthFractionForSecondColumn;
- (void)setAllowMixedSideBySideAndOverlay:(bool)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setLeadingBorderWidthInPixels:(double)arg1;
- (void)setLeadingBorderWidthInPoints:(double)arg1;
- (void)setLeadingMayBeHidden:(bool)arg1;
- (void)setLeadingWidths:(id)arg1;
- (void)setMaximumMainWidth:(double)arg1;
- (void)setMinimumMainWidthFraction:(double)arg1;
- (void)setMinimumMainWidthFractionForSecondColumn:(double)arg1;
- (void)setTrailingBorderWidthInPixels:(double)arg1;
- (void)setTrailingBorderWidthInPoints:(double)arg1;
- (void)setTrailingMayBeHidden:(bool)arg1;
- (void)setTrailingWidths:(id)arg1;
- (double)trailingBorderWidthForScale:(double)arg1;
- (bool)trailingMayBeHidden;
- (id)trailingWidths;

@end
