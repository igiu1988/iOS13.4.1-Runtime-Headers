/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface SMSApplicationSoundHelper : NSObject {
    TLAlert * _alert;
    bool  _bulletinSuppressed;
}

@property (nonatomic) bool bulletinSuppressed;

- (void).cxx_destruct;
- (bool)_shouldPlayTapbackSound;
- (bool)allowedByScreenTimeToPlayReceiveSoundForChat:(id)arg1;
- (bool)bulletinSuppressed;
- (void)playIncomingMessageSoundAndHapticForMessage:(id)arg1 messageIsForCurrentTranscript:(bool)arg2;
- (void)playSendSoundForMessage:(id)arg1;
- (void)setBulletinSuppressed:(bool)arg1;
- (bool)shouldPlayDefaultSendSoundForMessageInCurrentTranscript:(id)arg1;
- (void)stopPlayingAlert;

@end
