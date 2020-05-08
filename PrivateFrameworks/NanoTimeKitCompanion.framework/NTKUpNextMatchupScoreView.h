/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextMatchupScoreView : UIView <CLKMonochromeComplicationView> {
    NTKColoringLabel * _awayDescriptionLabel;
    UIImageView * _awayLogoIamgeView;
    NTKColoringLabel * _awayNameLabel;
    CLKFont * _boldMatchupFont;
    UILayoutGuide * _descriptionLayoutGuide;
    <CLKMonochromeFilterProvider> * _filterProvider;
    NTKColoringLabel * _homeDescriptionLabel;
    UIImageView * _homeLogoImageView;
    NTKColoringLabel * _homeNameLabel;
    UILayoutGuide * _logoLayoutGuide;
    bool  _paused;
    CLKFont * _regularMatchupFont;
    CLKFont * _statusFont;
    NTKColoringLabel * _statusLabel;
    NSDate * _timeForLabel;
    NTKColoringLabel * _timeLabel;
    NSArray * _withLogoLayoutConstraints;
    NSArray * _withoutDateLayoutConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (getter=isPaused, nonatomic) bool paused;
@property (readonly) Class superclass;

+ (id)_timeStringForFetchDate:(id)arg1;

- (void).cxx_destruct;
- (void)configureWithMatchup:(id)arg1;
- (id)filterProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPaused;
- (void)setFilterProvider:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)updateTimeLabel;

@end
