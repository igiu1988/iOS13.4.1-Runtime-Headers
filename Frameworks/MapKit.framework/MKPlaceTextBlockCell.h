/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceTextBlockCell : MKPlaceSectionRowView {
    bool  _constraintsAdded;
    MKExpandingLabel * _textBlock;
    NSString * _textBlockText;
}

@property (nonatomic) bool constraintsAdded;
@property (nonatomic, retain) MKExpandingLabel *textBlock;
@property (getter=isTextBlockExpanded, nonatomic) bool textBlockExpanded;
@property (nonatomic, copy) id /* block */ textBlockResizedBlock;
@property (nonatomic, copy) NSString *textBlockText;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (bool)constraintsAdded;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTextBlockExpanded;
- (void)setConstraintsAdded:(bool)arg1;
- (void)setTextBlock:(id)arg1;
- (void)setTextBlockExpanded:(bool)arg1;
- (void)setTextBlockResizedBlock:(id /* block */)arg1;
- (void)setTextBlockText:(id)arg1;
- (id)textBlock;
- (id /* block */)textBlockResizedBlock;
- (id)textBlockText;
- (void)updateConstraints;

@end
