/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKNicknameController : NSObject <UITextFieldDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    <GKNicknameControllerDelegate> * _delegate;
    UITextField * _nickname;
    bool  _nicknameChangeWasCommitted;
    bool  _nicknameWasEdited;
    GKReachability * _reachability;
    bool  _shouldShakeTextFieldOnError;
    NSArray * _suggestedNicknames;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property <GKNicknameControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextField *nickname;
@property (nonatomic) bool nicknameChangeWasCommitted;
@property (nonatomic) bool nicknameWasEdited;
@property (nonatomic, retain) GKReachability *reachability;
@property (nonatomic) bool shouldShakeTextFieldOnError;
@property (nonatomic, retain) NSArray *suggestedNicknames;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)delegate;
- (void)didSelectSuggestion:(id)arg1;
- (void)displayNicknameSuggestions;
- (id)init;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)nickname;
- (bool)nicknameChangeWasCommitted;
- (void)nicknameTextChanged:(id)arg1;
- (bool)nicknameWasEdited;
- (id)reachability;
- (void)reset;
- (void)setActivityIndicator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setNicknameChangeWasCommitted:(bool)arg1;
- (void)setNicknameWasEdited:(bool)arg1;
- (void)setReachability:(id)arg1;
- (void)setShouldShakeTextFieldOnError:(bool)arg1;
- (void)setSuggestedNicknames:(id)arg1;
- (void)shakeNicknameTextFieldWithCompletionBlock:(id /* block */)arg1;
- (bool)shouldShakeTextFieldOnError;
- (void)startObservingKeyboardEvents;
- (void)stopObservingKeyboardEvents;
- (id)suggestedNicknames;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateReturnKeyEnabledState;

@end
