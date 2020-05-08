/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAccountStoreManager : NSObject {
    ACAccountStore * _accountStore;
    ACAccount * _primaryAppleAccount;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (retain) ACAccount *primaryAppleAccount;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_queue_updatePrimaryAppleAccountAndNotify:(bool)arg1;
- (void)_updatePrimaryAppleAccount;
- (id)accountStore;
- (id)init;
- (id)primaryAppleAccount;
- (void)setPrimaryAppleAccount:(id)arg1;

@end