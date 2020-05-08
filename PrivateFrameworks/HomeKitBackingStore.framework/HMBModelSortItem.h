/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBModelSortItem : HMFObject {
    NSMutableSet * _dependentModels;
    unsigned long long  _mark;
    HMBModel * _model;
    NSUUID * _modelID;
    NSUUID * _parentModelID;
}

@property (nonatomic, retain) NSMutableSet *dependentModels;
@property (nonatomic) unsigned long long mark;
@property (nonatomic, retain) HMBModel *model;
@property (nonatomic, retain) NSUUID *modelID;
@property (nonatomic, retain) NSUUID *parentModelID;

- (void).cxx_destruct;
- (id)dependentModels;
- (id)initWithModel:(id)arg1;
- (unsigned long long)mark;
- (id)model;
- (id)modelID;
- (id)parentModelID;
- (void)setDependentModels:(id)arg1;
- (void)setMark:(unsigned long long)arg1;
- (void)setModel:(id)arg1;
- (void)setModelID:(id)arg1;
- (void)setParentModelID:(id)arg1;

@end
