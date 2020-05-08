/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUIDanglingPlanTableCell : PSTableCell {
    UIView * _accessorySpacerView;
    UILabel * _centeredNameLabel;
    UILabel * _nameLabel;
    UILabel * _numberLabel;
    UILabel * _statusLabel;
}

@property (nonatomic, retain) UIView *accessorySpacerView;
@property (nonatomic, retain) UILabel *centeredNameLabel;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *numberLabel;
@property (nonatomic, retain) UILabel *statusLabel;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_setCenteredText:(id)arg1;
- (void)_setLabel:(id)arg1 andPhoneNumber:(id)arg2;
- (void)_setView;
- (id)accessorySpacerView;
- (bool)canBeChecked;
- (bool)canReload;
- (id)centeredNameLabel;
- (id)detailTextLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)nameLabel;
- (id)numberLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setAccessorySpacerView:(id)arg1;
- (void)setAccessoryType:(long long)arg1;
- (void)setCenteredNameLabel:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNumberLabel:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (id)statusLabel;
- (id)textLabel;

@end
