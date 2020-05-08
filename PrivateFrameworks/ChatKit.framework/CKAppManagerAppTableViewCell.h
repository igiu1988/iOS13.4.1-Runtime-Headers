/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAppManagerAppTableViewCell : UITableViewCell {
    UISwitch * _appToggle;
    <CKAppManagerAppTableViewCellDelegate> * _delegate;
}

@property (nonatomic, retain) UISwitch *appToggle;
@property (nonatomic) <CKAppManagerAppTableViewCellDelegate> *delegate;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)appToggle;
- (void)appToggleTapped:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)prepareForReuse;
- (void)setAppToggle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setToggleVisible:(bool)arg1 editable:(bool)arg2 isOn:(bool)arg3;
- (void)updateCellWithPluginInfo:(id)arg1;

@end
