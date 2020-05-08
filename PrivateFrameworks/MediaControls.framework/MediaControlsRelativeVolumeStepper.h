/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsRelativeVolumeStepper : UIView {
    MTMaterialView * _decreaseBackground;
    MPButton * _decreaseButton;
    MTMaterialView * _increaseBackground;
    MPButton * _increaseButton;
    NSBundle * _mediaControlsBundle;
    MTVisualStylingProvider * _visualStylingProvider;
    MPVolumeController * _volumeController;
}

@property (nonatomic, retain) MTMaterialView *decreaseBackground;
@property (nonatomic, retain) MPButton *decreaseButton;
@property (nonatomic, retain) MTMaterialView *increaseBackground;
@property (nonatomic, retain) MPButton *increaseButton;
@property (nonatomic, retain) NSBundle *mediaControlsBundle;
@property (nonatomic, retain) MTVisualStylingProvider *visualStylingProvider;
@property (nonatomic, retain) MPVolumeController *volumeController;

- (void).cxx_destruct;
- (id)decreaseBackground;
- (id)decreaseButton;
- (void)decreaseButtonHoldBegan:(id)arg1;
- (void)decreaseButtonHoldReleased:(id)arg1;
- (void)decreaseTouchUpInside:(id)arg1;
- (id)increaseBackground;
- (id)increaseButton;
- (void)increaseButtonHoldBegan:(id)arg1;
- (void)increaseButtonHoldReleased:(id)arg1;
- (void)increaseTouchUpInside:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mediaControlsBundle;
- (void)setDecreaseBackground:(id)arg1;
- (void)setDecreaseButton:(id)arg1;
- (void)setIncreaseBackground:(id)arg1;
- (void)setIncreaseButton:(id)arg1;
- (void)setMediaControlsBundle:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1;
- (void)setVolumeController:(id)arg1;
- (id)visualStylingProvider;
- (id)volumeController;

@end