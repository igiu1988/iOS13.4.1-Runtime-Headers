/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

@interface WFPinboardLoginViewController : UITableViewController <UITextFieldDelegate> {
    <WFPinboardLoginViewControllerDelegate> * _delegate;
    UIBarButtonItem * _loadingItem;
    UIBarButtonItem * _loginItem;
    UITextField * _passwordField;
    WFPinboardSessionManager * _sessionManager;
    long long  _state;
    UITextField * _tokenField;
    UITextField * _usernameField;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFPinboardLoginViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *loadingItem;
@property (nonatomic, retain) UIBarButtonItem *loginItem;
@property (nonatomic) UITextField *passwordField;
@property (nonatomic, retain) WFPinboardSessionManager *sessionManager;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) UITextField *tokenField;
@property (nonatomic) UITextField *usernameField;

- (void).cxx_destruct;
- (bool)accessibilityPerformEscape;
- (void)cancel;
- (id)delegate;
- (id)initWithStyle:(long long)arg1;
- (id)loadingItem;
- (void)login;
- (id)loginItem;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)passwordField;
- (id)sessionManager;
- (void)setDelegate:(id)arg1;
- (void)setLoadingItem:(id)arg1;
- (void)setLoginItem:(id)arg1;
- (void)setPasswordField:(id)arg1;
- (void)setSessionManager:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTokenField:(id)arg1;
- (void)setUsernameField:(id)arg1;
- (long long)state;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)tokenField;
- (void)updateLoginButton;
- (id)usernameField;
- (void)viewDidLoad;

@end
