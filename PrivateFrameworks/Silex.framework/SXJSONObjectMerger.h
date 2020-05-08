/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXJSONObjectMerger : NSObject {
    <SXJSONObjectMergerClassProviding> * _classProvider;
    NSArray * _exclusionKeys;
    NSMutableDictionary * _transformers;
}

@property (nonatomic, readonly) <SXJSONObjectMergerClassProviding> *classProvider;
@property (nonatomic, readonly) NSArray *exclusionKeys;
@property (nonatomic, readonly) NSMutableDictionary *transformers;

- (void).cxx_destruct;
- (void)addTransformer:(id)arg1 keyPath:(id)arg2;
- (id)appendKey:(id)arg1 keyPath:(id)arg2;
- (id)classProvider;
- (id)exclusionKeys;
- (id)initWithClassProvider:(id)arg1 exclusionKeys:(id)arg2;
- (id)initWithObjectClass:(Class)arg1 exclusionKeys:(id)arg2;
- (id)mergeDictionary:(id)arg1 withDictionary:(id)arg2 keyPath:(id)arg3;
- (id)mergeObjects:(id)arg1;
- (void)removeTransformerForKeyPath:(id)arg1;
- (id)replaceLastKeyOfKeyPath:(id)arg1 withKey:(id)arg2;
- (void)transformObject:(id)arg1 otherObject:(id)arg2 transformer:(id)arg3 key:(id)arg4 keyPath:(id)arg5 dictionary:(id)arg6;
- (id)transformers;

@end
