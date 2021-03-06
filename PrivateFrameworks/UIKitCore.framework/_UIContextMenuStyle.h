/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuStyle : NSObject <NSCopying> {
    UIView * _containerView;
    UIWindow * _containerWindow;
    bool  _hasInteractivePreview;
    NSArray * _preferredBackgroundEffects;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredBackgroundInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredEdgeInsets;
    unsigned long long  _preferredLayout;
    UITraitCollection * _preferredTraitCollection;
    bool  _preventPreviewRasterization;
    bool  _reversesActionOrderWhenAttachedToTop;
}

@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) UIWindow *containerWindow;
@property (nonatomic) bool hasInteractivePreview;
@property (nonatomic, retain) NSArray *preferredBackgroundEffects;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredBackgroundInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredEdgeInsets;
@property (nonatomic) unsigned long long preferredLayout;
@property (nonatomic, retain) UITraitCollection *preferredTraitCollection;
@property (nonatomic) bool preventPreviewRasterization;
@property (nonatomic) bool reversesActionOrderWhenAttachedToTop;

+ (id)defaultStyle;

- (void).cxx_destruct;
- (id)containerView;
- (id)containerWindow;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasInteractivePreview;
- (id)preferredBackgroundEffects;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredBackgroundInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeInsets;
- (unsigned long long)preferredLayout;
- (id)preferredTraitCollection;
- (bool)preventPreviewRasterization;
- (bool)reversesActionOrderWhenAttachedToTop;
- (void)setContainerView:(id)arg1;
- (void)setContainerWindow:(id)arg1;
- (void)setHasInteractivePreview:(bool)arg1;
- (void)setPreferredBackgroundEffects:(id)arg1;
- (void)setPreferredBackgroundInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredLayout:(unsigned long long)arg1;
- (void)setPreferredTraitCollection:(id)arg1;
- (void)setPreventPreviewRasterization:(bool)arg1;
- (void)setReversesActionOrderWhenAttachedToTop:(bool)arg1;

@end
