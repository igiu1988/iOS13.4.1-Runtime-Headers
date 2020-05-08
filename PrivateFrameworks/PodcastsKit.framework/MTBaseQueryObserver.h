/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface MTBaseQueryObserver : NSObject <NSFetchedResultsControllerDelegate> {
    NSFetchedResultsController * _frc;
    NSMutableDictionary * _handlers;
    NSString * _identifier;
    bool  _isObserving;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *handlers;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isObserving;
@property (readonly) Class superclass;

+ (Class)fetchedResultsControllerClass;

- (void).cxx_destruct;
- (id)_frc;
- (id)addResultsChangedHandler:(id)arg1;
- (id)handlers;
- (id)identifier;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 background:(bool)arg3;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 managedObjectContext:(id)arg3;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 propertiesToFetch:(id)arg5;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 returnObjectsAsFaults:(bool)arg4;
- (id)initWithFetchRequest:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2;
- (bool)isObserving;
- (id)managedObjectContext;
- (id)predicate;
- (void)removeAllResultsChangedHandlers;
- (void)removeResultsChangedHandler:(id)arg1;
- (void)results:(id /* block */)arg1;
- (void)setHandlers:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsObserving:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (id)sortDescriptors;
- (void)startObserving;
- (void)stop;
- (id)uuids;

@end
