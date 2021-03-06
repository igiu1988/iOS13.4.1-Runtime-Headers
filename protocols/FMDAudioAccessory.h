/* Generated by EzioChiu.
 */

@protocol FMDAudioAccessory <NSObject>

@required

- (NSString *)audioRoutingIdentifier;
- (unsigned long long)audioSafetyStatus;
- (NSURL *)audioURL;
- (bool)playingSound;
- (bool)updateAudioAsset:(id <FMDAsset>)arg1;
- (bool)updatePlaybackChannels:(NSArray *)arg1;

@optional

- (bool)shouldStopSoundNow;

@end
