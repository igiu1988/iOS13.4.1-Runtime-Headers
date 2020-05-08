/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPSharedTripBlacklist : NSObject {
    NSMutableSet * _blockIDs;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSUbiquitousKeyValueStore * _kvStore;
    NSDate * _lastUpdateDate;
}

- (void).cxx_destruct;
- (void)_loadIdentifiers;
- (void)_storeIdentifiers;
- (void)blockIdentifier:(id)arg1;
- (void)clearList;
- (bool)containsAnyIdentifiersInArray:(id)arg1;
- (bool)containsIdentifier:(id)arg1;
- (id)description;
- (id)init;
- (void)unblockIdentifiers:(id)arg1;
- (void)updateBlockedListFromStore:(id)arg1;

@end