/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKTransitAppletAmount : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSString * _currency;
    long long  _exponent;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic) long long exponent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (void)encodeWithCoder:(id)arg1;
- (long long)exponent;
- (id)initWithAmount:(id)arg1 currency:(id)arg2 exponent:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setAmount:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setExponent:(long long)arg1;

@end