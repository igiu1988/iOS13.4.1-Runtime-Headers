/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNTestSmartFetcher : NSObject <CNKeyDescriptor_Private> {
    NSArray * _optionalKeys;
    NSArray * _requiredKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *optionalKeys;
@property (nonatomic, readonly) NSArray *requiredKeys;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)arg1;
- (id)_cn_ignorableKeys;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequiredKeys:(id)arg1 optionalKeys:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)optionalKeys;
- (id)requiredKeys;

@end
