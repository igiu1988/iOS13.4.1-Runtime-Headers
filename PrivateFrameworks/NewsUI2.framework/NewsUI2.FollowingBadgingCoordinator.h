/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.FollowingBadgingCoordinator : NSObject <FCReadingListObserving, FCUserInfoObserving> {
    void delegate;
    void readingList;
    void userInfo;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4;
- (void)userInfoDidChangeDateLastViewedSaved:(id)arg1 fromCloud:(bool)arg2;

@end