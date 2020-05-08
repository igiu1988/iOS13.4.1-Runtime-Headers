/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKPlayerWithSpeechBalloonView : UIView {
    GKSpeechBalloonBackgroundView * _balloonView;
    GKDashboardPlayerPhotoView * _photoView;
    NSArray * _replaceableConstraints;
    UITextView * _speechTextView;
}

@property (nonatomic, retain) GKSpeechBalloonBackgroundView *balloonView;
@property (nonatomic) unsigned char drawStyle;
@property (nonatomic, retain) GKDashboardPlayerPhotoView *photoView;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic, retain) NSArray *replaceableConstraints;
@property (nonatomic, retain) NSString *speechText;
@property (nonatomic, retain) UITextView *speechTextView;
@property (nonatomic) unsigned char tipDirection;

+ (id)instantiatePhotoContainer;
+ (bool)requiresConstraintBasedLayout;

- (void)_updateSpeechText:(id)arg1;
- (void)awakeFromNib;
- (id)balloonView;
- (void)dealloc;
- (unsigned char)drawStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)metrics;
- (id)photoView;
- (id)player;
- (id)replaceableConstraints;
- (void)setBalloonView:(id)arg1;
- (void)setDrawStyle:(unsigned char)arg1;
- (void)setPhotoView:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setReplaceableConstraints:(id)arg1;
- (void)setSpeechText:(id)arg1;
- (void)setSpeechTextView:(id)arg1;
- (void)setTipDirection:(unsigned char)arg1;
- (void)setupSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)speechText;
- (id)speechTextView;
- (unsigned char)tipDirection;
- (void)updateConstraints;

@end
