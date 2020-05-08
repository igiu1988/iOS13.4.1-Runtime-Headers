/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyCircleRequest : NSObject {
    <FAFamilyCircleRequestConnectionProvider> * _connectionProvider;
    NSString * _passwordOrToken;
    NSString * _usernameOrDSID;
}

@property (nonatomic, retain) <FAFamilyCircleRequestConnectionProvider> *connectionProvider;
@property (copy) NSString *passwordOrToken;
@property (copy) NSString *usernameOrDSID;

- (void).cxx_destruct;
- (id)connectionProvider;
- (id)init;
- (id)initWithConnectionProvider:(id)arg1;
- (id)passwordOrToken;
- (id)requestOptions;
- (id)serviceConnection;
- (id)serviceRemoteObjectWithErrorHandler:(id /* block */)arg1;
- (void)setConnectionProvider:(id)arg1;
- (void)setPasswordOrToken:(id)arg1;
- (void)setUsernameOrDSID:(id)arg1;
- (id)usernameOrDSID;

@end
