/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSDisplayLayoutElement : FBSDisplayLayoutElement <SBSDisplayLayoutElement>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutRole;
@property (getter=sb_isTransitioning, setter=sb_setTransitioning:, nonatomic) bool sb_transitioning;
@property (getter=isSpringBoardElement, nonatomic, readonly) bool springBoardElement;
@property (readonly) Class superclass;

- (id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2;
- (bool)isSpringBoardElement;
- (long long)layoutRole;
- (bool)sb_isTransitioning;
- (void)sb_setTransitioning:(bool)arg1;
- (void)setLayoutRole:(long long)arg1;
- (id)succinctDescriptionBuilder;

@end
