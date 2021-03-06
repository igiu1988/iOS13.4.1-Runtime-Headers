/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem

@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *phone;

+ (long long)dataType;

- (id)email;
- (id)errors;
- (id)errorsForContactFields:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (id)name;
- (id)phone;
- (id)requiredContactFields;

@end
