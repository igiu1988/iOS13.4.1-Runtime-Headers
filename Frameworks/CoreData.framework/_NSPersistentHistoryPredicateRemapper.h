/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSPersistentHistoryPredicateRemapper : NSObject {
    NSString * _storeID;
}

+ (id)defaultInstance;

- (id)createPredicateForFetchFromPredicate:(id)arg1;
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;
- (void)dealloc;
- (id)initWithStoreIdentifier:(id)arg1;
- (id)replacementValueForKeyPath:(id)arg1;
- (id)replacementValueForValue:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;

@end
