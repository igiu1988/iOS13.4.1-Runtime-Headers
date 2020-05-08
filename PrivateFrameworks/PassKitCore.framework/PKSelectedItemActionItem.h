/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSelectedItemActionItem : NSObject <NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSString * _currency;
    NSString * _identifier;
    NSDate * _newExpirationDate;
    NSDictionary * _serviceProviderData;
    bool  _serviceProviderDataRequiresLocalBalance;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSDecimalNumber *amount;
@property (nonatomic, readonly, copy) NSString *currency;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDate *newExpirationDate;
@property (nonatomic, readonly, copy) NSDictionary *serviceProviderData;
@property (nonatomic, readonly) bool serviceProviderDataRequiresLocalBalance;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_processLocalizableStrings:(id /* block */)arg1;
- (id)amount;
- (id)currency;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)newExpirationDate;
- (id)serviceProviderData;
- (bool)serviceProviderDataRequiresLocalBalance;
- (id)serviceProviderDataWithCurrentLocalBalance:(id)arg1;
- (id)title;

@end
