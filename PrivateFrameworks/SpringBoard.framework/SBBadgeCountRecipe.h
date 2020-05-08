/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBBadgeCountRecipe : NSObject <SBTestRecipe> {
    unsigned long long  _badgeCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)load;

- (void)_changeBadge:(unsigned long long)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;

@end
