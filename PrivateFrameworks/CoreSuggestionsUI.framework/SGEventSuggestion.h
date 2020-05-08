/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGEventSuggestion : SGEventSuggestionBase <EKEventEditViewDelegate, EKEventViewDelegate, EKEventViewDelegatePrivate> {
    UIImage * _calendarImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)calendarImage;

- (void).cxx_destruct;
- (void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(bool)arg2;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (bool)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
- (id)suggestionAttributedSubtitle;
- (id)suggestionImage;
- (id)suggestionPrimaryAction;

@end
