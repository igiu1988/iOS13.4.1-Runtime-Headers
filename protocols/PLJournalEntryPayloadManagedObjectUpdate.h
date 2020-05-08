/* Generated by EzioChiu.
 */

@protocol PLJournalEntryPayloadManagedObjectUpdate <PLJournalEntryPayloadManagedObject>

@required

- (<PLJournalEntryPayloadID> *)payloadIDForTombstone:(NSDictionary *)arg1;
- (NSDictionary *)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (NSArray *)payloadsForChangedKeys:(NSSet *)arg1;
- (bool)validForPersistenceChangedForChangedKeys:(NSSet *)arg1;

@end
