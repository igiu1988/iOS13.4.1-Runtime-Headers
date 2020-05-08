/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

@interface TPPeerDynamicInfo : NSObject {
    unsigned long long  _clock;
    NSData * _data;
    NSDictionary * _dispositions;
    NSSet * _excludedPeerIDs;
    NSSet * _includedPeerIDs;
    NSSet * _preapprovals;
    NSData * _sig;
}

@property (nonatomic, readonly) unsigned long long clock;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSDictionary *dispositions;
@property (nonatomic, readonly) NSSet *excludedPeerIDs;
@property (nonatomic, readonly) NSSet *includedPeerIDs;
@property (nonatomic, readonly) NSSet *preapprovals;
@property (nonatomic, retain) NSData *sig;

+ (id)dynamicInfoPBWithClock:(unsigned long long)arg1 includedPeerIDs:(id)arg2 excludedPeerIDs:(id)arg3 dispositions:(id)arg4 preapprovals:(id)arg5;
+ (id)dynamicInfoWithClock:(unsigned long long)arg1 includedPeerIDs:(id)arg2 excludedPeerIDs:(id)arg3 dispositions:(id)arg4 preapprovals:(id)arg5 signingKeyPair:(id)arg6 error:(id*)arg7;
+ (id)dynamicInfoWithData:(id)arg1 sig:(id)arg2;

- (void).cxx_destruct;
- (bool)checkSignatureWithKey:(id)arg1;
- (unsigned long long)clock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dispositions;
- (id)excludedPeerIDs;
- (id)includedPeerIDs;
- (id)initWithObj:(id)arg1 data:(id)arg2 sig:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeerDynamicInfo:(id)arg1;
- (id)preapprovals;
- (void)setData:(id)arg1;
- (void)setDispositions:(id)arg1;
- (void)setSig:(id)arg1;
- (id)sig;

@end