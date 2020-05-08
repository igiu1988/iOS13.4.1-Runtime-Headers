/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXBookmarkManager : NSObject <SXBookmarkApplicatorManager, SXBookmarkManager> {
    NSMutableDictionary * _applicators;
}

@property (nonatomic, readonly) NSMutableDictionary *applicators;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicators;
- (void)applyBookmark:(id)arg1;
- (id)init;
- (void)registerApplicator:(id)arg1 bookmarkType:(Class)arg2;

@end
