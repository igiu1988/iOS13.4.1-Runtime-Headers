/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

@interface CKContextClient : NSObject {
    NSSet * _capabilities;
    unsigned long long  _defaultRequestType;
    NSString * _indexVersionId;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
    NSObject<OS_dispatch_semaphore> * _sema_capabilities;
    CKContextSemaphore * _serviceSemaphore;
    NSMutableArray * _updateHandlers;
}

@property (nonatomic, readonly) NSSet *capabilities;
@property (nonatomic, readonly) unsigned long long defaultRequestType;

+ (id)clientWithDefaultRequestType:(unsigned long long)arg1;
+ (id)new;

- (void).cxx_destruct;
- (void)_handleConfigurationUpdate;
- (void)_updateCachedCapabilites;
- (void)ancestorsForTopics:(id)arg1 withReply:(id /* block */)arg2;
- (id)capabilities;
- (void)capabilitiesWithReply:(id /* block */)arg1;
- (unsigned long long)defaultRequestType;
- (void)ensureFullyInitialized;
- (bool)hasServiceSemaphore;
- (id)indexVersionId;
- (id)init;
- (id)initWithDefaultRequestType:(unsigned long long)arg1;
- (id)newRequest;
- (void)registerConfigurationUpdateHandler:(id /* block */)arg1;
- (id)retrieveCapabilites;
- (bool)tryAcquireServiceSemaphore;
- (void)workWithServiceSemaphore:(id /* block */)arg1;

@end
