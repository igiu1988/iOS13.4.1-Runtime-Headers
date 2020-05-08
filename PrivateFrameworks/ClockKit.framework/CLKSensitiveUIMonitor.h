/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKSensitiveUIMonitor : NSObject {
    bool  _hideSensitiveUI;
    bool  _needPrefsUpdate;
    int  _notifyToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observerLock;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _prefsLock;
}

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (bool)_isVendorRelease;
- (void)addSensitiveUIObserver:(id)arg1;
- (bool)hideSensitiveUISwitchEnabled;
- (id)init;
- (void)removeSensitiveUIObserver:(id)arg1;
- (bool)shouldHideForSensitivity:(long long)arg1;

@end
