/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFClientSubCredentialParams : NSObject <NSSecureCoding> {
    NSString * _adamID;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, copy) NSString *adamID;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adamID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAdamID:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
