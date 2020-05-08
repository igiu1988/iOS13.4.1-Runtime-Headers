/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFTrustSignRequest : NFTrustObject {
    NSData * _challenge;
    NSData * _data;
}

@property (nonatomic, retain) NSData *challenge;
@property (nonatomic, retain) NSData *data;

+ (id)signRequestWithChallenge:(id)arg1 data:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)challenge;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setChallenge:(id)arg1;
- (void)setData:(id)arg1;

@end
