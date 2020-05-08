/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSMessagesAppViewController : UIViewController <MSConversationDelegate, MSMessagesAppTranscriptPresentation, MSRootViewControllerProtocol> {
    MSConversation * _activeConversation;
    <_MSMessageComposeExtensionImplProtocol> * _appContext;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrameBeforeAppearance;
    bool  _isReadyForDisplay;
    bool  _viewHasAppeared;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _balloonMaskEdgeInsets;
@property (nonatomic, retain) MSConversation *activeConversation;
@property (nonatomic, retain) <_MSMessageComposeExtensionImplProtocol> *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialFrameBeforeAppearance;
@property (nonatomic) bool isReadyForDisplay;
@property (nonatomic, readonly) unsigned long long presentationContext;
@property (nonatomic, readonly) unsigned long long presentationStyle;
@property (readonly) Class superclass;
@property (nonatomic) bool viewHasAppeared;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_balloonMaskEdgeInsets;
- (void)_conversation:(id)arg1 didSelectMessage:(id)arg2;
- (void)_conversation:(id)arg1 willSelectMessage:(id)arg2;
- (void)_didRemoveAssetArchiveWithIdentifier:(id)arg1;
- (void)_dismissAndPresentPhotosApp;
- (bool)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2;
- (void)_prepareForPresentationWithCompletionHandler:(id /* block */)arg1;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_validateMessageForSending:(id)arg1 conversation:(id)arg2 associatedText:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_validateMessageForSending:(id)arg1 conversation:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_volumeButtonPressed:(bool)arg1;
- (id)activeConversation;
- (id)appContext;
- (void)contentDidLoad;
- (struct CGSize { double x1; double x2; })contentSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (void)didBecomeActiveWithConversation:(id)arg1;
- (void)didCancelSendingMessage:(id)arg1 conversation:(id)arg2;
- (void)didReceiveMessage:(id)arg1 conversation:(id)arg2;
- (void)didResignActiveWithConversation:(id)arg1;
- (void)didSelectMessage:(id)arg1 conversation:(id)arg2;
- (void)didStartSendingMessage:(id)arg1 conversation:(id)arg2;
- (void)didTransitionToPresentationStyle:(unsigned long long)arg1;
- (void)dismiss;
- (bool)displaysAfterAppearance;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameBeforeAppearance;
- (bool)isReadyForDisplay;
- (unsigned long long)presentationContext;
- (unsigned long long)presentationStyle;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)requestResize;
- (void)setActiveConversation:(id)arg1;
- (void)setAppContext:(id)arg1;
- (void)setInitialFrameBeforeAppearance:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsReadyForDisplay:(bool)arg1;
- (void)setReadyForDisplay;
- (void)setViewHasAppeared:(bool)arg1;
- (void)updateSnapshotWithCompletionBlock:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (bool)viewHasAppeared;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)willBecomeActiveWithConversation:(id)arg1;
- (void)willResignActiveWithConversation:(id)arg1;
- (void)willSelectMessage:(id)arg1 conversation:(id)arg2;
- (void)willTransitionToPresentationStyle:(unsigned long long)arg1;

@end
