/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSSignInController : NSObject <IDSAccountControllerDelegate, IDSAccountRegistrationDelegate> {
    IDSCTAdapter * _CTAdapter;
    NSMutableDictionary * _accountIDDescriptionMap;
    NSMapTable * _delegateByServiceType;
    NSMutableDictionary * _initialStateByService;
    id  _passwordManager;
    NSMutableDictionary * _serviceNameAccountControllerMap;
    double  _signInFuzz;
    NSObject<OS_dispatch_queue> * _signInQueue;
    double  _signInTimeout;
}

@property (nonatomic, retain) IDSCTAdapter *CTAdapter;
@property (nonatomic, retain) NSMutableDictionary *accountIDDescriptionMap;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMapTable *delegateByServiceType;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *initialStateByService;
@property (nonatomic, retain) <_IDSPasswordManager> *passwordManager;
@property (nonatomic, retain) NSMutableDictionary *serviceNameAccountControllerMap;
@property (nonatomic) double signInFuzz;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *signInQueue;
@property (nonatomic) double signInTimeout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CTAdapter;
- (id)_accountControllerForName:(id)arg1;
- (id)_accountWithUniqueID:(id)arg1;
- (bool)_actionOnAccountOfType:(unsigned long long)arg1 onService:(unsigned long long)arg2 actionBlock:(id /* block */)arg3;
- (void)_cleanupStateForAccountID:(id)arg1;
- (id)_createAccountControllerForService:(id)arg1;
- (id)_createAccountWithDictionary:(id)arg1 accountID:(id)arg2 serviceName:(id)arg3;
- (void)_initializeStateMachineForAccountID:(id)arg1 service:(id)arg2 state:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (bool)_isServiceCurrentlyEnabled:(id)arg1;
- (void)_scheduleValidationAfter:(double)arg1 forAccountID:(id)arg2 allowFuzz:(bool)arg3;
- (id)_serviceNameForType:(unsigned long long)arg1;
- (unsigned long long)_serviceTypeForName:(id)arg1;
- (unsigned long long)_statusOfAccount:(id)arg1;
- (id)_statusOfUsersOnService:(unsigned long long)arg1;
- (void)_validateDelegateState;
- (void)_validateStateForAccountID:(id)arg1 timeoutMode:(unsigned long long)arg2;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (id)accountIDDescriptionMap;
- (id)delegateByServiceType;
- (void)disableUserType:(unsigned long long)arg1 onService:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)enableUserType:(unsigned long long)arg1 onService:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithPasswordManager:(id)arg1 CTAdapter:(id)arg2 signInTimeout:(double)arg3 signInFuzz:(double)arg4 queue:(id)arg5;
- (id)initWithQueue:(id)arg1;
- (id)initialStateByService;
- (bool)isFaceTimeEnabled;
- (bool)isiMessageEnabled;
- (id)passwordManager;
- (void)provideCredential:(id)arg1 forUser:(id)arg2 onService:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)removeDelegateForService:(unsigned long long)arg1;
- (id)serviceNameAccountControllerMap;
- (void)setAccountIDDescriptionMap:(id)arg1;
- (void)setCTAdapter:(id)arg1;
- (void)setDelegate:(id)arg1 forService:(unsigned long long)arg2;
- (void)setDelegateByServiceType:(id)arg1;
- (void)setInitialStateByService:(id)arg1;
- (void)setPasswordManager:(id)arg1;
- (void)setServiceNameAccountControllerMap:(id)arg1;
- (void)setSignInFuzz:(double)arg1;
- (void)setSignInQueue:(id)arg1;
- (void)setSignInTimeout:(double)arg1;
- (double)signInFuzz;
- (id)signInQueue;
- (double)signInTimeout;
- (void)signInUsername:(id)arg1 onService:(unsigned long long)arg2 waitUntilRegistered:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)signInUsername:(id)arg1 withProvidedCredential:(id)arg2 onService:(unsigned long long)arg3 waitUntilRegistered:(bool)arg4 completion:(id /* block */)arg5;
- (void)signOutService:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)statusOfUsersOnService:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;

@end
