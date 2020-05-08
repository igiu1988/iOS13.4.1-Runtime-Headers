/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRecordingLogEvent : HMDLogEvent {
    NSUUID * _cameraID;
    unsigned long long  _sequenceNumber;
    NSUUID * _sessionID;
}

@property (readonly, copy) NSUUID *cameraID;
@property (readonly) unsigned long long endTimestamp;
@property (readonly, copy) NSUUID *ephemeralCameraID;
@property unsigned long long sequenceNumber;
@property (readonly, copy) NSUUID *sessionID;
@property (readonly) unsigned long long startTimestamp;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)cameraID;
- (unsigned long long)endTimestamp;
- (id)ephemeralCameraID;
- (id)initWithEventType:(id)arg1 sessionID:(id)arg2 cameraID:(id)arg3 sequenceNumber:(unsigned long long)arg4;
- (unsigned long long)sequenceNumber;
- (id)sessionID;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (unsigned long long)startTimestamp;

@end