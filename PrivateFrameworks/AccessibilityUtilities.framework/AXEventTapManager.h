/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventTapManager : NSObject {
    NSMutableArray * _addedEventTapPairs;
    NSRecursiveLock * _eventTapLock;
    NSMutableArray * _eventTaps;
    id /* block */  _installationEventRepPost;
    id /* block */  _installationGSCallback;
    id /* block */  _installationHIDCallback;
    struct __IOHIDEventSystemClient { } * _ioSystemPostBackClient;
    bool  _isEnumeratingEventTaps;
    NSMutableSet * _removedEventTapIdentifiers;
    bool  _shouldReorderEventTaps;
}

@property (nonatomic, copy) id /* block */ installationEventRepPost;
@property (nonatomic, copy) id /* block */ installationGSCallback;
@property (nonatomic, copy) id /* block */ installationHIDCallback;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_copyCurrentEventTapPairs;
- (void)_enumerateEventTapPairsUsingBlock:(id /* block */)arg1;
- (void)_handleTestIOHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_installEventTap:(id)arg1 skipDeviceMatching:(bool)arg2 wantsDigitizerEvents:(bool)arg3 wantsKeyboardEvents:(bool)arg4 wantsATVRemoteEvents:(bool)arg5 wantsLisaEvents:(bool)arg6 wantsMouseEvents:(bool)arg7;
- (void)_installHIDFilter:(id)arg1 skipDeviceMatching:(bool)arg2 wantsDigitizerEvents:(bool)arg3 wantsKeyboardEvents:(bool)arg4 wantsATVRemoteEvents:(bool)arg5 wantsLisaEvents:(bool)arg6 wantsMouseEvents:(bool)arg7;
- (void)_installSystemEventTap:(id)arg1;
- (void)_passivelyPeakAtHIDEventWithTarget:(void*)arg1 tapPair:(id)arg2 sender:(void*)arg3 event:(struct __IOHIDEvent { }*)arg4 axEventRep:(id)arg5 didHandle:(bool)arg6;
- (bool)_processGSEvent:(struct { int x1; int x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5; unsigned long long x6; void *x7; int x8; int x9; unsigned int x10; unsigned long long x11; unsigned char x12[0]; }*)arg1;
- (bool)_processHIDEvent:(struct __IOHIDEvent { }*)arg1 taskPort:(unsigned int)arg2 bundleId:(id)arg3;
- (void)_removeHIDEventTapFilter:(id)arg1;
- (void)_reorderEventTaps;
- (void)_runMatchingServiceHandler:(id)arg1;
- (void)_setEventTapPriority:(id)arg1 priority:(int)arg2;
- (void)_setGSEventTapCallback:(void*)arg1;
- (void)_setHIDEventTapCallback:(void*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)installEventTap:(id /* block */)arg1 identifier:(id)arg2 type:(int)arg3;
- (id)installEventTap:(id /* block */)arg1 identifier:(id)arg2 type:(int)arg3 skipDeviceMatching:(bool)arg4 wantsDigitizerEvents:(bool)arg5 wantsKeyboardEvents:(bool)arg6 wantsATVRemoteEvents:(bool)arg7 wantsLisaEvents:(bool)arg8 wantsMouseEvents:(bool)arg9;
- (id)installEventTap:(id /* block */)arg1 identifier:(id)arg2 type:(int)arg3 skipDeviceMatching:(bool)arg4 wantsDigitizerEvents:(bool)arg5 wantsKeyboardEvents:(bool)arg6 wantsATVRemoteEvents:(bool)arg7 wantsLisaEvents:(bool)arg8 wantsMouseEvents:(bool)arg9 matchingServiceHandler:(id /* block */)arg10;
- (id)installKeyboardEventTap:(id /* block */)arg1 identifier:(id)arg2 matchingServiceHandler:(id /* block */)arg3;
- (id /* block */)installationEventRepPost;
- (id /* block */)installationGSCallback;
- (id /* block */)installationHIDCallback;
- (void)removeEventTap:(id)arg1;
- (void)runMatchingServiceHandlerForEventTap:(id)arg1;
- (void)sendEvent:(id)arg1 afterTap:(id)arg2 useGSEvent:(bool)arg3 namedTaps:(id)arg4 options:(unsigned long long)arg5;
- (void)sendHIDSystemEvent:(id)arg1 repostCreatorHIDEvent:(bool)arg2 senderID:(unsigned long long)arg3;
- (void)sendHIDSystemEvent:(id)arg1 senderID:(unsigned long long)arg2;
- (void)setEventTapPriority:(id)arg1 priority:(int)arg2;
- (void)setInstallationEventRepPost:(id /* block */)arg1;
- (void)setInstallationGSCallback:(id /* block */)arg1;
- (void)setInstallationHIDCallback:(id /* block */)arg1;

@end
