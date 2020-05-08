/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUICellularPlanOptionTableCell : PSTableCell {
    UILabel * _centeredNameLabel;
    UILabel * _nameLabel;
    UILabel * _numberLabel;
}

@property (nonatomic, retain) UILabel *centeredNameLabel;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *numberLabel;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_setCenteredText:(id)arg1;
- (void)_setLabel:(id)arg1 andPhoneNumber:(id)arg2;
- (bool)canBeChecked;
- (bool)canReload;
- (id)centeredNameLabel;
- (id)detailTextLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)nameLabel;
- (id)numberLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setCellEnabled:(bool)arg1;
- (void)setCenteredNameLabel:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNumberLabel:(id)arg1;
- (id)textLabel;

@end
