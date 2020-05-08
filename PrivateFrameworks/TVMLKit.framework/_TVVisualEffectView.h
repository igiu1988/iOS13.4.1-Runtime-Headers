/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVVisualEffectView : UIVisualEffectView {
    UIView * _hostView;
}

@property (nonatomic) UIView *hostView;

+ (void)addHostView:(id)arg1;
+ (void)disableForHostView:(id)arg1;
+ (void)enableForHostView:(id)arg1;
+ (id)hostViewDisablements;
+ (void)removeHostView:(id)arg1;

- (void).cxx_destruct;
- (void)_disablement:(id)arg1;
- (void)_setDisabled:(bool)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)hostView;
- (void)setHostView:(id)arg1;

@end
