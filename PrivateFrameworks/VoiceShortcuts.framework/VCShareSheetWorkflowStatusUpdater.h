/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCShareSheetWorkflowStatusUpdater : NSObject <WFDatabaseResultObserver> {
    <VCDatabaseProvider> * _databaseProvider;
    NSObject<OS_dispatch_queue> * _queue;
    WFDatabaseResult * _shareSheetWorkflows;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) <VCDatabaseProvider> *databaseProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) WFDatabaseResult *shareSheetWorkflows;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)databaseProvider;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;
- (id)initWithUserDefaults:(id)arg1 databaseProvider:(id)arg2 eventHandler:(id)arg3;
- (id)queue;
- (void)queue_startIfPossible;
- (void)setShareSheetWorkflows:(id)arg1;
- (id)shareSheetWorkflows;
- (void)startIfPossible;
- (void)updateWithResult:(id)arg1;
- (id)userDefaults;

@end