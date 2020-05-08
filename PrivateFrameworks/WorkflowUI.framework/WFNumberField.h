/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFNumberField : UIView <UITextFieldDelegate> {
    bool  _allowsDecimalNumbers;
    bool  _allowsNegatingNumbers;
    id /* block */  _doneBlock;
    WFTextTokenTextField * _textField;
    id /* block */  _updateBlock;
    id /* block */  _variableBlock;
}

@property (nonatomic, copy) NSSet *allowedVariableTypes;
@property (nonatomic) bool allowsDecimalNumbers;
@property (nonatomic) bool allowsNegatingNumbers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ doneBlock;
@property (getter=isEditable, nonatomic) bool editable;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *placeholder;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic) WFTextTokenTextField *textField;
@property (nonatomic, copy) id /* block */ updateBlock;
@property (nonatomic, copy) id /* block */ variableBlock;
@property (nonatomic) <WFVariableProvider> *variableProvider;
@property (nonatomic) <WFVariableUIDelegate> *variableUIDelegate;

- (void).cxx_destruct;
- (id)allowedVariableTypes;
- (bool)allowsDecimalNumbers;
- (bool)allowsNegatingNumbers;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (id /* block */)doneBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditable;
- (void)negateText;
- (id)placeholder;
- (void)setAllowedVariableTypes:(id)arg1;
- (void)setAllowsDecimalNumbers:(bool)arg1;
- (void)setAllowsNegatingNumbers:(bool)arg1;
- (void)setDoneBlock:(id /* block */)arg1;
- (void)setEditable:(bool)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextField:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void)setVariableBlock:(id /* block */)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (id)text;
- (long long)textAlignment;
- (void)textDidChange;
- (id)textField;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (id /* block */)updateBlock;
- (id /* block */)variableBlock;
- (id)variableProvider;
- (id)variableUIDelegate;

@end
