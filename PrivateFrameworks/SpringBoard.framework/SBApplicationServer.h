/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBApplicationServer : FBSServiceFacility {
    <SBApplicationServerHarmonyDelegate> * _harmonyDelegate;
    <SBApplicationServerMiscDelegate> * _miscDelegate;
    <SBApplicationServerMultiwindowDelegate> * _multiwindowDelegate;
    <SBApplicationServerShortcutDelegate> * _shortcutDelegate;
}

@property (nonatomic) <SBApplicationServerHarmonyDelegate> *harmonyDelegate;
@property (nonatomic) <SBApplicationServerMiscDelegate> *miscDelegate;
@property (nonatomic) <SBApplicationServerMultiwindowDelegate> *multiwindowDelegate;
@property (nonatomic) <SBApplicationServerShortcutDelegate> *shortcutDelegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleDeleteApplicationSnapshots:(id)arg1 fromClient:(id)arg2;
- (void)_handleHarmonyFetchWhitePointAdaptivityStyleMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleMultiwindowShortcutServiceClientMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleShortcutFetchApplicationShortcutItemsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleShortcutUpdateDynamicApplicationShortcutItemsMessage:(id)arg1 fromClient:(id)arg2;
- (id)_init;
- (void)dealloc;
- (id)harmonyDelegate;
- (id)miscDelegate;
- (id)multiwindowDelegate;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)setHarmonyDelegate:(id)arg1;
- (void)setMiscDelegate:(id)arg1;
- (void)setMultiwindowDelegate:(id)arg1;
- (void)setShortcutDelegate:(id)arg1;
- (id)shortcutDelegate;

@end
