/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVSwipeUpMessageView : UIView {
    _TVImageView * _chevronView;
    bool  _enabled;
    NSString * _message;
    UILabel * _messageView;
    int  _swipeUpMessageState;
}

@property (nonatomic, readonly) _TVImageView *chevronView;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) UILabel *messageView;

- (void).cxx_destruct;
- (void)_processSwipeUpMessageEvent:(int)arg1;
- (id)chevronView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)layoutSubviews;
- (id)message;
- (id)messageView;
- (void)setEnabled:(bool)arg1;
- (void)setMessage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
