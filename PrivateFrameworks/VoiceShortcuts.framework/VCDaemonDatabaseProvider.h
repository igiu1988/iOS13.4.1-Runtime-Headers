/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCDaemonDatabaseProvider : NSObject <VCDatabaseProvider> {
    WFDatabase * _database;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly, copy) NSPersistentStoreDescription *storeDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)database;
- (id)init;
- (bool)migrateDatabasesToShortcutsFolderIfNeeded;
- (id)queue;
- (id)storeDescription;

@end
