/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIInlineActionsView : NUIContainerStackView {
    CNActionView * _directionsButton;
    CNContactInlineActionsViewController * _inlineActionsViewController;
    CNActionView * _messageButton;
}

@property (retain) CNActionView *directionsButton;
@property (retain) CNContactInlineActionsViewController *inlineActionsViewController;
@property (retain) CNActionView *messageButton;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (id)directionsButton;
- (id)initWithMessageMbutton:(id)arg1 inlineActionsViewController:(id)arg2 directionsButton:(id)arg3;
- (id)inlineActionsViewController;
- (id)messageButton;
- (void)setDirectionsButton:(id)arg1;
- (void)setInlineActionsViewController:(id)arg1;
- (void)setMessageButton:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;

@end
