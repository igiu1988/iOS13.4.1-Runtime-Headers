/* Generated by EzioChiu.
 */

@protocol SBSImplementer <NSObject>

@required

- (void)deviceAttributeChanged:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getAllDebugInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getTuningInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getUserDefaults:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)homeKitSettingForKeyPathChanged:(void *)arg1 updatedValue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)playTone:(unsigned int)arg1;
- (void)reboot:(NSDictionary *)arg1;
- (void)requestDeferredReboot;
- (void)resetAllUserDefaults;
- (void)resetUserDefault:(NSString *)arg1;
- (void)setAppleCareIsEnabled:(bool)arg1 withOptions:(NSDictionary *)arg2;
- (void)setDeviceAsStereoLeader:(bool)arg1 withOptions:(NSDictionary *)arg2;
- (void)setTuningInfoOnBox:(NSString *)arg1 at:(NSString *)arg2 withValue:(float)arg3;
- (void)setUserDefaults:(NSString *)arg1 withValue:(NSString *)arg2;
- (void)siriUtteranceFileToBePlayed:(void *)arg1 duckMusic:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSError *, void*
- (void)stopTone:(unsigned int)arg1;
- (void)sysdiagnoseHasStarted:(bool)arg1;

@end