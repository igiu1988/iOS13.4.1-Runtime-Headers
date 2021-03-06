/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBHomeGestureArbiterRecipe : NSObject <SBTestRecipe> {
    SBHomeGestureParticipant * _participant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHomeGestureParticipant *participant;
@property (readonly) Class superclass;

+ (void)load;

- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)participant;
- (void)setParticipant:(id)arg1;
- (id)title;

@end
