/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManagerLoader : NSObject {
    NSMutableDictionary * _activeInputManagers;
    NSMutableDictionary * _availableInputManagers;
    TIKeyboardInputManagerLoaderSyncHelper * _helper;
    NSXPCConnection * _interactingConnection;
    NSMutableDictionary * _lastUsedDate;
    TIKeyboardInputManagerBase * _mostRecentlyRequested;
}

@property (nonatomic) NSXPCConnection *interactingConnection;
@property (nonatomic, retain) TIKeyboardInputManagerBase *mostRecentlyRequested;

+ (id)sharedLoader;

- (void).cxx_destruct;
- (id)activeInputModeIdentifiers;
- (void)cacheInputManager:(id)arg1;
- (void)dealloc;
- (bool)hasActiveInputManagers;
- (id)init;
- (id)inputManagerForInputMode:(id)arg1 withKeyboardState:(id)arg2 class:(Class)arg3;
- (id)interactingConnection;
- (bool)isActiveInputManager:(id)arg1;
- (void)jettisonAllActiveInputManagers;
- (id)mostRecentlyRequested;
- (void)reduceCacheToSize:(unsigned long long)arg1;
- (void)registerMaintenanceActivity;
- (id)resourceInputModes;
- (void)setInteractingConnection:(id)arg1;
- (void)setMostRecentlyRequested:(id)arg1;
- (void)startSyncHelper;

@end
