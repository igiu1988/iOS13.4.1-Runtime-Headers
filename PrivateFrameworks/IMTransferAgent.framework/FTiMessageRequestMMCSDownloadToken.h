/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

@interface FTiMessageRequestMMCSDownloadToken : IDSMessage <NSCopying> {
    NSString * _authURLString;
    NSString * _contentHeaders;
    long long  _contentVersion;
    NSString * _owner;
    NSString * _responseAuthToken;
    NSData * _responseContentBody;
    long long  _responseContentVersion;
    NSString * _responseRequestorID;
    NSData * _signature;
}

@property (copy) NSString *authURLString;
@property (copy) NSString *contentHeaders;
@property long long contentVersion;
@property (copy) NSString *owner;
@property (copy) NSString *responseAuthToken;
@property (copy) NSData *responseContentBody;
@property long long responseContentVersion;
@property (copy) NSString *responseRequestorID;
@property (copy) NSData *signature;

- (id)authURLString;
- (long long)command;
- (id)contentHeaders;
- (long long)contentVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)init;
- (id)messageBody;
- (id)owner;
- (id)requiredKeys;
- (id)responseAuthToken;
- (long long)responseCommand;
- (id)responseContentBody;
- (long long)responseContentVersion;
- (id)responseRequestorID;
- (void)setAuthURLString:(id)arg1;
- (void)setContentHeaders:(id)arg1;
- (void)setContentVersion:(long long)arg1;
- (void)setOwner:(id)arg1;
- (void)setResponseAuthToken:(id)arg1;
- (void)setResponseContentBody:(id)arg1;
- (void)setResponseContentVersion:(long long)arg1;
- (void)setResponseRequestorID:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
