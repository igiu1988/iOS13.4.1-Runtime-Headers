/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSIncomingRequest : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding> {
    NSData * _data;
    bool  _expectsResponse;
    IDSMessageContext * _idsContext;
    NSString * _idsIdentifier;
    NMSMessageCenter * _messageCenter;
    unsigned short  _messageID;
    id  _pbRequest;
    unsigned long long  _priority;
    NMSOutgoingResponse * _response;
    NSObject<OS_os_transaction> * _transaction;
    NSString * sourceDeviceID;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expectsResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSMessageContext *idsContext;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic) NMSMessageCenter *messageCenter;
@property (nonatomic) unsigned short messageID;
@property (nonatomic, retain) id pbRequest;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) NMSOutgoingResponse *response;
@property (nonatomic, retain) NSString *sourceDeviceID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

+ (bool)allowsUnrepliedRequestsForUnitTesting;
+ (void)setAllowsUnrepliedRequestsForUnitTesting:(bool)arg1;

- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
- (void)configureResponse;
- (id)data;
- (void)dealloc;
- (id)description;
- (bool)expectsResponse;
- (id)idsContext;
- (id)idsIdentifier;
- (id)init;
- (id)messageCenter;
- (unsigned short)messageID;
- (id)pbRequest;
- (unsigned long long)priority;
- (id)response;
- (void)setData:(id)arg1;
- (void)setExpectsResponse:(bool)arg1;
- (void)setIdsContext:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setPbRequest:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setResponse:(id)arg1;
- (void)setSourceDeviceID:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)sourceDeviceID;
- (id)transaction;

@end
