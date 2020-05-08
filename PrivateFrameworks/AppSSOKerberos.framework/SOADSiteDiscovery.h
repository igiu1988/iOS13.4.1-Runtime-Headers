/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

@interface SOADSiteDiscovery : NSObject {
    NSOperationQueue * _queue;
    NSString * _realm;
}

@property (nonatomic, retain) NSOperationQueue *queue;
@property (nonatomic, retain) NSString *realm;

- (void).cxx_destruct;
- (void)discoverADInfoUsingSourceAppBundleIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithRealm:(id)arg1;
- (id)queue;
- (id)realm;
- (void)setQueue:(id)arg1;
- (void)setRealm:(id)arg1;

@end
