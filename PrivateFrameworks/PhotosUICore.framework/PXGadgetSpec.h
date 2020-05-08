/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGadgetSpec : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _accessoryViewInset;
    UIColor * _backgroundColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _displayScale;
    double  _interItemSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutInsets;
    long long  _layoutOrientation;
    double  _layoutReferenceWidth;
    long long  _layoutSizeClass;
    long long  _scrollAxis;
    bool  _shouldInsetAllContent;
    bool  _shouldUseAccessibilityLayout;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } accessoryViewInset;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) double interItemSpacing;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutInsets;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic, readonly) double layoutReferenceWidth;
@property (nonatomic, readonly) long long layoutSizeClass;
@property (nonatomic, readonly) long long scrollAxis;
@property (nonatomic, readonly) bool shouldInsetAllContent;
@property (nonatomic, readonly) bool shouldUseAccessibilityLayout;

+ (id)horizontalContentInsetsInterpolator;
+ (double)sectionHeaderHeightForStyle:(unsigned long long)arg1 dividerHidden:(bool)arg2;
+ (double)sectionHeaderTitleBottomSpacingForStyle:(unsigned long long)arg1;
+ (double)sectionHeaderTitleHeightForStyle:(unsigned long long)arg1 dividerHidden:(bool)arg2;
+ (double)sectionHeaderTopSpacingForStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })acccessoryViewInsetForTraitCollection:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })accessoryViewInset;
- (id)backgroundColor;
- (double)columnSpacingForColumnSpan:(long long)arg1;
- (double)columnWidthForColumnSpan:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (double)displayScale;
- (id)initWithTraitCollection:(id)arg1 scrollAxis:(long long)arg2;
- (double)interItemSpacing;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGadgetSpec:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsets;
- (long long)layoutOrientation;
- (double)layoutReferenceWidth;
- (long long)layoutSizeClass;
- (long long)scrollAxis;
- (bool)shouldInsetAllContent;
- (bool)shouldInsetContentForTraitCollection:(id)arg1;
- (bool)shouldUseAccessibilityLayout;

@end
