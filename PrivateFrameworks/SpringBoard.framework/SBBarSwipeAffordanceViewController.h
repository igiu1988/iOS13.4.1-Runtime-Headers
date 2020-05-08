/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBBarSwipeAffordanceViewController : UIViewController <SBHomeGestureParticipantDelegate> {
    SBHomeGestureParticipant * _homeGestureParticipant;
    long long  _homeGestureParticipantIdentifier;
    bool  _suppressAffordance;
    bool  _wantsToBeActiveAffordance;
}

@property (nonatomic) bool suppressAffordance;
@property (nonatomic, retain) SBBarSwipeAffordanceView *view;
@property (nonatomic) bool wantsToBeActiveAffordance;

- (void).cxx_destruct;
- (void)_beginTryingToBecomeActiveAffordance;
- (bool)_canShowWhileLocked;
- (void)_stopTryingToBecomeActiveAffordance;
- (void)_updateActiveState;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)initWithHomeGestureParticipantIdentifier:(long long)arg1;
- (void)loadView;
- (void)setSuppressAffordance:(bool)arg1;
- (void)setWantsToBeActiveAffordance:(bool)arg1;
- (bool)suppressAffordance;
- (bool)wantsToBeActiveAffordance;

@end
