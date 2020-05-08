/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIActivityIndicatorTemplateView : SiriUIBaseTemplateView <SiriUITemplateView> {
    UILabel * _detailTextLabel;
    UIActivityIndicatorView * _spinnerView;
}

@property (nonatomic) <SiriUIActivityIndicatorTemplateModel> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *detailTextLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIActivityIndicatorView *spinnerView;
@property (readonly) Class superclass;
@property (nonatomic) <SiriUITemplatedView> *templatedSuperview;

- (void).cxx_destruct;
- (double)desiredHeight;
- (id)detailTextLabel;
- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setDetailTextLabel:(id)arg1;
- (void)setSpinnerView:(id)arg1;
- (id)spinnerView;

@end
