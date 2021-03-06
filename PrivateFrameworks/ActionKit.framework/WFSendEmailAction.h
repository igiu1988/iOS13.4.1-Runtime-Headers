/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFSendEmailAction : WFHandleCustomIntentAction <MFMailComposeViewControllerDelegate> {
    bool  _contentManaged;
}

@property (getter=isContentManaged, nonatomic) bool contentManaged;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2;
- (void)generateContentForIntents:(id /* block */)arg1;
- (void)generateEmailFromInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateFilesFromCollection:(id)arg1 completion:(id /* block */)arg2;
- (id)generatedAccessResource;
- (void)getRecipientsFromParameterKey:(id)arg1 completion:(id /* block */)arg2;
- (bool)isContentManaged;
- (bool)populatesInputFromInputParameter;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (void)setContentManaged:(bool)arg1;
- (id)targetDataInfo;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (void)generateBodyFromCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateEmailHeaderFromParameters:(id /* block */)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
- (void)runWithUIKitWidgetUserInterface:(id)arg1 input:(id)arg2;
- (void)sendTextViaMailtoURL:(id)arg1 withUserInterface:(id)arg2;

@end
