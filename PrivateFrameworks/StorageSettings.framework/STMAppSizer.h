/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

@interface STMAppSizer : NSObject <STMSizeCacheDelegate> {
    NSDictionary * _appContainersByPath;
    NSDictionary * _dataContainersByPath;
    <STMAppSizerDelegate> * _delegate;
    STMAppDynamicSizer * _dynamicSizer;
    NSArray * _proxies;
    NSDictionary * _proxiesByBundlePath;
    NSDictionary * _proxiesByDataPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _proxyLock;
    STMAppPurgeableSizer * _purgeableSizer;
    STMAppStaticSizer * _staticSizer;
}

@property (nonatomic, retain) NSArray *appProxies;
@property (readonly, copy) NSString *debugDescription;
@property <STMAppSizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) STMAppDynamicSizer *dynamicSizer;
@property (readonly) unsigned long long hash;
@property (retain) STMAppPurgeableSizer *purgeableSizer;
@property (retain) STMAppStaticSizer *staticSizer;
@property (readonly) Class superclass;

+ (id)sharedSizer;

- (void).cxx_destruct;
- (void)addProxy:(id)arg1;
- (id)appProxies;
- (id)calcAppDynamicSize:(id)arg1;
- (id)calcAppPurgeableSize:(id)arg1;
- (id)calcAppStaticSize:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)dynamicSizeForApp:(id)arg1;
- (id)dynamicSizer;
- (id)init;
- (void)notifySizesUpdated;
- (id)purgeableSizeForApp:(id)arg1;
- (id)purgeableSizer;
- (void)setAppProxies:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDynamicSizer:(id)arg1;
- (void)setPurgeableSizer:(id)arg1;
- (void)setStaticSizer:(id)arg1;
- (void)sizeCacheItemsUpdated:(id)arg1;
- (void)sizeCacheSizesUpdated:(id)arg1;
- (void)startSizer;
- (id)staticSizeForApp:(id)arg1;
- (id)staticSizer;
- (void)stopSizer;
- (long long)totalSizeOfItems;

@end
