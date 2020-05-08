/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUICellularPlanTableCell : PSTableCell {
    PSUIBadgeView * _badgeView;
    PSUIBadgeView * _centeredBadgeView;
    UILabel * _centeredNameLabel;
    UILabel * _nameLabel;
    UILabel * _numberLabel;
    UILabel * _statusLabel;
}

@property (nonatomic, retain) PSUIBadgeView *badgeView;
@property (nonatomic, retain) PSUIBadgeView *centeredBadgeView;
@property (nonatomic, retain) UILabel *centeredNameLabel;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *numberLabel;
@property (nonatomic, retain) UILabel *statusLabel;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_setBadge:(id)arg1 andLabel:(id)arg2 andPhoneNumber:(id)arg3;
- (void)_setCenteredBadge:(id)arg1 andLabel:(id)arg2;
- (id)badgeView;
- (bool)canBeChecked;
- (bool)canReload;
- (id)centeredBadgeView;
- (id)centeredNameLabel;
- (id)detailTextLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)nameLabel;
- (id)numberLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setBadgeView:(id)arg1;
- (void)setCenteredBadgeView:(id)arg1;
- (void)setCenteredNameLabel:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNumberLabel:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (id)statusLabel;
- (id)textLabel;

@end
