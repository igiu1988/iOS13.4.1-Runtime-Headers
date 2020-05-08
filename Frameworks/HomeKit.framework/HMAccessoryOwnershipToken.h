/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessoryOwnershipToken : NSObject <NSSecureCoding> {
    NSData * _internalData;
}

@property (nonatomic, retain) NSData *internalData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)internalData;
- (bool)isEqual:(id)arg1;
- (void)setInternalData:(id)arg1;

@end
