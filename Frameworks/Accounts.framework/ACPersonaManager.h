/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACPersonaManager : NSObject <UMUserPersonaUpdateObserver> {
    NSObject<OS_dispatch_queue> * _backgroundPersonaUpdate;
    NSString * _enterprisePersonaUID;
    NSString * _personalPersonaUID;
    bool  _registered;
    ACAccountStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *enterprisePersonaUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *personalPersonaUID;
@property (readonly) Class superclass;

+ (void)_changePersonaContextUsingPersonaID:(id)arg1 withCompletion:(id /* block */)arg2;
+ (bool)performWithinPersona:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)performWithinPersonaForAccount:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)performWithinPersonaForAccountIdentifier:(id)arg1 withBlock:(id /* block */)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_registerForPersonaListUpdateWithCompletion:(id /* block */)arg1;
- (id)enterprisePersonaUID;
- (id)init;
- (void)personaListDidUpdate;
- (id)personalPersonaUID;
- (id)store;
- (void)updateEnterprisePersona;

@end
