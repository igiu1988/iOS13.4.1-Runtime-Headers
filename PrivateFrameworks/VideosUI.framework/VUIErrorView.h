/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIErrorView : UIView {
    VUILabel * _debugTextLabel;
    VUILabel * _debugTextLabel2;
    VUILabel * _descriptionLabel;
    VUIErrorLayout * _layout;
    VUILabel * _titleLabel;
}

@property (nonatomic, retain) VUILabel *debugTextLabel;
@property (nonatomic, retain) VUILabel *debugTextLabel2;
@property (nonatomic, retain) VUILabel *descriptionLabel;
@property (nonatomic, retain) VUIErrorLayout *layout;
@property (nonatomic, retain) VUILabel *titleLabel;

- (void).cxx_destruct;
- (id)debugTextLabel;
- (id)debugTextLabel2;
- (id)descriptionLabel;
- (id)layout;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })layoutSubviewsWithSize:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)setDebugTextLabel2:(id)arg1;
- (void)setDebugTextLabel:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end
