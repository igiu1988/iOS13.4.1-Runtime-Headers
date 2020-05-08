/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIUpNextBannerView : UIView <TVRowHosting> {
    UIVisualEffectView * _backgroundVisualEffectView;
    UIView * _shelfView;
    struct { 
        bool respondsToRowMetricsForExpectedWidth; 
        bool respondsToShouldBindRowsTogether; 
        bool respondsToShowcaseRowMetricsForExpectedWidth; 
    }  _shelfViewFlags;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundVisualEffectView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *shelfView;
@property (nonatomic, readonly) bool shouldBindRowsTogether;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateAppearance;
- (id)backgroundVisualEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 addBlurBackground:(bool)arg2;
- (void)layoutSubviews;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2;
- (void)setBackgroundVisualEffectView:(id)arg1;
- (void)setShelfView:(id)arg1;
- (id)shelfView;
- (bool)shouldBindRowsTogether;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
