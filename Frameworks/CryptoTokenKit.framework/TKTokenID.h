/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _stringRepresentation;
}

@property (readonly) NSString *classID;
@property (readonly) NSString *instanceID;
@property (readonly) NSString *stringRepresentation;

+ (id)encodedObjectID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedObjectID:(id)arg1 error:(id*)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClassID:(id)arg1 instanceID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokenID:(id)arg1;
- (id)instanceID;
- (bool)isEqual:(id)arg1;
- (id)stringRepresentation;

@end
