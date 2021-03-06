/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKMultiplayerP2PViewController : GKMultiplayerViewController {
    GKInvite * _acceptedInvite;
    <GKMultiplayerP2PViewControllerDelegate> * _delegateWeak;
    bool  _hosted;
    double  _inviteeConnectionTimeStamp;
    long long  _mode;
}

@property (nonatomic, copy) GKInvite *acceptedInvite;
@property (nonatomic) <GKMultiplayerP2PViewControllerDelegate> *delegate;
@property (getter=isHosted, nonatomic) bool hosted;
@property (nonatomic) double inviteeConnectionTimeStamp;
@property (nonatomic) long long mode;

- (id)acceptedInvite;
- (void)applicationWillEnterForeground;
- (bool)canStartForcedAutomatch;
- (void)cancel;
- (void)cancelAlertWithoutDelegateCallback;
- (void)cancelPendingInvites;
- (void)configureDataSource;
- (void)dealloc;
- (id)delegate;
- (void)finishWithError:(id)arg1;
- (bool)haveInvitedPlayers;
- (bool)havePendingPlayers;
- (id)initWithAcceptedInvite:(id)arg1;
- (void)invitePlayers:(id)arg1;
- (double)inviteeConnectionTimeStamp;
- (void)inviterCancelled;
- (bool)isHosted;
- (void)loadShareURLWithCompletion:(id /* block */)arg1;
- (long long)mode;
- (void)playNow;
- (void)playerConnected:(id)arg1;
- (void)playerDisconnected:(id)arg1;
- (void)processStatusUpdateMessageFromBytes:(const char *)arg1 withLength:(unsigned int)arg2;
- (void)removedPlayer:(id)arg1;
- (void)sendStatusUpdate;
- (void)setAcceptedInvite:(id)arg1;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExistingPlayers:(id)arg1;
- (void)setFailedWithError:(id)arg1;
- (void)setHosted:(bool)arg1;
- (void)setInviteeConnectionTimeStamp:(double)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setPlayer:(id)arg1 connected:(bool)arg2;
- (void)setPlayer:(id)arg1 responded:(long long)arg2;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)shareFinishedWithContactPlayers:(id)arg1 legacyPlayers:(id)arg2;
- (void)showAutomatchingErrorAlert;
- (void)showInviterDisconnectedAlert;
- (void)startGame;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)willPresentPlayerPicker:(id)arg1;
- (void)willQueryGKIDs;
- (void)willShare;

@end
