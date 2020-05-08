/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDNetworkRouterWANStatus : NSObject <HMDTLVProtocol, NSCopying> {
    HMDTLVUnsignedNumberValue * _identifier;
    HMDTLVUnsignedNumberValue * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDTLVUnsignedNumberValue *identifier;
@property (nonatomic, retain) HMDTLVUnsignedNumberValue *status;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 status:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
