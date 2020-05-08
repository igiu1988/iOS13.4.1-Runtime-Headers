/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBSystemLayoutViewController : UIViewController {
    struct CGSize { 
        double width; 
        double height; 
    }  _centeredOffsets;
    NSMutableArray * _constraints;
    unsigned long long  _horizontalLayoutType;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _minimumInsets;
    unsigned long long  _verticalLayoutType;
}

@property (nonatomic) struct CGSize { double x1; double x2; } centeredOffsets;
@property (nonatomic) unsigned long long horizontalLayoutType;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumInsets;
@property (nonatomic) unsigned long long verticalLayoutType;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)systemLayoutViewControllerWithViewController:(id)arg1;

- (void)dealloc;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (struct CGSize { double x1; double x2; })centeredOffsets;
- (unsigned long long)horizontalLayoutType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumInsets;
- (void)setCenteredOffsets:(struct CGSize { double x1; double x2; })arg1;
- (void)setHorizontalLayoutType:(unsigned long long)arg1;
- (void)setMinimumInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVerticalLayoutType:(unsigned long long)arg1;
- (void)updateViewConstraints;
- (unsigned long long)verticalLayoutType;

@end
