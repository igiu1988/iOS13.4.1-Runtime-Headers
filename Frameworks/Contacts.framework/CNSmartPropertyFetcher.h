/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSmartPropertyFetcher : NSObject <CNKeyDescriptor_Private>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)arg1;
- (id)_cn_ignorableKeys;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
