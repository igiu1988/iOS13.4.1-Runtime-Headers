/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPostalAddressEditorView : UIControl <ABText, CNCountryPickerControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    CNMutablePostalAddress * _address;
    NSArray * _cellsLayout;
    <CNPresenterDelegate> * _delegate;
    CNPostalAddressFormattingSpecification * _formatSpecification;
    CNPostalAddressEditorTableView * _tableView;
    NSMutableDictionary * _textFields;
    NSDictionary * _valueTextAttributes;
}

@property (nonatomic, copy) NSString *ab_text;
@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic, copy) CNPostalAddress *address;
@property (nonatomic, copy) NSArray *cellsLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNPostalAddressFormattingSpecification *formatSpecification;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long lineCount;
@property (nonatomic, copy) UIColor *separatorColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNPostalAddressEditorTableView *tableView;
@property (nonatomic, readonly) NSMutableDictionary *textFields;

- (void).cxx_destruct;
- (id)_addressValueForKey:(id)arg1;
- (id)_cellsLayoutForCountryCode:(id)arg1;
- (id)_countryCode;
- (void)_invalidateCellsLayout;
- (id)_normalizeCountryCodeToISO:(id)arg1;
- (void)_setAddressValue:(id)arg1 forKey:(id)arg2;
- (id)ab_text;
- (id)ab_textAttributes;
- (id)address;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)cellsLayout;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2;
- (void)countryPickerDidCancel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)formatSpecification;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFirstResponder;
- (id)keyboardSettingsForAddress:(id)arg1 component:(id)arg2;
- (void)keyboardWillShow:(id)arg1;
- (long long)lineCount;
- (id)separatorColor;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellsLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFormatSpecification:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)textFieldChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)textFields;

@end
