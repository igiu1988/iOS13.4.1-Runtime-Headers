/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface _MSPContainerEditRemoval : _MSPContainerEdit <MSPContainerEditRemoval> {
    NSIndexSet * _indexesOfRemovedObjects;
    NSArray * _originalObjects;
    NSArray * _removedImmutableObjects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexSet *indexesOfRemovedObjects;
@property (nonatomic, readonly) NSArray *originalObjects;
@property (nonatomic, readonly) NSArray *removedImmutableObjects;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)indexesOfRemovedObjects;
- (id)initWithRemovedObjects:(id)arg1 indexes:(id)arg2;
- (id)originalObjects;
- (id)removedImmutableObjects;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(id /* block */)arg2;

@end
