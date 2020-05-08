/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCProxyHeadline : NSProxy <FCHeadlineProviding> {
    <FCHeadlineProviding> * _headline;
    <FCHeadlineMetadata> * _overrideMetadata;
    FCTopStoriesStyleConfiguration * _overrideStoryStyle;
    unsigned long long  _overrideStoryType;
}

@property (nonatomic, readonly, copy) NSString *accessoryText;
@property (nonatomic, readonly, copy) NSArray *allowedStorefrontIDs;
@property (getter=isANF, nonatomic, readonly) bool anf;
@property (nonatomic, readonly, copy) NSString *articleID;
@property (nonatomic, readonly) NSString *articleRecirculationConfigJSON;
@property (nonatomic, readonly) <FCNativeAdProviding> *associatedAd;
@property (nonatomic, readonly) long long backendArticleVersion;
@property (nonatomic, readonly) NSData *backingArticleRecordData;
@property (nonatomic, readonly, copy) NSArray *blockedStorefrontIDs;
@property (nonatomic, readonly) long long bodyTextLength;
@property (getter=isBoundToContext, nonatomic, readonly) bool boundToContext;
@property (getter=isBundlePaid, nonatomic, readonly) bool bundlePaid;
@property (nonatomic, readonly, copy) NSString *callToActionText;
@property (nonatomic, readonly) bool canBePurchased;
@property (nonatomic, readonly, copy) NSString *clusterID;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly, copy) NSURL *contentURL;
@property (nonatomic, readonly) FCCoverArt *coverArt;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingAsNativeAd, nonatomic, readonly) bool displayAsNativeAd;
@property (nonatomic, readonly, copy) NSDate *displayDate;
@property (nonatomic, readonly, copy) FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata;
@property (getter=isExplicitContent, nonatomic, readonly) bool explicitContent;
@property (getter=isFeatureCandidate, nonatomic, readonly) bool featureCandidate;
@property (nonatomic, readonly) long long feedElementType;
@property (nonatomic, readonly) unsigned long long feedHalfLifeMilliseconds;
@property (nonatomic, readonly, copy) NSString *feedID;
@property (nonatomic, readonly) unsigned long long feedOrder;
@property (getter=isFromBlockedStorefront, nonatomic, readonly) bool fromBlockedStorefront;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (nonatomic, readonly) double globalUserFeedback;
@property (nonatomic, readonly) unsigned long long halfLife;
@property (nonatomic, readonly) bool hasGlobalUserFeedback;
@property (nonatomic, readonly) bool hasThumbnail;
@property (nonatomic, readonly) bool hasVideo;
@property (readonly) unsigned long long hash;
@property (getter=isHiddenFromAutoFavorites, nonatomic, readonly) bool hiddenFromAutoFavorites;
@property (getter=isHiddenFromFeeds, nonatomic, readonly) bool hiddenFromFeeds;
@property (nonatomic, readonly, copy) NSArray *iAdCategories;
@property (nonatomic, readonly, copy) NSArray *iAdKeywords;
@property (nonatomic, readonly, copy) NSArray *iAdSectionIDs;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isBlockedExplicitContent;
@property (nonatomic, readonly) bool isDraft;
@property (nonatomic, readonly) bool isFeatured;
@property (nonatomic, readonly) bool isLocalDraft;
@property (nonatomic, readonly) bool isTopStory;
@property (getter=isIssueOnly, nonatomic, readonly) bool issueOnly;
@property (nonatomic, readonly, copy) NSString *itemID;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly, copy) NSDate *lastFetchedDate;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly, copy) NSArray *linkedArticleIDs;
@property (nonatomic, readonly, copy) NSArray *linkedIssueIDs;
@property (nonatomic, readonly, copy) NSString *localDraftPath;
@property (nonatomic, readonly, copy) FCIssue *masterIssue;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (nonatomic, readonly, copy) NSArray *moreFromPublisherArticleIDs;
@property (nonatomic, readonly) bool needsRapidUpdates;
@property (nonatomic, readonly) unsigned long long order;
@property (nonatomic, readonly, copy) <FCHeadlineProviding> *originalHeadline;
@property (getter=isPaid, nonatomic, readonly) bool paid;
@property (getter=isPressRelease, nonatomic, readonly) bool pressRelease;
@property (nonatomic, readonly, copy) NSString *primaryAudience;
@property (nonatomic, readonly, copy) NSDate *publishDate;
@property (nonatomic, readonly) unsigned long long publishDateMilliseconds;
@property (nonatomic, readonly) long long publisherArticleVersion;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (nonatomic, readonly, copy) NSString *publisherID;
@property (nonatomic, readonly) NSArray *publisherSpecifiedArticleIDs;
@property (nonatomic, readonly, copy) NSString *referencedArticleID;
@property (nonatomic, readonly, copy) NSArray *relatedArticleIDs;
@property (nonatomic, readonly) unsigned long long role;
@property (nonatomic, readonly) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property (nonatomic, readonly, copy) NSString *shortExcerpt;
@property (nonatomic, readonly) bool showBundleSoftPaywall;
@property (nonatomic, readonly) bool showMinimalChrome;
@property (nonatomic, readonly) bool showPublisherLogo;
@property (nonatomic, readonly) bool showSubscriptionRequiredText;
@property (nonatomic, readonly, copy) <FCChannelProviding> *sourceChannel;
@property (nonatomic, readonly, copy) NSString *sourceChannelID;
@property (nonatomic, readonly, copy) NSString *sourceFeedID;
@property (nonatomic, readonly, copy) NSString *sourceName;
@property (getter=isSponsored, nonatomic, readonly) bool sponsored;
@property (nonatomic, readonly, copy) NSString *sponsoredBy;
@property (nonatomic, readonly) <FCHeadlineStocksFields> *stocksFields;
@property (nonatomic, readonly) FCTopStoriesStyleConfiguration *storyStyle;
@property (nonatomic, readonly) unsigned long long storyType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *surfacedByBinID;
@property (nonatomic, readonly, copy) NSString *surfacedByChannelID;
@property (nonatomic, readonly, copy) NSString *surfacedBySectionID;
@property (nonatomic, readonly, copy) NSSet *surfacedByTagIDs;
@property (nonatomic, readonly, copy) NSString *surfacedByTopicID;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnail;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailFocalFrame;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailLQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailMedium;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailUltraHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidget;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property (nonatomic, readonly) double tileProminenceScore;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *titleCompact;
@property (nonatomic, readonly) unsigned long long topStoryType;
@property (nonatomic, readonly, copy) NSArray *topicIDs;
@property (nonatomic, readonly, copy) NSArray *topics;
@property (nonatomic, readonly) bool useTransparentNavigationBar;
@property (nonatomic, readonly) bool usesImageOnTopLayout;
@property (nonatomic, readonly, copy) NSString *versionIdentifier;
@property (nonatomic, readonly, copy) NSString *videoCallToActionTitle;
@property (nonatomic, readonly, copy) NSURL *videoCallToActionURL;
@property (nonatomic, readonly) double videoDuration;
@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) bool webEmbedsEnabled;

- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (id)description;
- (id)displayDate;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithHeadline:(id)arg1 overrideMetadata:(id)arg2 configuration:(id)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)originalHeadline;
- (id)publishDate;
- (bool)respondsToSelector:(SEL)arg1;
- (id)shortExcerpt;
- (id)storyStyle;
- (unsigned long long)storyType;
- (id)title;

@end
