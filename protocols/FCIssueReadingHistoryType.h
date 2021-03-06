/* Generated by EzioChiu.
 */

@protocol FCIssueReadingHistoryType

@required

- (void)addObserver:(id <FCIssueReadingHistoryObserving>)arg1;
- (NSArray *)allEngagedIssueIDs;
- (FCIssueBookmark *)bookmarkForLastVisitToIssueWithID:(NSString *)arg1;
- (bool)hasIssueWithIDBeenBadged:(NSString *)arg1;
- (bool)hasIssueWithIDBeenEngaged:(NSString *)arg1;
- (bool)hasIssueWithIDBeenVisited:(NSString *)arg1;
- (NSDate *)lastEngagedDateForIssueWithID:(NSString *)arg1;
- (NSDate *)lastRemovedFromMyMagazinesDateForIssueWithID:(NSString *)arg1;
- (NSDate *)lastVisitedDateForIssueWithID:(NSString *)arg1;
- (void)markIssueAsBadgedWithID:(NSString *)arg1;
- (void)markIssueAsEngagedWithID:(NSString *)arg1;
- (void)markIssueAsRemovedFromMyMagazinesWithID:(NSString *)arg1;
- (void)markIssueWithID:(NSString *)arg1 asVisitedWithBookmark:(FCIssueBookmark *)arg2;
- (NSString *)mostRecentlyVisitedIssueID;
- (NSArray *)recentlyEngagedIssueIDs;
- (NSArray *)recentlyVisitedIssueIDs;
- (void)removeObserver:(id <FCIssueReadingHistoryObserving>)arg1;

@end
