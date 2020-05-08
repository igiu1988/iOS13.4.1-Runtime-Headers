/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDTransportControlView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _buttonSize;
    NSLayoutConstraint * _containerHeightConstraint;
    UIImage * _defaultFastForwardButtonImage;
    UIImage * _defaultLeftButtonImage;
    UIButton * _fastForwardButton;
    UIButton * _leftButton;
    NSString * _pauseButtonImageName;
    UIImage * _pauseImage;
    NSString * _playButtonImageName;
    UIImage * _playImage;
    UIButton * _playPauseButton;
    bool  _progressActive;
}

@property (nonatomic) struct CGSize { double x1; double x2; } buttonSize;
@property (nonatomic, retain) NSLayoutConstraint *containerHeightConstraint;
@property (nonatomic, retain) UIImage *defaultFastForwardButtonImage;
@property (nonatomic, retain) UIImage *defaultLeftButtonImage;
@property (nonatomic, readonly) UIButton *fastForwardButton;
@property (nonatomic, readonly) UIButton *leftButton;
@property (nonatomic, retain) NSString *pauseButtonImageName;
@property (nonatomic, retain) UIImage *pauseImage;
@property (nonatomic, retain) NSString *playButtonImageName;
@property (nonatomic, retain) UIImage *playImage;
@property (nonatomic, readonly) UIButton *playPauseButton;
@property (nonatomic) bool progressActive;

- (void).cxx_destruct;
- (id)_defaultImageForIdentifier:(id)arg1;
- (void)_updateProgressActive;
- (struct CGSize { double x1; double x2; })buttonSize;
- (id)containerHeightConstraint;
- (id)defaultFastForwardButtonImage;
- (id)defaultLeftButtonImage;
- (id)fastForwardButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftButton;
- (id)pauseButtonImageName;
- (id)pauseImage;
- (id)playButtonImageName;
- (id)playImage;
- (id)playPauseButton;
- (bool)progressActive;
- (void)setButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContainerHeightConstraint:(id)arg1;
- (void)setDefaultFastForwardButtonImage:(id)arg1;
- (void)setDefaultLeftButtonImage:(id)arg1;
- (void)setPauseButtonImageName:(id)arg1;
- (void)setPauseImage:(id)arg1;
- (void)setPlayButtonImageName:(id)arg1;
- (void)setPlayImage:(id)arg1;
- (void)setProgressActive:(bool)arg1;
- (void)setupConstraints;
- (void)updateConstraints;

@end
