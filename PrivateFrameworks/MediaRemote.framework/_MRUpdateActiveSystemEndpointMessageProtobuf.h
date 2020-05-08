/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRUpdateActiveSystemEndpointMessageProtobuf : PBCodable <NSCopying> {
    int  _changeType;
    struct { 
        unsigned int changeType : 1; 
        unsigned int operation : 1; 
    }  _has;
    int  _operation;
    NSString * _outputDeviceUID;
    NSString * _reason;
}

@property (nonatomic) int changeType;
@property (nonatomic) bool hasChangeType;
@property (nonatomic) bool hasOperation;
@property (nonatomic, readonly) bool hasOutputDeviceUID;
@property (nonatomic, readonly) bool hasReason;
@property (nonatomic) int operation;
@property (nonatomic, retain) NSString *outputDeviceUID;
@property (nonatomic, retain) NSString *reason;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (int)StringAsOperation:(id)arg1;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChangeType;
- (bool)hasOperation;
- (bool)hasOutputDeviceUID;
- (bool)hasReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)operation;
- (id)operationAsString:(int)arg1;
- (id)outputDeviceUID;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (void)setChangeType:(int)arg1;
- (void)setHasChangeType:(bool)arg1;
- (void)setHasOperation:(bool)arg1;
- (void)setOperation:(int)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)setReason:(id)arg1;
- (void)writeTo:(id)arg1;

@end
