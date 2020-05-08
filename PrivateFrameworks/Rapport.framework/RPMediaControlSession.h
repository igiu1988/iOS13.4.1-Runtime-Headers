/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPMediaControlSession : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    unsigned long long  _mediaControlFlags;
    id /* block */  _mediaControlFlagsChangedHandler;
    <RPMessageable> * _messenger;
    bool  _registeredMediaControlInterest;
}

@property (nonatomic, readonly) unsigned long long mediaControlFlags;
@property (nonatomic, copy) id /* block */ mediaControlFlagsChangedHandler;
@property (nonatomic, retain) <RPMessageable> *messenger;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_handleMediaControlEvent:(id)arg1;
- (void)_invalidate;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)mediaCaptionSettingGetFromDestinationID:(id)arg1 completion:(id /* block */)arg2;
- (void)mediaCaptionSettingSet:(int)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (void)mediaCommand:(int)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)mediaControlFlags;
- (id /* block */)mediaControlFlagsChangedHandler;
- (void)mediaGetVolumeFromDestinationID:(id)arg1 completion:(id /* block */)arg2;
- (void)mediaSetVolume:(double)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (void)mediaSkipBySeconds:(double)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (id)messenger;
- (void)setMediaControlFlagsChangedHandler:(id /* block */)arg1;
- (void)setMessenger:(id)arg1;

@end
