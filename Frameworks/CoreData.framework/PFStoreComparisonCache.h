/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFStoreComparisonCache : NSObject {
    NSMutableDictionary * _identifierToStoreUUIDToObjectID;
    NSMutableDictionary * _storeUUIDToIdentifiers;
}

- (void)dealloc;
- (id)identifiersForStore:(id)arg1;
- (id)init;
- (id)objectIDForIdentifier:(id)arg1 inStore:(id)arg2;
- (void)setObjectID:(id)arg1 forIdentifier:(id)arg2;

@end
