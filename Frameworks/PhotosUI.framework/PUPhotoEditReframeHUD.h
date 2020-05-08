/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditReframeHUD : UIView {
    UILabel * _buildingLabel;
    UILabel * _detailLabel;
    UIColor * _negativeColor;
    UILabel * _overcaptureLabel;
    UIColor * _positiveColor;
    UILabel * _pregatedLabel;
    UILabel * _reframedLabel;
    UILabel * _resultHorizonLabel;
    UILabel * _resultPerspectiveLabel;
    UILabel * _resultReframeLabel;
    UILabel * _stitchedLabel;
    UILabel * _subjectsLabel;
    UILabel * _tripodLabel;
}

@property (nonatomic, retain) UILabel *buildingLabel;
@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, retain) UILabel *overcaptureLabel;
@property (nonatomic, retain) UILabel *pregatedLabel;
@property (nonatomic, retain) UILabel *reframedLabel;
@property (nonatomic, retain) UILabel *resultHorizonLabel;
@property (nonatomic, retain) UILabel *resultPerspectiveLabel;
@property (nonatomic, retain) UILabel *resultReframeLabel;
@property (nonatomic, retain) UILabel *stitchedLabel;
@property (nonatomic, retain) UILabel *subjectsLabel;
@property (nonatomic, retain) UILabel *tripodLabel;

- (void).cxx_destruct;
- (id)_makeLabelAndAddToView;
- (id)buildingLabel;
- (void)dealloc;
- (id)detailLabel;
- (id)detailText;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)overcaptureLabel;
- (id)pregatedLabel;
- (id)reframedLabel;
- (id)resultHorizonLabel;
- (id)resultPerspectiveLabel;
- (id)resultReframeLabel;
- (void)setBuildingLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setOvercaptureLabel:(id)arg1;
- (void)setPregatedLabel:(id)arg1;
- (void)setReframedLabel:(id)arg1;
- (void)setResultHorizonLabel:(id)arg1;
- (void)setResultPerspectiveLabel:(id)arg1;
- (void)setResultReframeLabel:(id)arg1;
- (void)setStitchedLabel:(id)arg1;
- (void)setSubjectsLabel:(id)arg1;
- (void)setTripodLabel:(id)arg1;
- (void)showStatsForPhoto:(id)arg1;
- (id)stitchedLabel;
- (id)subjectsLabel;
- (id)tripodLabel;

@end
