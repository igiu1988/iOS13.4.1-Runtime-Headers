/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureDisplayLayoutMonitor : NSObject {
    struct OpaqueFigSimpleMutex { } * _appsLock;
    NSMutableArray * _fullScreenApps;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    NSMutableArray * _layoutObservers;
    struct OpaqueFigSimpleMutex { } * _layoutObserversLock;
    NSMutableArray * _nonFullScreenApps;
    NSMutableArray * _obscuredApps;
    NSMutableArray * _transitioningApps;
}

@property (getter=isOnHomeScreen, nonatomic, readonly) bool onHomeScreen;
@property (getter=isOnLockScreen, nonatomic, readonly) bool onLockScreen;

+ (int)_openFrontBoardServicesFramework;
+ (void)initialize;
+ (id)sharedDisplayLayoutMonitor;

- (void)_updateCurrentLayout:(id)arg1;
- (void)_updateObserversWithForegroundApps:(id)arg1 obscuredApps:(id)arg2 transitioningApps:(id)arg3;
- (void)addLayoutObserver:(id)arg1;
- (void)dealloc;
- (id)initWithFBSDisplayLayoutMonitorCreateFunction:(int (*)arg1;
- (bool)isOnHomeScreen;
- (bool)isOnLockScreen;
- (void)removeLayoutObserver:(id)arg1;

@end
