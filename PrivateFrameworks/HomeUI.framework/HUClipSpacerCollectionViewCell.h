/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUClipSpacerCollectionViewCell : UICollectionViewCell {
    HMCameraClip * _clip;
    HMCameraClip * _previousClip;
    bool  _spansMultipleDays;
}

@property (nonatomic) HMCameraClip *clip;
@property (nonatomic) HMCameraClip *previousClip;
@property (nonatomic) bool spansMultipleDays;

- (void).cxx_destruct;
- (id)clip;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)previousClip;
- (void)setClip:(id)arg1;
- (void)setPreviousClip:(id)arg1;
- (void)setSpansMultipleDays:(bool)arg1;
- (bool)spansMultipleDays;
- (void)updateWithClip:(id)arg1 previousClip:(id)arg2;

@end
