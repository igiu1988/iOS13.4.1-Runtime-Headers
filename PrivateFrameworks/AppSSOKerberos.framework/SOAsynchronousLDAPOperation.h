/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

@interface SOAsynchronousLDAPOperation : SOAsynchronousOperation {
    NSString * _bundleIdentifier;
    id /* block */  _completion;
    NSString * _host;
    unsigned short  _port;
    NSString * _realm;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (copy) id /* block */ completion;
@property (nonatomic, retain) NSString *host;
@property (nonatomic) unsigned short port;
@property (nonatomic, retain) NSString *realm;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id /* block */)completion;
- (id)host;
- (id)initWithRealm:(id)arg1 andHost:(id)arg2 andPort:(unsigned short)arg3 andBundleIdentifier:(id)arg4 andCompetion:(id /* block */)arg5;
- (void)main;
- (unsigned short)port;
- (id)realm;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setHost:(id)arg1;
- (void)setPort:(unsigned short)arg1;
- (void)setRealm:(id)arg1;

@end
