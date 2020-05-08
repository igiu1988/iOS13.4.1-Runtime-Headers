/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKRulerView : UIView {
    bool  _rulerHidden;
    PKRulerLayer * _rulerLayer;
}

@property (nonatomic) bool rulerHidden;
@property (nonatomic, retain) PKRulerLayer *rulerLayer;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)rulerHidden;
- (id)rulerLayer;
- (void)setRulerHidden:(bool)arg1;
- (void)setRulerLayer:(id)arg1;

@end
