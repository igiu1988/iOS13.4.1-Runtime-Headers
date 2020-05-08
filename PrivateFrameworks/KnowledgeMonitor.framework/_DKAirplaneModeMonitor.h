/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKAirplaneModeMonitor : _DKMonitor {
    bool  _airplaneModeStatus;
    struct __SCPreferences { } * _radioPrefs;
}

@property (nonatomic) bool airplaneModeStatus;
@property struct __SCPreferences { }*radioPrefs;

+ (id)_eventWithState:(bool)arg1;
+ (id)eventStream;

- (bool)airplaneModeStatus;
- (void)deactivate;
- (void)dealloc;
- (struct __SCPreferences { }*)radioPrefs;
- (void)setAirplaneModeStatus:(bool)arg1;
- (void)setRadioPrefs:(struct __SCPreferences { }*)arg1;
- (void)start;
- (void)stop;
- (void)updateAirplaneModeStatus;

@end
