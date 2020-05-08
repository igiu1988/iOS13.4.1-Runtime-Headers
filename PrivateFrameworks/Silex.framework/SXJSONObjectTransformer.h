/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXJSONObjectTransformer : NSObject <SXJSONObjectTransforming> {
    id /* block */  _block;
    NSString * _key;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *key;
@property (readonly) Class superclass;

+ (id)concatenatingTransformerWithKey:(id)arg1;
+ (id)mergingTransformerWithKey:(id)arg1;
+ (id)transformerWithKey:(id)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)key;
- (id)transformKey:(id)arg1;
- (id)transformObject:(id)arg1 otherObject:(id)arg2;

@end
