/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
 */

@interface JetEngine.OverriddenAMSBag : AMSSnapshotBag {
    void backing;
    void overrides;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) bool expired;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)expirationDate;
- (void)forwardSnapshotBagExpiredValueAccessed:(id)arg1;
- (id)init;
- (id)integerForKey:(id)arg1;
- (bool)isExpired;
- (id)profile;
- (id)profileVersion;
- (id)stringForKey:(id)arg1;

@end
