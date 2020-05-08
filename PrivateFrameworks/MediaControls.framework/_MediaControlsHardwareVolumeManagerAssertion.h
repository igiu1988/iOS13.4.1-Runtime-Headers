/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface _MediaControlsHardwareVolumeManagerAssertion : NSObject <MediaControlsInvalidatable> {
    MediaControlsHardwareVolumeManager * _volumeManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) MediaControlsHardwareVolumeManager *volumeManager;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)setVolumeManager:(id)arg1;
- (id)volumeManager;

@end
