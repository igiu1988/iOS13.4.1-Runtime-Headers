/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeStyleSelectorViewController : UIViewController <MFComposeColorPickerControllerDelegate, MFPreferredHeightProviding, UIFontPickerViewControllerDelegate> {
    MFComposeStyleSelectorButton * _boldButton;
    MFComposeStyleSelectorButton * _bulletListButton;
    MFComposeColorPickerController * _colorPicker;
    UIStackView * _containerStackView;
    long long  _currentFontSize;
    MFComposeStyleSelectorButton * _decreaseFontSizeButton;
    MFComposeStyleSelectorButton * _decreaseQuoteButton;
    UIStackView * _fontAttributeStackView;
    MFComposeFontSelectorButton * _fontSelectorButton;
    UIStackView * _fontTextAttributeStackView;
    MFComposeStyleSelectorButton * _increaseFontSizeButton;
    MFComposeStyleSelectorButton * _increaseQuoteButton;
    MFComposeStyleSelectorButton * _indentLeftButton;
    MFComposeStyleSelectorButton * _indentRightButton;
    MFRoundedCornersStackView * _indentStackView;
    MFComposeStyleSelectorButton * _italicsButton;
    MFComposeStyleSelectorButton * _justifyCenterButton;
    MFComposeStyleSelectorButton * _justifyLeftButton;
    MFComposeStyleSelectorButton * _justifyRightButton;
    MFRoundedCornersStackView * _justifyStackView;
    UIStackView * _listJustifyStackView;
    MFRoundedCornersStackView * _listStackView;
    MFComposeStyleSelectorButton * _numberedListButton;
    UIStackView * _quoteIndentListJustifyStackView;
    UIStackView * _quoteIndentStackView;
    MFRoundedCornersStackView * _quoteLevelStackView;
    MFComposeStyleSelectorButton * _strikethroughButton;
    <MFComposeStyleSelectorViewControllerDelegate> * _styleDelegate;
    MFRoundedCornersStackView * _textAttributeStackView;
    MFComposeTextColorButton * _textColorButton;
    MFComposeStyleSelectorButton * _underlineButton;
}

@property (nonatomic, retain) MFComposeStyleSelectorButton *boldButton;
@property (nonatomic, retain) MFComposeStyleSelectorButton *bulletListButton;
@property (nonatomic, retain) MFComposeColorPickerController *colorPicker;
@property (nonatomic, retain) UIStackView *containerStackView;
@property (nonatomic) long long currentFontSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) MFComposeStyleSelectorButton *decreaseFontSizeButton;
@property (nonatomic, retain) MFComposeStyleSelectorButton *decreaseQuoteButton;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIStackView *fontAttributeStackView;
@property (nonatomic, retain) MFComposeFontSelectorButton *fontSelectorButton;
@property (nonatomic, retain) UIStackView *fontTextAttributeStackView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MFComposeStyleSelectorButton *increaseFontSizeButton;
@property (nonatomic, retain) MFComposeStyleSelectorButton *increaseQuoteButton;
@property (nonatomic, retain) MFComposeStyleSelectorButton *indentLeftButton;
@property (nonatomic, retain) MFComposeStyleSelectorButton *indentRightButton;
@property (nonatomic, retain) MFRoundedCornersStackView *indentStackView;
@property (nonatomic, retain) MFComposeStyleSelectorButton *italicsButton;
@property (nonatomic, retain) MFComposeStyleSelectorButton *justifyCenterButton;
@property (nonatomic, retain) MFComposeStyleSelectorButton *justifyLeftButton;
@property (nonatomic, retain) MFComposeStyleSelectorButton *justifyRightButton;
@property (nonatomic, retain) MFRoundedCornersStackView *justifyStackView;
@property (nonatomic, retain) UIStackView *listJustifyStackView;
@property (nonatomic, retain) MFRoundedCornersStackView *listStackView;
@property (nonatomic, retain) MFComposeStyleSelectorButton *numberedListButton;
@property (nonatomic, retain) UIStackView *quoteIndentListJustifyStackView;
@property (nonatomic, retain) UIStackView *quoteIndentStackView;
@property (nonatomic, retain) MFRoundedCornersStackView *quoteLevelStackView;
@property (nonatomic, retain) MFComposeStyleSelectorButton *strikethroughButton;
@property (nonatomic) <MFComposeStyleSelectorViewControllerDelegate> *styleDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) MFRoundedCornersStackView *textAttributeStackView;
@property (nonatomic, retain) MFComposeTextColorButton *textColorButton;
@property (nonatomic, retain) MFComposeStyleSelectorButton *underlineButton;

