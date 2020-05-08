/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMatchingSpan : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *domainObjectIdentifier;
@property (nonatomic) long long endIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long startIndex;
@property (readonly) Class superclass;

+ (id)matchingSpan;
+ (id)matchingSpanWithDictionary:(id)arg1 context:(id)arg2;

- (id)domainObjectIdentifier;
- (id)encodedClassName;
- (long long)endIndex;
- (id)groupIdentifier;
- (void)setDomainObjectIdentifier:(id)arg1;
- (void)setEndIndex:(long long)arg1;
- (void)setStartIndex:(long long)arg1;
- (long long)startIndex;

@end
