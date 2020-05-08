/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKServiceProviderPurchaseAction : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;

+ (id)actionWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToServiceProviderPurchaseAction:(id)arg1;
- (id)localizedDescription;
- (id)localizedTitle;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end
