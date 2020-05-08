/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.BridgedNewsActivityFactory : _TtCs12_SwiftObject <TSBridgedNewsActivityFactoryType> {
    void headlineModelFactory;
    void headlineService;
    void tagService;
}

- (id)adPreviewWithIdentifier:(id)arg1;
- (id)editorialArticleWithIdentifier:(id)arg1 articleViewContext:(id)arg2;
- (id)feedWithTag:(id)arg1 feedViewContext:(id)arg2;
- (void)feedWithTagIdentifier:(id)arg1 feedViewContext:(id)arg2 completion:(id /* block */)arg3;
- (id)forYouFeedWithFeedViewContext:(id)arg1 articleViewContext:(id)arg2 analyticsReferral:(id)arg3;
- (id)headlineWithHeadlineProviding:(id)arg1 articleContext:(id)arg2 articlePresentationStyle:(long long)arg3 showShareSheet:(bool)arg4 forceArticleUpdate:(bool)arg5;
- (id)history;
- (id)manageSubscriptions;
- (id)notifications;
- (id)pickYourFavorites;
- (id)previewWithHeadline:(id)arg1;
- (id)saved;
- (id)unrealizedHeadlineWithArticleID:(id)arg1 articleContext:(id)arg2 articlePresentationStyle:(long long)arg3 showShareSheet:(bool)arg4 forceArticleUpdate:(bool)arg5;
- (id)videoPlayerWithArticleIDs:(id)arg1 analyticsReferral:(id)arg2;
- (id)videoPlayerWithWidgetPlaylist:(id)arg1 analyticsReferral:(id)arg2;
- (id)webLinkWithURL:(id)arg1;

@end
