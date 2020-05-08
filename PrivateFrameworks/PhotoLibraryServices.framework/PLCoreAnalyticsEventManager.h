/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCoreAnalyticsEventManager : NSObject {
    NSMutableDictionary * _eventMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (id)_eventForEventName:(id)arg1;
- (id)description;
- (id)init;
- (void)mergePayload:(id)arg1 onEventWithName:(id)arg2;
- (void)publishAllEvents;
- (void)publishEventWithName:(id)arg1;
- (id)rawEventForEventName:(id)arg1;
- (void)removeEventWithName:(id)arg1;
- (void)removePayloadValueForKey:(id)arg1 onEventWithName:(id)arg2;
- (void)setPayloadValue:(id)arg1 forKey:(id)arg2 onEventWithName:(id)arg3;
- (double)startRecordingTimedEventToken;
- (void)stopRecordingTimedEventWithToken:(double)arg1 forKey:(id)arg2 onEventWithName:(id)arg3;

@end
