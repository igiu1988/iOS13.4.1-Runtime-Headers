/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2AddressAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {
    NWAddressEndpoint * _address;
    unsigned long long  _customType;
}

@property (retain) NWAddressEndpoint *address;
@property (nonatomic) unsigned long long customType;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)address;
- (unsigned long long)attributeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)customType;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3;
- (id)initWithAddress:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setCustomType:(unsigned long long)arg1;

@end
