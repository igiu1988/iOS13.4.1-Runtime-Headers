/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.ParticipantGridViewController : UIViewController {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  focusedParticipant;
    void forceAudioPriorityButton;
    void participantGridViewControllerDelegate;
    void participantPriorities;
    void participants;
    void participantsBeforeFocus;
    void participantsViewControllerDelegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sashedParticipant;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  selectedParticipant;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)forceBumpPriority;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;

@end
