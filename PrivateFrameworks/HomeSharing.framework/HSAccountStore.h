/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSAccountStore : NSObject {
    int  _defaultsDidChangeToken;
    ICURLRequest * _groupIDRequest;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, retain) ICURLRequest *groupIDRequest;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)defaultStore;

- (void).cxx_destruct;
- (void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(id /* block */)arg1;
- (id)appleID;
- (bool)canDetermineGroupID;
- (void)clearAllCredentials;
- (void)clearCaches;
- (void)clearGroupID;
- (void)dealloc;
- (void)determineGroupIDWithCompletionHandler:(id /* block */)arg1;
- (id)groupID;
- (id)groupIDRequest;
- (id)init;
- (id)password;
- (id)queue;
- (void)setAppleID:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setGroupIDRequest:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setQueue:(id)arg1;

@end
