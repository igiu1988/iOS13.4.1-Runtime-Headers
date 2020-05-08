/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext {
    NSManagedObjectContext * _managedObjectContext;
    NSMutableDictionary * _objectIDToAnalyzerStateCache;
}

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;

- (id)analyzerStateForChangedObjectID:(id)arg1 error:(id*)arg2;
- (id)cloudKitAnalyzerOptions;
- (void)dealloc;
- (id)fetchSortedStates:(id*)arg1;
- (bool)finishProcessing:(id*)arg1;
- (id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2;
- (id)managedObjectContext;
- (id)newAnalyzerStateForChange:(id)arg1 error:(id*)arg2;
- (bool)processChange:(id)arg1 error:(id*)arg2;
- (bool)reset:(id*)arg1;
- (bool)resetStateForObjectID:(id)arg1 error:(id*)arg2;

@end
