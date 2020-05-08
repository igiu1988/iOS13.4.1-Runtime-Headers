/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol> {
    bool  _allCallbacksDeleviered;
    NSString * _bundleID;
    NSURL * _bundleURL;
    NSObject<OS_dispatch_group> * _callbackDeliveryGroup;
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _operationType;
    NSString * _operationTypeString;
    NSDictionary * _options;
    id /* block */  _progressBlock;
    bool  _uninstaller;
}

@property (readonly) bool allCallbacksDeleviered;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSURL *bundleURL;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long operationType;
@property (nonatomic, readonly) NSString *operationTypeString;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (readonly) Class superclass;
@property (getter=isUninstaller, nonatomic) bool uninstaller;

+ (id)installerWithBundleID:(id)arg1 bundleURL:(id)arg2 options:(id)arg3 callbackBlock:(id /* block */)arg4;
+ (id)installerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(id /* block */)arg3;
+ (id)unInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_beginOperation;
- (void)_invalidate;
- (void)_waitForAllCallbackMessagesToExecute;
- (bool)allCallbacksDeleviered;
- (id)bundleID;
- (id)bundleURL;
- (void)callbackDeliveryComplete;
- (id)connection;
- (id)init;
- (bool)isUninstaller;
- (unsigned long long)operationType;
- (id)operationTypeString;
- (id)options;
- (id /* block */)progressBlock;
- (void)setBundleID:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setOperationType:(unsigned long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setUninstaller:(bool)arg1;
- (void)updateCallbackWithData:(id)arg1;

@end
