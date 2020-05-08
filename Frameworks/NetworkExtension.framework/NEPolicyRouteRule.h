/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPolicyRouteRule : NSObject <NEPrettyDescription> {
    long long  _action;
    NSString * _interfaceName;
    long long  _type;
}

@property long long action;
@property (copy) NSString *interfaceName;
@property long long type;

+ (id)routeRuleWithAction:(long long)arg1 forInterfaceName:(id)arg2;
+ (id)routeRuleWithAction:(long long)arg1 forType:(long long)arg2;

- (void).cxx_destruct;
- (long long)action;
- (id)actionString;
- (unsigned char)actionValue;
- (bool)addTLVsToMessage:(id)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)init;
- (id)initInternal;
- (id)interfaceName;
- (void)setAction:(long long)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)typeString;
- (unsigned char)typeValue;
- (bool)validate;

@end
