/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFContactField : UIView <UITextViewDelegate> {
    bool  _allowsTextEntry;
    long long  _autocapitalizationType;
    long long  _autocorrectionType;
    WFContactPickerCoordinator * _contactPicker;
    <WFContactFieldDelegate> * _delegate;
    bool  _editable;
    NSArray * _entries;
    UIButton * _plusButton;
    WFTextScrollView * _scrollView;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedRange;
    bool  _shouldEndEditing;
    WFContactTextView * _textView;
    id /* block */  _updateBlock;
    id /* block */  _variableBlock;
}

@property (nonatomic, copy) NSSet *allowedVariableTypes;
@property (nonatomic) bool allowsTextEntry;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, retain) WFContactPickerCoordinator *contactPicker;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFContactFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic) bool editable;
@property (nonatomic, copy) NSArray *entries;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic) UIButton *plusButton;
@property (nonatomic) WFTextScrollView *scrollView;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property (nonatomic) bool shouldEndEditing;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *supportedPersonProperties;
@property (nonatomic) long long textAlignment;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic) WFContactTextView *textView;
@property (nonatomic, copy) id /* block */ updateBlock;
@property (nonatomic, copy) id /* block */ variableBlock;
@property (nonatomic) <WFVariableProvider> *variableProvider;
@property (nonatomic) <WFVariableUIDelegate> *variableUIDelegate;
@property (nonatomic) bool variablesDisabled;

- (void).cxx_destruct;
- (id)allowedVariableTypes;
- (bool)allowsTextEntry;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (void)chooseMultivalueIndexIfNecessaryForContact:(id)arg1 sender:(id)arg2;
- (id)contactPicker;
- (id)containingViewController;
- (id)delegate;
- (void)deleteFreeText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 newValue:(id)arg3;
- (id)entries;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertContact:(id)arg1;
- (bool)isEditable;
- (long long)keyboardType;
- (void)layoutSubviews;
- (unsigned long long)numberOfValuesForProperties:(id)arg1 inContact:(id)arg2;
- (id)placeholder;
- (id)plusButton;
- (void)presentContactSelectionActionSheetForText:(id)arg1 attributedText:(id)arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)scrollView;
- (void)selectContact;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)setAllowedVariableTypes:(id)arg1;
- (void)setAllowsTextEntry:(bool)arg1;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setContactPicker:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEntries:(id)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPlusButton:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setShouldEndEditing:(bool)arg1;
- (void)setSupportedPersonProperties:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextContentType:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void)setVariableBlock:(id /* block */)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)setVariablesDisabled:(bool)arg1;
- (bool)shouldEndEditing;
- (void)showContactPicker;
- (id)supportedPersonProperties;
- (bool)text:(id)arg1 containsMatchesForProperties:(id)arg2;
- (bool)text:(id)arg1 containsMatchesForProperty:(int)arg2;
- (long long)textAlignment;
- (id)textContentType;
- (id)textView;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)tintColorDidChange;
- (void)tokenizeFreeText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 newValue:(id)arg3;
- (long long)tokenizeFreeTextFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 freeTextModificationBlock:(id /* block */*)arg2;
- (id)typingAttributes;
- (id /* block */)updateBlock;
- (void)updateContactsFromTextField:(bool)arg1;
- (void)updateEditableState;
- (id /* block */)variableBlock;
- (id)variableProvider;
- (id)variableUIDelegate;
- (bool)variablesDisabled;

@end
