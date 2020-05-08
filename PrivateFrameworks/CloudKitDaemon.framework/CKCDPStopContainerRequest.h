/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKCDPStopContainerRequest : PBRequest <NSCopying> {
    NSString * _containerName;
    NSString * _environment;
}

@property (nonatomic, retain) NSString *containerName;
@property (nonatomic, retain) NSString *environment;
@property (nonatomic, readonly) bool hasContainerName;
@property (nonatomic, readonly) bool hasEnvironment;

- (void).cxx_destruct;
- (id)containerName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)environment;
- (bool)hasContainerName;
- (bool)hasEnvironment;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainerName:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)writeTo:(id)arg1;

@end