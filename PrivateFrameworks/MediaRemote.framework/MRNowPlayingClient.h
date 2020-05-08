/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState> {
    _MRNowPlayingPlayerProtobuf * _activePlayer;
    NSMutableArray * _playerClients;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
}

@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *activePlayerPath;
@property (nonatomic, retain) _MRNowPlayingClientProtobuf *client;
@property (nonatomic, readonly) NSArray *playerClients;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void).cxx_destruct;
- (id)activePlayerPath;
- (id)client;
- (id)debugDescription;
- (id)description;
- (id)initWithPlayerPath:(id)arg1;
- (void)mergeClient:(id)arg1;
- (id)nowPlayingPlayerClientForPlayerPath:(id)arg1;
- (id)playerClients;
- (id)playerPath;
- (void)removePlayer:(id)arg1;
- (void)restoreNowPlayingClientState;
- (void)setClient:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (bool)updateActivePlayerPath:(id)arg1;

@end
