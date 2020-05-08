/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIDictationDataSharingOptInPresenter : NSObject {
    <VTUIDictationDataSharingOptInPresentationDelegate> * _presentationDelegate;
}

@property (nonatomic) <VTUIDictationDataSharingOptInPresentationDelegate> *presentationDelegate;

- (void).cxx_destruct;
- (void)_learnMoreButtonTapped;
- (void)_optInButtonTapped;
- (void)_optOutButtonTapped;
- (id)dataSharingOptInAlertController;
- (id)dataSharingOptInView;
- (id)dataSharingReminderAlertController;
- (id)dictationDataSharingOptInAlertViewModel;
- (id)dictationDataSharingOptInReminderViewModel;
- (id)presentationDelegate;
- (void)setPresentationDelegate:(id)arg1;

@end