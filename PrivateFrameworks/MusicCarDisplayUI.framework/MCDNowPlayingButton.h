/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDNowPlayingButton : UIButton <MCDNowPlayingObserverDelegate> {
    UIImageView * _focusBackgroundView;
    double  _height;
    MCDNowPlayingButtonView * _nowPlayingView;
    NSString * _stateName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height;
@property (nonatomic, copy) NSString *stateName;
@property (readonly) Class superclass;

+ (id)buttonWithHeight:(double)arg1;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (double)height;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)nowPlayingObserver:(id)arg1 stateDidChanged:(bool)arg2;
- (void)setHeight:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setStateName:(id)arg1;
- (id)stateName;

@end