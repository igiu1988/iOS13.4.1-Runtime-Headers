/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceInfoSuggestAnEditRowView : MKPlaceSectionRowView {
    id /* block */  _selectionBlock;
    _MKRightImageButton * _suggestAnEditButton;
    NSLayoutConstraint * _titleToBottomVerticalConstraint;
    NSLayoutConstraint * _topToTitleVerticalConstraint;
}

@property (nonatomic, copy) id /* block */ selectionBlock;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupSubviews;
- (void)_suggestAnEditButtonPressed;
- (void)_updateConstraints;
- (void)_updateFonts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id /* block */)selectionBlock;
- (void)setSelectionBlock:(id /* block */)arg1;

@end
