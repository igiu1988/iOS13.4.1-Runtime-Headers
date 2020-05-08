/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifier : NSObject {
    SEL  _buttonAction;
    SEL  _confirmationAction;
    SEL  _confirmationAlternateAction;
    SEL  _confirmationCancelAction;
    SEL  _controllerLoadAction;
    NSString * _name;
    NSMutableDictionary * _properties;
    NSDictionary * _shortTitleDict;
    bool  _showContentString;
    NSDictionary * _titleDict;
    id  _userInfo;
    NSArray * _values;
    id  _weakUserInfo;
    SEL  action;
    long long  autoCapsType;
    long long  autoCorrectionType;
    SEL  cancel;
    long long  cellType;
    Class  detailControllerClass;
    Class  editPaneClass;
    SEL  getter;
    long long  keyboardType;
    SEL  setter;
    id  target;
    unsigned long long  textFieldType;
}

@property (nonatomic, retain) IMAccount *CNFRegAccount;
@property (nonatomic, retain) CNFRegAlias *CNFRegAlias;
@property (nonatomic, retain) CNFRegAlias *CNFRegCallerIdAlias;
@property (nonatomic) SEL buttonAction;
@property (nonatomic) long long cellType;
@property (nonatomic) SEL confirmationAction;
@property (nonatomic) SEL confirmationAlternateAction;
@property (nonatomic) SEL confirmationCancelAction;
@property (nonatomic) SEL controllerLoadAction;
@property (nonatomic) Class detailControllerClass;
@property (nonatomic) Class editPaneClass;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *shortTitleDictionary;
@property (nonatomic) bool showContentString;
@property (nonatomic) id target;
@property (nonatomic, retain) NSDictionary *titleDictionary;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *tps_subscriptionContext;
@property (nonatomic, readonly, copy) NSOrderedSet *tps_subscriptions;
@property (nonatomic, retain) id userInfo;
@property (nonatomic, retain) NSArray *values;
@property (nonatomic) id weakUserInfo;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

+ (long long)autoCapsTypeForString:(id)arg1;
+ (long long)autoCorrectionTypeForNumber:(id)arg1;
+ (id)deleteButtonSpecifierWithName:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)emptyGroupSpecifier;
+ (id)groupSpecifierWithID:(id)arg1;
+ (id)groupSpecifierWithID:(id)arg1 name:(id)arg2;
+ (id)groupSpecifierWithName:(id)arg1;
+ (long long)keyboardTypeForString:(id)arg1;
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
+ (id)specifierWithSpecifier:(id)arg1;

- (void).cxx_destruct;
- (SEL)buttonAction;
- (long long)cellType;
- (SEL)confirmationAction;
- (SEL)confirmationAlternateAction;
- (SEL)confirmationCancelAction;
- (SEL)controllerLoadAction;
- (id)description;
- (Class)detailControllerClass;
- (Class)editPaneClass;
- (bool)hasValidGetter;
- (bool)hasValidSetter;
- (id)identifier;
- (id)init;
- (id)initWithName:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
- (bool)isEqualToSpecifier:(id)arg1;
- (SEL)legacyAction;
- (SEL)legacyCancel;
- (void)loadValuesAndTitlesFromDataSource;
- (id)name;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)performButtonAction;
- (void)performConfirmationAction;
- (void)performConfirmationAlternateAction;
- (void)performConfirmationCancelAction;
- (void)performControllerLoadAction;
- (id)performGetter;
- (void)performLegacyAction;
- (void)performSetterWithValue:(id)arg1;
- (id)properties;
- (id)propertyForKey:(id)arg1;
- (void)removePropertyForKey:(id)arg1;
- (void)setButtonAction:(SEL)arg1;
- (void)setCellType:(long long)arg1;
- (void)setConfirmationAction:(SEL)arg1;
- (void)setConfirmationAlternateAction:(SEL)arg1;
- (void)setConfirmationCancelAction:(SEL)arg1;
- (void)setControllerLoadAction:(SEL)arg1;
- (void)setDetailControllerClass:(Class)arg1;
- (void)setEditPaneClass:(Class)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyboardType:(long long)arg1 autoCaps:(long long)arg2 autoCorrection:(long long)arg3;
- (void)setLegacyAction:(SEL)arg1;
- (void)setLegacyCancel:(SEL)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setProperties:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setShortTitleDictionary:(id)arg1;
- (void)setShowContentString:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitleDictionary:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setValues:(id)arg1;
- (void)setValues:(id)arg1 titles:(id)arg2;
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3;
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3 usingLocalizedTitleSorting:(bool)arg4;
- (void)setWeakUserInfo:(id)arg1;
- (void)setupIconImageWithBundle:(id)arg1;
- (void)setupIconImageWithPath:(id)arg1;
- (id)shortTitleDictionary;
- (bool)showContentString;
- (id)target;
- (long long)titleCompare:(id)arg1;
- (id)titleDictionary;
- (id)userInfo;
- (id)values;
- (id)weakUserInfo;

// Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities

+ (id)ax_stepperSpecifierWithDelegate:(id)arg1;

- (void)ax_setStepperDelegate:(id)arg1;
- (id)ax_stepperDelegate;

// Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI

+ (id)_bundle;
+ (id)acui_iconForDataclass:(id)arg1;
+ (id)acui_linkListCellSpecifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5;
+ (id)acui_specifierForAppWithBundleID:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;
+ (id)acui_specifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;
+ (id)acui_specifierIconForAccountTypeIdentifier:(id)arg1;
+ (id)groupSpecifierWithFooterLinkButton:(id)arg1;
+ (id)groupSpecifierWithFooterText:(id)arg1 linkButton:(id)arg2;
+ (id)groupSpecifierWithFooterText:(id)arg1 linkButtons:(id)arg2;
+ (id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2;
+ (id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2 linkButtons:(id)arg3;

- (id)acui_appBundleID;
- (id)acui_dataclass;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (id)CNFRegAccount;
- (id)CNFRegAlias;
- (id)CNFRegCallerIdAlias;
- (void)setCNFRegAccount:(id)arg1;
- (void)setCNFRegAlias:(id)arg1;
- (void)setCNFRegCallerIdAlias:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI

+ (id)buttonSpecifierWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 confirmationInfo:(id)arg4;
+ (id)switchSpecifierWithTitle:(id)arg1 target:(id)arg2 setter:(SEL)arg3 getter:(SEL)arg4 key:(id)arg5;

// Image: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI

+ (id)st_emptyGroupSpecifier;

// Image: /System/Library/PrivateFrameworks/Settings/SettingsUIKitPrivate.framework/SettingsUIKitPrivate

- (long long)suikp_autoCapsType;
- (long long)suikp_autoCorrectionType;
- (long long)suikp_keyboardType;

// Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings

- (void)setVersionLabelEnabled:(bool)arg1;
- (bool)versionLabelEnabled;

// Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences

- (id)tps_subscriptionContext;
- (id)tps_subscriptions;

@end
