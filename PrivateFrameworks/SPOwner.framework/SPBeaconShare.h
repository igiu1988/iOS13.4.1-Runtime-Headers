/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding> {
    bool  _accepted;
    NSString * _correlationIdentifier;
    NSDate * _expiration;
    SPHandle * _handle;
    NSUUID * _identifier;
}

@property (nonatomic) bool accepted;
@property (nonatomic, copy) NSString *correlationIdentifier;
@property (nonatomic, copy) NSDate *expiration;
@property (nonatomic, copy) SPHandle *handle;
@property (nonatomic, copy) NSUUID *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accepted;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correlationIdentifier;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)expiration;
- (id)handle;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 accepted:(bool)arg3 expiration:(id)arg4 correlationIdentifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)setAccepted:(bool)arg1;
- (void)setCorrelationIdentifier:(id)arg1;
- (void)setExpiration:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
