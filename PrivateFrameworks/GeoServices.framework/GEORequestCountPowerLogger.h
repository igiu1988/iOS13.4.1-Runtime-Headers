/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestCountPowerLogger : NSObject {
    GEOXPCActivity * _activity;
    NSMutableDictionary * _clientInfo;
    NSString * _eventName;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _startDate;
}

+ (void)cancelOldActivities;
+ (id)sharedInstance;
+ (bool)shouldIgnoreRequestType:(unsigned char)arg1 fromClientWithId:(id)arg2;

- (void).cxx_destruct;
- (void)_cancelXpcActivity;
- (void)_flushToPowerLog;
- (void)_scheduleXpcActivity;
- (void)dealloc;
- (void)incrementCountForClient:(id)arg1 requestType:(unsigned char)arg2;
- (id)init;
- (void)startNewSessionWithName:(id)arg1;

@end
