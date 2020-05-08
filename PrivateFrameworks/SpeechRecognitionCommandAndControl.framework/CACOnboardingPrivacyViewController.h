/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

@interface CACOnboardingPrivacyViewController : OBWelcomeController {
    OBBoldTrayButton * _acceptButton;
}

@property (nonatomic, retain) OBBoldTrayButton *acceptButton;

+ (id)defaultController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_defaultController;
- (id)acceptButton;
- (void)allowDataCollection;
- (void)disallowDataCollection;
- (void)dismiss;
- (bool)isModalInPresentation;
- (void)setAcceptButton:(id)arg1;
- (void)showPrivacy;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
