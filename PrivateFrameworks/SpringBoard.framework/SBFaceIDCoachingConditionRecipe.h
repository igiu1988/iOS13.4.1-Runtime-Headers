/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBFaceIDCoachingConditionRecipe : NSObject <SBTestRecipe>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)load;

- (bool)_overrideCoachingConditionEnabled;
- (void)_setOverrideCoachingConditionEnabled:(bool)arg1;
- (void)_setOverrideCoachingEvent:(unsigned long long)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;

@end
