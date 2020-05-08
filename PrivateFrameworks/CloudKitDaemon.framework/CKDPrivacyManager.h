/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPrivacyManager : NSObject {
    NSMutableSet * _operations;
    NSObject<OS_dispatch_queue> * _privacyManagerQueue;
}

@property (nonatomic, retain) NSMutableSet *operations;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privacyManagerQueue;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (void)_resetPrivacySettingsForAppContainerAccountTuple:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)operations;
- (id)privacyManagerQueue;
- (void)resetPrivacySettingsWithCompletionHandler:(id /* block */)arg1;
- (void)setOperations:(id)arg1;
- (void)setPrivacyManagerQueue:(id)arg1;

@end
