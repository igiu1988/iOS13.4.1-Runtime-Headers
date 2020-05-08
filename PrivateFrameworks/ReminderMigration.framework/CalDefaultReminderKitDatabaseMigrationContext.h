/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
 */

@interface CalDefaultReminderKitDatabaseMigrationContext : NSObject <CalReminderKitDatabaseMigrationContext> {
    REMDatabaseMigrationContext * _remDatabaseMigrationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) REMDatabaseMigrationContext *remDatabaseMigrationContext;
@property (nonatomic, readonly) REMStore *reminderStore;
@property (nonatomic, readonly) bool shouldDeleteMigratedData;
@property (nonatomic, readonly) bool shouldPerformMigration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didEndMigrationWithSuccess:(bool)arg1;
- (bool)ensureAccountsExist:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)recordMigrationFailure:(id)arg1;
- (id)remDatabaseMigrationContext;
- (id)reminderStore;
- (bool)shouldDeleteMigratedData;
- (bool)shouldPerformMigration;
- (void)willBeginMigration;

@end
