/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDisbursementVoucher : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
    NSURL * _redemptionURL;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSURL *redemptionURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDisbursementVoucher:(id)arg1;
- (id)redemptionURL;
- (void)setData:(id)arg1;
- (void)setRedemptionURL:(id)arg1;

@end