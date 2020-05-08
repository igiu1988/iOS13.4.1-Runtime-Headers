/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISceneSizeRestrictions : NSObject {
    bool  _hasAutomaticMaximumSize;
    bool  _hasAutomaticMinimumSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    UIWindowScene * _scene;
}

@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumSize;

- (void).cxx_destruct;
- (id)_initWithScene:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumSize;
- (struct CGSize { double x1; double x2; })minimumSize;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumSize:(struct CGSize { double x1; double x2; })arg1;

@end