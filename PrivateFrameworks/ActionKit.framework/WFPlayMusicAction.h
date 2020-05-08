/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFPlayMusicAction : WFAction

- (void)finishRunningWithError:(id)arg1;
- (void)getContentFromInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)localizedKeyParameterDisplayName;
- (void)playContent:(id)arg1 withMusicPlayer:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)playContentViaMPCAssistant:(id)arg1 routeDescriptor:(id)arg2;
- (void)playContentViaMusicPlayer:(id)arg1;
- (long long)repeatMode;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)sendPlaybackArchive:(id)arg1 orPlaybackQueue:(id)arg2 toDestination:(id)arg3 completion:(id /* block */)arg4;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (long long)shuffleMode;

@end
