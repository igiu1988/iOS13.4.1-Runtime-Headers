/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKPeerPayment3DStore : NSObject <PKMotionManagerClientProtocol> {
    NSMutableArray * _activeScenes;
    NSCache * _cache;
    void _lastRollPitch;
    PKMotionManager * _motionManager;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _rotationMatrix;
    NSObject<OS_dispatch_queue> * _sceneLoadingQueue;
    NSObject<OS_dispatch_queue> * _scenesQueue;
    void _skew;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _staticRotationMatrix;
    void _staticSkew;
    SCNMaterial * _textMaterial;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)charactersForText:(id)arg1 completion:(id /* block */)arg2 synchronously:(bool)arg3;
- (id)init;
- (id)material;
- (void)motionManager:(id)arg1 didReceiveMotion:(id)arg2;
- (void)newSceneWithCompletion:(id /* block */)arg1 synchronously:(bool)arg2;
- (id)nodeForCharacter:(id)arg1;
- (void)relinquishScene:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidBecomeInactive:(id)arg1;
- (void)setRollPitch;

@end
