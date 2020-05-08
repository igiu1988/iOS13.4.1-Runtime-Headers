/* Generated by EzioChiu.
 */

@protocol WBSURLCompletionMatchData <NSObject>

@required

- (bool)containsBookmark;
- (void)enumeratePageTitlesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, unsigned long long, bool*, void*
- (void)enumerateUserVisibleURLsUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, unsigned long long, bool*, void*
- (bool)lastVisitWasFailure;
- (double)lastVisitedTimeInterval;
- (<WBSURLCompletionMatchData> *)matchDataByMergingWithMatchData:(id <WBSURLCompletionMatchData>)arg1;
- (bool)matchesAutocompleteTrigger:(NSString *)arg1;
- (NSString *)originalURLString;
- (NSString *)pageTitleAtIndex:(unsigned long long)arg1;
- (NSString *)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (bool)shouldPreload;
- (float)topSitesScoreForPageTitleAtTime:(double)arg1;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (NSString *)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (NSString *)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;

@optional

- (long long)visitCount;

@end
