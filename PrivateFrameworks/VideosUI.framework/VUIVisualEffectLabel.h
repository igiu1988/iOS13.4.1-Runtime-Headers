/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIVisualEffectLabel : UIView {
    VUILabel * _label;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) VUILabel *label;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;

+ (id)vibrantLabelWithLabel:(id)arg1;

- (void).cxx_destruct;
- (void)_updateContentWithNewLabel:(id)arg1 oldLabel:(id)arg2;
- (id)initWithEffect:(id)arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visualEffectView;

@end