/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRemotePassUpdateRequest : PBRequest <NSCopying> {
    bool  _cancelUpdate;
    struct { 
        unsigned int cancelUpdate : 1; 
        unsigned int requestAuthorization : 1; 
        unsigned int shouldNotifyUser : 1; 
    }  _has;
    NPKProtoPass * _pass;
    NSString * _passID;
    bool  _requestAuthorization;
    bool  _shouldNotifyUser;
    NSData * _updateRequestData;
}

@property (nonatomic) bool cancelUpdate;
@property (nonatomic) bool hasCancelUpdate;
@property (nonatomic, readonly) bool hasPass;
@property (nonatomic) bool hasRequestAuthorization;
@property (nonatomic) bool hasShouldNotifyUser;
@property (nonatomic, readonly) bool hasUpdateRequestData;
@property (nonatomic, retain) NPKProtoPass *pass;
@property (nonatomic, retain) NSString *passID;
@property (nonatomic) bool requestAuthorization;
@property (nonatomic) bool shouldNotifyUser;
@property (nonatomic, retain) NSData *updateRequestData;

- (void).cxx_destruct;
- (bool)cancelUpdate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCancelUpdate;
- (bool)hasPass;
- (bool)hasRequestAuthorization;
- (bool)hasShouldNotifyUser;
- (bool)hasUpdateRequestData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pass;
- (id)passID;
- (bool)readFrom:(id)arg1;
- (bool)requestAuthorization;
- (void)setCancelUpdate:(bool)arg1;
- (void)setHasCancelUpdate:(bool)arg1;
- (void)setHasRequestAuthorization:(bool)arg1;
- (void)setHasShouldNotifyUser:(bool)arg1;
- (void)setPass:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)setRequestAuthorization:(bool)arg1;
- (void)setShouldNotifyUser:(bool)arg1;
- (void)setUpdateRequestData:(id)arg1;
- (bool)shouldNotifyUser;
- (id)updateRequestData;
- (void)writeTo:(id)arg1;

@end
