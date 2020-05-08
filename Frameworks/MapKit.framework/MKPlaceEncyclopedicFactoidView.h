/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceEncyclopedicFactoidView : MKPlaceSectionRowView <UIGestureRecognizerDelegate> {
    NSLayoutConstraint * _baselineToBaselineConstraint;
    NSLayoutConstraint * _baselineToBottomConstraint;
    NSLayoutConstraint * _baselineToTopConstraint;
    bool  _isStandAlone;
    MKVibrantLabel * _keyLabel;
    UILongPressGestureRecognizer * _longPressRecognizer;
    _MKUILabel * _valueLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NSItemProviderWriting> *draggableContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKVibrantLabel *keyLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) _MKUILabel *valueLabel;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_handleLongPress:(id)arg1;
- (id)_keyLabelFont;
- (id)_keyLabelWithString:(id)arg1;
- (void)_menuDismissed:(id)arg1;
- (id)_valueLabelWithString:(id)arg1;
- (void)copy:(id)arg1;
- (id)draggableContent;
- (id)initWithTextItem:(id)arg1 isStandAloneFactoid:(bool)arg2;
- (id)keyLabel;
- (void)setKeyLabel:(id)arg1;
- (void)setUpConstraints;
- (void)setValueLabel:(id)arg1;
- (id)valueLabel;

@end
