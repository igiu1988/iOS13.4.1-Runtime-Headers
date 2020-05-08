/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneManagerObserver> {
    FBSceneManager * _sceneManager;
    FBScene * _sceneToWaitForDeath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)dealloc;
- (id)initWithScene:(id)arg1;
- (id)scene;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;

@end
