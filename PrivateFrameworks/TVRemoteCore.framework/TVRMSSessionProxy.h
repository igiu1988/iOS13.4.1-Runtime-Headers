/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRMSSessionProxy : NSObject {
    NSTimer * _heartbeatTimer;
    bool  _isPaused;
    double  _lastHeartbeatTime;
    int  _sessionIdentifier;
    double  _sessionTimeout;
}

@property (nonatomic) int sessionIdentifier;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_sendHeartbeat:(id)arg1;
- (void)beginHeartbeat;
- (void)dealloc;
- (void)endHeartbeat;
- (void)heartbeatDidFail;
- (int)heartbeatTime;
- (id)init;
- (id)initWithTimeout:(double)arg1;
- (int)sessionIdentifier;
- (bool)sessionMatchesNotification:(id)arg1;
- (void)setSessionIdentifier:(int)arg1;

@end
