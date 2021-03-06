/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFDatabaseResultsController : NSObject <WFDatabaseResultObserver> {
    id /* block */  _block;
    NSOrderedSet * _currentObjects;
    WFDatabase * _database;
    NSMapTable * _observers;
    WFDatabaseResult * _result;
    struct _WFDatabaseResultsSlice { 
        unsigned long long startIndex; 
        unsigned long long endIndex; 
    }  _slice;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, copy) NSOrderedSet *currentObjects;
@property (nonatomic, readonly) WFDatabase *database;
@property (nonatomic, readonly) NSMapTable *observers;
@property (nonatomic, readonly) WFDatabaseResult *result;
@property (nonatomic) struct _WFDatabaseResultsSlice { unsigned long long x1; unsigned long long x2; } slice;

- (void).cxx_destruct;
- (void)_databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)addUpdateObserver:(id)arg1 selector:(SEL)arg2;
- (id /* block */)block;
- (unsigned long long)count;
- (id)currentObjects;
- (id)database;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (id)descriptorAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfDescriptor:(id)arg1;
- (id)initWithResult:(id)arg1 slice:(struct _WFDatabaseResultsSlice { unsigned long long x1; unsigned long long x2; })arg2 database:(id)arg3 block:(id /* block */)arg4;
- (void)notify;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (id)result;
- (void)setCurrentObjects:(id)arg1;
- (void)setSlice:(struct _WFDatabaseResultsSlice { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _WFDatabaseResultsSlice { unsigned long long x1; unsigned long long x2; })slice;
- (void)update;

@end
