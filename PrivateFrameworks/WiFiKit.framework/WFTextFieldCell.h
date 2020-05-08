/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFTextFieldCell : UITableViewCell <UITextFieldDelegate> {
    bool  _editable;
    bool  _hideLabel;
    UILabel * _label;
    NSLayoutConstraint * _labelWidthConstraint;
    id /* block */  _returnKeyHandler;
    UIStackView * _stackView;
    NSLayoutConstraint * _stackViewBottomConstraint;
    NSLayoutConstraint * _stackViewLeadingConstraint;
    NSLayoutConstraint * _stackViewTopConstraint;
    id /* block */  _textChangeHandler;
    UITextField * _textField;
    NSLayoutConstraint * _trailingMarginConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editable;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideLabel;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) NSLayoutConstraint *labelWidthConstraint;
@property (nonatomic, copy) id /* block */ returnKeyHandler;
@property (nonatomic) UIStackView *stackView;
@property (nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (nonatomic) NSLayoutConstraint *stackViewLeadingConstraint;
@property (nonatomic) NSLayoutConstraint *stackViewTopConstraint;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ textChangeHandler;
@property (nonatomic) UITextField *textField;
@property (nonatomic) NSLayoutConstraint *trailingMarginConstraint;

- (void).cxx_destruct;
- (void)_adjustStackViewPadding;
- (void)_updateStackViewForTraitCollection;
- (double)_verticalPadding;
- (void)awakeFromNib;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)dealloc;
- (bool)editable;
- (bool)hideLabel;
- (id)label;
- (id)labelWidthConstraint;
- (void)prepareForReuse;
- (id /* block */)returnKeyHandler;
- (void)setAccessoryType:(long long)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHideLabel:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelWidthConstraint:(id)arg1;
- (void)setReturnKeyHandler:(id /* block */)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setStackView:(id)arg1;
- (void)setStackViewBottomConstraint:(id)arg1;
- (void)setStackViewLeadingConstraint:(id)arg1;
- (void)setStackViewTopConstraint:(id)arg1;
- (void)setTextChangeHandler:(id /* block */)arg1;
- (void)setTextField:(id)arg1;
- (void)setTrailingMarginConstraint:(id)arg1;
- (id)stackView;
- (id)stackViewBottomConstraint;
- (id)stackViewLeadingConstraint;
- (id)stackViewTopConstraint;
- (id /* block */)textChangeHandler;
- (id)textField;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditingExit:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (id)trailingMarginConstraint;
- (void)traitCollectionDidChange:(id)arg1;

@end
