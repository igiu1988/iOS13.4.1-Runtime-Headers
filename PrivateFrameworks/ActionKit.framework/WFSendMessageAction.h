/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFSendMessageAction : WFHandleSystemIntentAction <MFMessageComposeViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2;
- (void)getContentFromInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getRecipients:(id /* block */)arg1;
- (id)localizedKeyParameterDisplayName;
- (id)minimumSupportedClientVersion;
- (bool)opensInApp;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (bool)skipsProcessingHiddenParameters;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;

@end