- (void).cxx_destruct;
- (id)_composeStyleSelectorButtonForAttributeType:(long long)arg1;
- (id)_roundedEquallyFilledHorizontalStackView;
- (void)_setupButtons;
- (void)_setupContainer;
- (void)_updateFontsButton:(id)arg1;
- (id)boldButton;
- (id)bulletListButton;
- (void)changeFontSizeAction:(id)arg1;
- (void)closeStyleSelector:(id)arg1;
- (id)colorPicker;
- (void)colorPicker:(id)arg1 didChangeSelectedColor:(id)arg2;
- (void)colorPickerDidCancel:(id)arg1;
- (id)containerStackView;
- (long long)currentFontSize;
- (id)decreaseFontSizeButton;
- (id)decreaseQuoteButton;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)fontAttributeStackView;
- (void)fontPickerViewControllerDidCancel:(id)arg1;
- (void)fontPickerViewControllerDidPickFont:(id)arg1;
- (id)fontSelectorButton;
- (id)fontTextAttributeStackView;
- (id)increaseFontSizeButton;
- (id)increaseQuoteButton;
- (id)indentLeftButton;
- (id)indentRightButton;
- (id)indentStackView;
- (id)italicsButton;
- (id)justifyCenterButton;
- (id)justifyLeftButton;
- (id)justifyRightButton;
- (id)justifyStackView;
- (id)listJustifyStackView;
- (id)listStackView;
- (void)loadView;
- (id)numberedListButton;
- (void)pickFontAction:(id)arg1;
- (void)pickTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (id)quoteIndentListJustifyStackView;
- (id)quoteIndentStackView;
- (id)quoteLevelStackView;
- (void)setBoldButton:(id)arg1;
- (void)setBulletListButton:(id)arg1;
- (void)setColorPicker:(id)arg1;
- (void)setContainerStackView:(id)arg1;
- (void)setCurrentFontSize:(long long)arg1;
- (void)setDecreaseFontSizeButton:(id)arg1;
- (void)setDecreaseQuoteButton:(id)arg1;
- (void)setFontAttributeStackView:(id)arg1;
- (void)setFontSelectorButton:(id)arg1;
- (void)setFontTextAttributeStackView:(id)arg1;
- (void)setIncreaseFontSizeButton:(id)arg1;
- (void)setIncreaseQuoteButton:(id)arg1;
- (void)setIndentLeftButton:(id)arg1;
- (void)setIndentRightButton:(id)arg1;
- (void)setIndentStackView:(id)arg1;
- (void)setItalicsButton:(id)arg1;
- (void)setJustifyCenterButton:(id)arg1;
- (void)setJustifyLeftButton:(id)arg1;
- (void)setJustifyRightButton:(id)arg1;
- (void)setJustifyStackView:(id)arg1;
- (void)setListJustifyStackView:(id)arg1;
- (void)setListStackView:(id)arg1;
- (void)setNumberedListButton:(id)arg1;
- (void)setQuoteIndentListJustifyStackView:(id)arg1;
- (void)setQuoteIndentStackView:(id)arg1;
- (void)setQuoteLevelStackView:(id)arg1;
- (void)setStrikethroughButton:(id)arg1;
- (void)setStyleDelegate:(id)arg1;
- (void)setTextAttributeStackView:(id)arg1;
- (void)setTextColorButton:(id)arg1;
- (void)setUnderlineButton:(id)arg1;
- (id)strikethroughButton;
- (id)styleDelegate;
- (void)styleSelectorAction:(id)arg1;
- (id)textAttributeStackView;
- (id)textColorButton;
- (void)traitCollectionDidChange:(id)arg1;
- (id)underlineButton;
- (void)updateStateUsingFontAttributes:(id)arg1;
- (void)viewDidLoad;

@end
