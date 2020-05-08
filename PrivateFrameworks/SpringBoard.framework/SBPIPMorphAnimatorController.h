/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBPIPMorphAnimatorController : NSObject <SBViewMorphAnimatorObserver> {
    long long  _completedTargetAnimations;
    PGPictureInPictureViewController * _pictureInPictureViewController;
    long long  _startedSourceAnimations;
    NSUUID * _uuid;
    SBViewMorphAnimator * _viewMorphAnimator;
    SBPIPMorphAnimatorDataSource * _viewMorphAnimatorDataSource;
}

@property (nonatomic) long long completedTargetAnimations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PGPictureInPictureViewController *pictureInPictureViewController;
@property (nonatomic) long long startedSourceAnimations;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) SBViewMorphAnimator *viewMorphAnimator;
@property (nonatomic, readonly) SBPIPMorphAnimatorDataSource *viewMorphAnimatorDataSource;

- (void).cxx_destruct;
- (void)_terminate;
- (void)animatorWasInterrupted:(id)arg1;
- (void)cancel;
- (long long)completedTargetAnimations;
- (void)didEndSourceAnimations:(unsigned long long)arg1 finished:(bool)arg2 continueBlock:(id /* block */)arg3;
- (void)didEndTargetAnimations:(unsigned long long)arg1 finished:(bool)arg2 continueBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithTargetProcessIdentifier:(int)arg1 uuid:(id)arg2 scenePersistenceIdentifier:(id)arg3;
- (void)interrupt;
- (id)pictureInPictureViewController;
- (id)scenePersistenceIdentifier;
- (void)setCompletedTargetAnimations:(long long)arg1;
- (void)setPictureInPictureViewController:(id)arg1;
- (void)setStartedSourceAnimations:(long long)arg1;
- (long long)startedSourceAnimations;
- (int)targetProcessIdentifier;
- (id)uuid;
- (id)viewMorphAnimator;
- (id)viewMorphAnimatorDataSource;

@end