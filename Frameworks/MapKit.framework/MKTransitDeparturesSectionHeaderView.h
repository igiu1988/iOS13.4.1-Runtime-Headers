/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitDeparturesSectionHeaderView : MKCustomSeparatorTableViewCell {
    NSLayoutConstraint * _bottomConstraint;
    MKButtonWithTargetArgument * _button;
    bool  _extraSpacing;
    _MKUILabel * _label;
    NSLayoutConstraint * _topConstraint;
    unsigned long long  _type;
    _MKUILabel * _updatingLabel;
    NSTimer * _updatingLabelTimestampRefreshTimer;
    UIActivityIndicatorView * _updatingSpinner;
    UIStackView * _updatingView;
    NSTimer * _updatingViewRefreshTimer;
}

@property (nonatomic, readonly) MKButtonWithTargetArgument *button;
@property (nonatomic, copy) NSString *text;

+ (id)_buttonFont:(unsigned long long)arg1;
+ (id)_font:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (id)button;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 extraSpacing:(bool)arg2;
- (id)initWithType:(unsigned long long)arg1 extraSpacing:(bool)arg2 reuseIdentifier:(id)arg3;
- (void)setText:(id)arg1;
- (id)text;
- (void)tintColorDidChange;

@end
