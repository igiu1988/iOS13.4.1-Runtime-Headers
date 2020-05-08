/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIFeedbackTableView : UIView <VUILabelTopMarginCalculationProtocol> {
    NSArray * _dataModels;
    VUIFeedbackTableLayout * _layout;
}

@property (nonatomic, retain) NSArray *dataModels;
@property (nonatomic, retain) VUIFeedbackTableLayout *layout;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_calculateMaxDescriptionThatFit:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_calculateMaxHeaderThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (id)dataModels;
- (id)init;
- (id)layout;
- (void)layoutSubviews;
- (void)prepareForCellReuse;
- (void)setDataModels:(id)arg1;
- (void)setLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;

@end
