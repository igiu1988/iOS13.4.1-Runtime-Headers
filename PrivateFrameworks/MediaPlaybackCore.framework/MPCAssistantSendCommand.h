/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCAssistantSendCommand : NSObject {
    MPCAssistantConnection * _connection;
    MPCAssistantDiscovery * _discovery;
}

- (void).cxx_destruct;
- (void*)_findEndpointFromEndpoints:(id)arg1 byGroupLeader:(id)arg2;
- (void)_formGroupAndSendCommand:(unsigned int)arg1 withOptions:(id)arg2 toExternalDestination:(id)arg3 completion:(id /* block */)arg4;
- (bool)_isAnyDeviceControllable:(id)arg1;
- (void)_sendCommand:(unsigned int)arg1 path:(void*)arg2 options:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)_sendCommand:(unsigned int)arg1 withOptions:(id)arg2 toEndpoint:(void*)arg3 toDestination:(id)arg4 completion:(id /* block */)arg5;
- (id)init;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 toEndpointDestination:(id)arg3 completion:(id /* block */)arg4;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 toLocalDestination:(id)arg3 completion:(id /* block */)arg4;

@end
