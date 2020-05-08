/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMutableUserMessagePolicy : HMDUserMessagePolicy

@property bool requiresCameraStreamingAccess;
@property bool requiresRemoteAccess;
@property unsigned long long userPrivilege;

+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(bool)arg3;
+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(bool)arg3 requiresCameraStreamingAccess:(bool)arg4;

- (void)setRequiresCameraStreamingAccess:(bool)arg1;
- (void)setRequiresRemoteAccess:(bool)arg1;
- (void)setUserPrivilege:(unsigned long long)arg1;

@end
