/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
 */

@interface NRDeviceProperties : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _pairingProtocolVersion;
}

@property (nonatomic) unsigned long long pairingProtocolVersion;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)pairingProtocolVersion;
- (void)setPairingProtocolVersion:(unsigned long long)arg1;

@end
