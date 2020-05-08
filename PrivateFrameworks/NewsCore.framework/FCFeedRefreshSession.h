/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedRefreshSession : NSObject {
    NSSet * _activeGroupEmitterIDs;
    NSDictionary * _cursorsByGroupEmitterID;
    <FCFeedRefreshSessionForYouConfig> * _forYouConfig;
    NSString * _identifier;
    bool  _isNewEdition;
    bool  _isOffline;
    FCFeedEdition * _lastCompletedEdition;
    NSDate * _modificationDate;
    NSArray * _pendingGroups;
    bool  _reachedEnd;
    NSDate * _refreshDate;
}

@property (nonatomic, readonly, copy) NSSet *activeGroupEmitterIDs;
@property (nonatomic, readonly, copy) NSDictionary *cursorsByGroupEmitterID;
@property (nonatomic, readonly, copy) <FCFeedRefreshSessionForYouConfig> *forYouConfig;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isNewEdition;
@property (nonatomic, readonly) bool isOffline;
@property (nonatomic, readonly) FCFeedEdition *lastCompletedEdition;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly, copy) NSArray *pendingGroups;
@property (nonatomic, readonly) bool reachedEnd;
@property (nonatomic, readonly) NSDate *refreshDate;

+ (id)currentEditionWithRefreshDate:(id)arg1 lastCompletedEdition:(id)arg2 fromPaginator:(id)arg3;

- (void).cxx_destruct;
- (id)activeGroupEmitterIDs;
- (id)copyByRemovingPendingGroupIdenticalTo:(id)arg1;
- (id)copyByRemovingPendingGroupsAtIndexes:(id)arg1;
- (id)copyWithAdditionalPendingGroups:(id)arg1 cursors:(id)arg2;
- (id)copyWithAllGroupEmittersExhausted;
- (id)copyWithExhaustedGroupEmitterID:(id)arg1 cursors:(id)arg2;
- (id)copyWithModificationDate:(id)arg1 lastCompletedEdition:(id)arg2 cursorsByGroupEmitterID:(id)arg3 pendingGroups:(id)arg4 activeGroupEmitterIDs:(id)arg5 reachedEnd:(bool)arg6 isOffline:(bool)arg7;
- (id)currentEditionFromPaginator:(id)arg1;
- (id)cursorsByGroupEmitterID;
- (id)description;
- (id)forYouConfig;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 refreshDate:(id)arg2 modificationDate:(id)arg3 lastCompletedEdition:(id)arg4 cursorsByGroupEmitterID:(id)arg5 pendingGroups:(id)arg6 activeGroupEmitterIDs:(id)arg7 reachedEnd:(bool)arg8 isOffline:(bool)arg9 forYouConfig:(id)arg10;
- (id)initWithRefreshDate:(id)arg1 activeGroupEmitterIDs:(id)arg2 isOffline:(bool)arg3 forYouConfig:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isNewEdition;
- (bool)isOffline;
- (id)lastCompletedEdition;
- (id)modificationDate;
- (id)pendingGroups;
- (bool)reachedEnd;
- (id)refreshDate;

@end
