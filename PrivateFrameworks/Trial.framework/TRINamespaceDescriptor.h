/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRINamespaceDescriptor : NSObject {
    NSString * _factorsPath;
    unsigned int  _namespaceCompatibilityVersion;
    unsigned int  _namespaceId;
    unsigned int  _namespaceVersion;
}

@property (nonatomic, readonly) NSString *factorsPath;
@property (nonatomic, readonly) unsigned int namespaceCompatibilityVersion;
@property (nonatomic, readonly) unsigned int namespaceId;
@property (nonatomic, readonly) unsigned int namespaceVersion;

+ (id)descriptorPathForNamespaceId:(unsigned int)arg1 fromDirectory:(id)arg2;
+ (id)descriptorsForDirectory:(id)arg1;
+ (id)loadFromFile:(id)arg1;
+ (id)loadWithNamespaceId:(unsigned int)arg1 fromDirectory:(id)arg2;
+ (bool)removeDescriptorWithNamespaceId:(unsigned int)arg1 fromDirectory:(id)arg2;

- (void).cxx_destruct;
- (id)dictionary;
- (id)factorsPath;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNamespaceId:(unsigned int)arg1 factorsPath:(id)arg2 namespaceVersion:(unsigned int)arg3 namespaceCompatibilityVersion:(unsigned int)arg4;
- (unsigned int)namespaceCompatibilityVersion;
- (unsigned int)namespaceId;
- (unsigned int)namespaceVersion;
- (bool)removeFromDirectory:(id)arg1;
- (bool)saveToDirectory:(id)arg1;
- (bool)writeToFile:(id)arg1;

@end