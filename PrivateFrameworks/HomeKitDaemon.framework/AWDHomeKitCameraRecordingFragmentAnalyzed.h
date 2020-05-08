/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraRecordingFragmentAnalyzed : PBCodable <NSCopying> {
    unsigned long long  _analysisResultCode;
    NSString * _cameraUUID;
    NSString * _clipModelID;
    unsigned long long  _duration;
    struct { 
        unsigned int analysisResultCode : 1; 
        unsigned int duration : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int timestamp : 1; 
        unsigned int recordingReason : 1; 
    }  _has;
    int  _recordingReason;
    unsigned long long  _sequenceNumber;
    NSString * _sessionUUID;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long analysisResultCode;
@property (nonatomic, retain) NSString *cameraUUID;
@property (nonatomic, retain) NSString *clipModelID;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) bool hasAnalysisResultCode;
@property (nonatomic, readonly) bool hasCameraUUID;
@property (nonatomic, readonly) bool hasClipModelID;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasRecordingReason;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int recordingReason;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (int)StringAsRecordingReason:(id)arg1;
- (unsigned long long)analysisResultCode;
- (id)cameraUUID;
- (id)clipModelID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (bool)hasAnalysisResultCode;
- (bool)hasCameraUUID;
- (bool)hasClipModelID;
- (bool)hasDuration;
- (bool)hasRecordingReason;
- (bool)hasSequenceNumber;
- (bool)hasSessionUUID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)recordingReason;
- (id)recordingReasonAsString:(int)arg1;
- (unsigned long long)sequenceNumber;
- (id)sessionUUID;
- (void)setAnalysisResultCode:(unsigned long long)arg1;
- (void)setCameraUUID:(id)arg1;
- (void)setClipModelID:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasAnalysisResultCode:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasRecordingReason:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRecordingReason:(int)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
