/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSPhoneSubscriptionSelector : NSObject {
    id  _syncDaemonController;
    id /* block */  _syncDaemonControllerBuilder;
}

@property (nonatomic, retain) IDSXPCDaemonController *syncDaemonController;
@property (nonatomic, copy) id /* block */ syncDaemonControllerBuilder;

- (void).cxx_destruct;
- (void)_performSyncAction:(id /* block */)arg1;
- (id)init;
- (id)initWithSyncDaemonControllerBuilder:(id /* block */)arg1;
- (void)requestSelectedSubscriptionsWithCompletion:(id /* block */)arg1;
- (void)selectSubscription:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)selectSubscription:(id)arg1 withError:(id*)arg2;
- (id)selectedSubscriptionsWithError:(id*)arg1;
- (void)setSelectedSubscriptions:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)setSelectedSubscriptions:(id)arg1 withError:(id*)arg2;
- (void)setSyncDaemonController:(id)arg1;
- (void)setSyncDaemonControllerBuilder:(id /* block */)arg1;
- (id)syncDaemonController;
- (id /* block */)syncDaemonControllerBuilder;
- (void)unselectSubscription:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)unselectSubscription:(id)arg1 withError:(id*)arg2;

@end
