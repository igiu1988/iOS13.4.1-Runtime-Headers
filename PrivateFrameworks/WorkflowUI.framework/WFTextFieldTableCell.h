/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFTextFieldTableCell : UITableViewCell <UITextFieldDelegate> {
    UIStackView * _stackView;
    WFTextFieldTableItem * _tableItem;
    UITextField * _textField;
    UILabel * _textLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic) WFTextFieldTableItem *tableItem;
@property (nonatomic, readonly) UITextField *textField;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setTableItem:(id)arg1;
- (id)stackView;
- (id)tableItem;
- (void)textDidChange:(id)arg1;
- (id)textField;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)textLabel;

@end
