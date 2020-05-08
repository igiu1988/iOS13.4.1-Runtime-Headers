/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBPrototypeDumpingGround : NSObject <PTSettingsKeyObserver> {
    id  _appLaunchedNotificationToken;
    SBBiometricMonitorUI * _pearlMonitorUI;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updatePearlDebugUI;
- (void)dealloc;
- (id)init;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
