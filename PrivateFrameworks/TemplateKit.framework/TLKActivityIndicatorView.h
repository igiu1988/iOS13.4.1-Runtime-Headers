/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKActivityIndicatorView : TLKView {
    UIActivityIndicatorView * _activityIndicator;
    TLKMultilineText * _subtitle;
    TLKLabel * _subtitleLabel;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) TLKMultilineText *subtitle;
@property (nonatomic, retain) TLKLabel *subtitleLabel;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)activityIndicator;
- (void)didMoveToWindow;
- (void)observedPropertiesChanged;
- (void)setActivityIndicator:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (id)setupContentView;
- (id)subtitle;
- (id)subtitleLabel;
- (id)subtitleLabelText;
- (void)tlk_updateForAppearance:(id)arg1;
- (bool)usesDefaultInsets;

@end
