/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKApplicationStateMonitor : NSObject {
    BKSApplicationStateMonitor * _applicationStateMonitor;
}

@property (nonatomic, retain) BKSApplicationStateMonitor *applicationStateMonitor;
@property (nonatomic, copy) id /* block */ handler;

- (id)applicationStateMonitor;
- (void)dealloc;
- (id /* block */)handler;
- (id)init;
- (bool)observingStateChangesForBundleID:(id)arg1;
- (void)setApplicationStateMonitor:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)startObservingStateChangesForBundleID:(id)arg1;

@end
