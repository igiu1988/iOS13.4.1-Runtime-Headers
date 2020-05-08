/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface _GKBubbleFlowPathTransitionInfo : NSObject {
    NSDictionary * _auxiliaryInfo;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _bubbleEndPositionsByType;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _bubbleStartPositionsByType;
    GKBubbleSet * _bubbles;
    bool  _couldUseFallbackAnimator;
    double  _duration;
    UIView * _effectiveView;
    long long  _focusBubbleType;
    long long  _newlyVisibleBubbles;
    double  _startTime;
}

@property (nonatomic, retain) NSDictionary *auxiliaryInfo;
@property (nonatomic) GKBubbleSet *bubbles;
@property (nonatomic) bool couldUseFallbackAnimator;
@property (nonatomic) double duration;
@property (nonatomic) UIView *effectiveView;
@property (nonatomic) long long focusBubbleType;
@property (nonatomic) long long newlyVisibleBubbles;
@property (nonatomic) double startTime;

- (id)auxiliaryInfo;
- (id)bubbles;
- (bool)couldUseFallbackAnimator;
- (void)dealloc;
- (id)description;
- (double)duration;
- (id)effectiveView;
- (long long)focusBubbleType;
- (id)init;
- (long long)newlyVisibleBubbles;
- (void)setAuxiliaryInfo:(id)arg1;
- (void)setBubbles:(id)arg1;
- (void)setCouldUseFallbackAnimator:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEffectiveView:(id)arg1;
- (void)setFocusBubbleType:(long long)arg1;
- (void)setNewlyVisibleBubbles:(long long)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
