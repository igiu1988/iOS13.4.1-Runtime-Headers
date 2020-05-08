/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2EAPProtocol : NSObject <NSCopying> {
    unsigned long long  _method;
    NSDictionary * _properties;
}

@property (readonly) bool isCertificate;
@property (readonly) bool isUserNamePassword;
@property unsigned long long method;
@property (retain) NSDictionary *properties;
@property (readonly) unsigned int type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMethod:(unsigned long long)arg1;
- (bool)isCertificate;
- (bool)isEqual:(id)arg1;
- (bool)isUserNamePassword;
- (unsigned long long)method;
- (id)properties;
- (void)setMethod:(unsigned long long)arg1;
- (void)setProperties:(id)arg1;
- (unsigned int)type;

@end
