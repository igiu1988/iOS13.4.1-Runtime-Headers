/* Generated by EzioChiu.
 */

@protocol RLMThreadConfined_Private <NSObject>

@required

+ (id)objectWithThreadSafeReference:(struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct ThreadSafeReferenceBase {} *x_1_1_1; } x1; })arg1 metadata:(id)arg2 realm:(RLMRealm *)arg3;

- (struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct ThreadSafeReferenceBase {} *x_1_1_1; } x1; })makeThreadSafeReference;
- (id)objectiveCMetadata;

@end
