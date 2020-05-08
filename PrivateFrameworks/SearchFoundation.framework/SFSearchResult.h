/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSearchResult : NSObject <NSCopying, NSSecureCoding, SFJSONSerializable, SFSearchResult, WBSCompletionListItem> {
    SFActionItem * _action;
    NSString * _appleReferrer;
    NSString * _applicationBundleIdentifier;
    NSString * _auxiliaryBottomText;
    int  _auxiliaryBottomTextColor;
    NSString * _auxiliaryMiddleText;
    NSString * _auxiliaryTopText;
    unsigned long long  _blockId;
    NSString * _calendarIdentifier;
    SFCard * _card;
    NSString * _completedQuery;
    NSString * _completion;
    SFImage * _completionImage;
    NSString * _contactIdentifier;
    NSString * _contentType;
    NSArray * _contentTypeTree;
    NSString * _correctedQuery;
    SFCustom * _customProperties;
    long long  _dataOwnerType;
    NSArray * _descriptions;
    bool  _doNotFold;
    NSNumber * _engagementScore;
    NSData * _entityData;
    NSString * _fbr;
    NSString * _fileProviderDomainIdentifier;
    NSString * _fileProviderIdentifier;
    NSString * _footnote;
    SFImage * _icon;
    NSString * _identifier;
    SFCard * _inlineCard;
    NSString * _intendedQuery;
    bool  _isCentered;
    bool  _isFuzzyMatch;
    bool  _isLocalApplicationResult;
    bool  _isQuickGlance;
    bool  _isSecondaryTitleDetached;
    bool  _isStaticCorrection;
    bool  _isStreaming;
    NSArray * _itemProviderDataTypes;
    NSArray * _itemProviderFileTypes;
    NSDictionary * _localFeatures;
    NSData * _mapsData;
    SFImage * _mapsMoreIcon;
    NSString * _mapsMoreString;
    NSURL * _mapsMoreURL;
    NSString * _mapsResultType;
    NSNumber * _maxAge;
    NSString * _mediaType;
    unsigned long long  _minimumRankOfTopHitToSuppressResult;
    SFMoreResults * _moreResults;
    SFPunchout * _moreResultsPunchout;
    NSString * _nearbyBusinessesString;
    double  _personalizationScore;
    int  _placement;
    bool  _preventThumbnailImageScaling;
    bool  _publiclyIndexable;
    NSString * _publishDate;
    SFPunchout * _punchout;
    unsigned long long  _queryId;
    NSNumber * _queryIndependentScore;
    double  _rankingScore;
    bool  _renderHorizontallyWithOtherResultsInCategory;
    NSString * _resultBundleId;
    NSString * _resultTemplate;
    NSString * _resultType;
    NSString * _secondaryTitle;
    SFImage * _secondaryTitleImage;
    NSString * _sectionBundleIdentifier;
    NSString * _sectionHeader;
    NSString * _sectionHeaderMore;
    NSURL * _sectionHeaderMoreURL;
    NSDictionary * _serverFeatures;
    double  _serverScore;
    NSString * _sourceName;
    NSString * _srf;
    NSString * _storeIdentifier;
    SFImage * _thumbnail;
    SFText * _title;
    NSString * _titleNote;
    NSNumber * _titleNoteSize;
    int  _topHit;
    int  _type;
    NSURL * _url;
    NSString * _userActivityRequiredString;
    NSString * _userInput;
}

@property (nonatomic, retain) SFActionItem *action;
@property (nonatomic, copy) NSString *appleReferrer;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSString *auxiliaryBottomText;
@property (nonatomic) int auxiliaryBottomTextColor;
@property (nonatomic, copy) NSString *auxiliaryMiddleText;
@property (nonatomic, copy) NSString *auxiliaryTopText;
@property (nonatomic) unsigned long long blockId;
@property (nonatomic, copy) NSString *calendarIdentifier;
@property (nonatomic, retain) SFCard *card;
@property (nonatomic, copy) NSString *completedQuery;
@property (nonatomic, copy) NSString *completion;
@property (nonatomic, retain) SFImage *completionImage;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSArray *contentTypeTree;
@property (nonatomic, copy) NSString *correctedQuery;
@property (nonatomic, retain) SFCustom *customProperties;
@property (nonatomic) long long dataOwnerType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *descriptions;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool doNotFold;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, retain) NSNumber *engagementScore;
@property (nonatomic, retain) NSData *entityData;
@property (nonatomic, copy) NSString *fbr;
@property (nonatomic, copy) NSString *fileProviderDomainIdentifier;
@property (nonatomic, copy) NSString *fileProviderIdentifier;
@property (nonatomic, copy) NSString *footnote;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFImage *icon;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) SFCard *inlineCard;
@property (nonatomic, copy) NSString *intendedQuery;
@property (nonatomic) bool isCentered;
@property (nonatomic) bool isFuzzyMatch;
@property (nonatomic) bool isLocalApplicationResult;
@property (nonatomic) bool isQuickGlance;
@property (nonatomic) bool isSecondaryTitleDetached;
@property (nonatomic) bool isStaticCorrection;
@property (nonatomic) bool isStreaming;
@property (nonatomic, copy) NSArray *itemProviderDataTypes;
@property (nonatomic, copy) NSArray *itemProviderFileTypes;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic, copy) NSDictionary *localFeatures;
@property (nonatomic, retain) NSData *mapsData;
@property (nonatomic, retain) SFImage *mapsMoreIcon;
@property (nonatomic, copy) NSString *mapsMoreString;
@property (nonatomic, retain) NSURL *mapsMoreURL;
@property (nonatomic, copy) NSString *mapsResultType;
@property (nonatomic, retain) NSNumber *maxAge;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (nonatomic, retain) SFMoreResults *moreResults;
@property (nonatomic, retain) SFPunchout *moreResultsPunchout;
@property (nonatomic, copy) NSString *nearbyBusinessesString;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic) long long parsecQueryID;
@property (nonatomic) double personalizationScore;
@property (nonatomic) int placement;
@property (nonatomic) bool preventThumbnailImageScaling;
@property (nonatomic) bool publiclyIndexable;
@property (nonatomic, copy) NSString *publishDate;
@property (nonatomic, retain) SFPunchout *punchout;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic, retain) NSNumber *queryIndependentScore;
@property (nonatomic) double rankingScore;
@property (nonatomic) bool renderHorizontallyWithOtherResultsInCategory;
@property (nonatomic, copy) NSString *resultBundleId;
@property (nonatomic, copy) NSString *resultTemplate;
@property (nonatomic, copy) NSString *resultType;
@property (nonatomic, readonly) NSString *safari_loggingDescription;
@property (nonatomic, copy) NSString *secondaryTitle;
@property (nonatomic, retain) SFImage *secondaryTitleImage;
@property (nonatomic, copy) NSString *sectionBundleIdentifier;
@property (nonatomic, copy) NSString *sectionHeader;
@property (nonatomic, copy) NSString *sectionHeaderMore;
@property (nonatomic, copy) NSURL *sectionHeaderMoreURL;
@property (nonatomic, copy) NSDictionary *serverFeatures;
@property (nonatomic) double serverScore;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, retain) WBSQuerySuggestion *siriSuggestion;
@property (nonatomic, copy) NSString *sourceName;
@property (nonatomic, copy) NSString *srf;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFImage *thumbnail;
@property (nonatomic, retain) SFText *title;
@property (nonatomic, copy) NSString *titleNote;
@property (nonatomic, retain) NSNumber *titleNoteSize;
@property (nonatomic) int topHit;
@property (nonatomic) int type;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, copy) NSString *userActivityRequiredString;
@property (nonatomic, copy) NSString *userInput;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)appleReferrer;
- (id)applicationBundleIdentifier;
- (id)auxiliaryBottomText;
- (int)auxiliaryBottomTextColor;
- (id)auxiliaryMiddleText;
- (id)auxiliaryTopText;
- (unsigned long long)blockId;
- (id)calendarIdentifier;
- (id)card;
- (id)completedQuery;
- (id)completion;
- (id)completionImage;
- (id)contactIdentifier;
- (id)contentType;
- (id)contentTypeTree;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedQuery;
- (id)customProperties;
- (long long)dataOwnerType;
- (id)descriptions;
- (id)dictionaryRepresentation;
- (bool)doNotFold;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementScore;
- (id)entityData;
- (id)fbr;
- (id)fileProviderDomainIdentifier;
- (id)fileProviderIdentifier;
- (id)footnote;
- (id)icon;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)inlineCard;
- (id)intendedQuery;
- (bool)isCentered;
- (bool)isFuzzyMatch;
- (bool)isLocalApplicationResult;
- (bool)isQuickGlance;
- (bool)isSecondaryTitleDetached;
- (bool)isStaticCorrection;
- (bool)isStreaming;
- (id)itemProviderDataTypes;
- (id)itemProviderFileTypes;
- (id)jsonData;
- (id)localFeatures;
- (id)mapsData;
- (id)mapsMoreIcon;
- (id)mapsMoreString;
- (id)mapsMoreURL;
- (id)mapsResultType;
- (id)maxAge;
- (id)mediaType;
- (unsigned long long)minimumRankOfTopHitToSuppressResult;
- (id)moreResults;
- (id)moreResultsPunchout;
- (id)nearbyBusinessesString;
- (double)personalizationScore;
- (int)placement;
- (bool)preventThumbnailImageScaling;
- (bool)publiclyIndexable;
- (id)publishDate;
- (id)punchout;
- (unsigned long long)queryId;
- (id)queryIndependentScore;
- (double)rankingScore;
- (bool)renderHorizontallyWithOtherResultsInCategory;
- (id)resultBundleId;
- (id)resultTemplate;
- (id)resultType;
- (id)secondaryTitle;
- (id)secondaryTitleImage;
- (id)sectionBundleIdentifier;
- (id)sectionHeader;
- (id)sectionHeaderMore;
- (id)sectionHeaderMoreURL;
- (id)serverFeatures;
- (double)serverScore;
- (void)setAction:(id)arg1;
- (void)setAppleReferrer:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setAuxiliaryBottomText:(id)arg1;
- (void)setAuxiliaryBottomTextColor:(int)arg1;
- (void)setAuxiliaryMiddleText:(id)arg1;
- (void)setAuxiliaryTopText:(id)arg1;
- (void)setBlockId:(unsigned long long)arg1;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setCard:(id)arg1;
- (void)setCompletedQuery:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setCompletionImage:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setContentTypeTree:(id)arg1;
- (void)setCorrectedQuery:(id)arg1;
- (void)setCustomProperties:(id)arg1;
- (void)setDataOwnerType:(long long)arg1;
- (void)setDescriptions:(id)arg1;
- (void)setDoNotFold:(bool)arg1;
- (void)setEngagementScore:(id)arg1;
- (void)setEntityData:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)setFileProviderDomainIdentifier:(id)arg1;
- (void)setFileProviderIdentifier:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInlineCard:(id)arg1;
- (void)setIntendedQuery:(id)arg1;
- (void)setIsCentered:(bool)arg1;
- (void)setIsFuzzyMatch:(bool)arg1;
- (void)setIsLocalApplicationResult:(bool)arg1;
- (void)setIsQuickGlance:(bool)arg1;
- (void)setIsSecondaryTitleDetached:(bool)arg1;
- (void)setIsStaticCorrection:(bool)arg1;
- (void)setIsStreaming:(bool)arg1;
- (void)setItemProviderDataTypes:(id)arg1;
- (void)setItemProviderFileTypes:(id)arg1;
- (void)setLocalFeatures:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setMapsMoreIcon:(id)arg1;
- (void)setMapsMoreString:(id)arg1;
- (void)setMapsMoreURL:(id)arg1;
- (void)setMapsResultType:(id)arg1;
- (void)setMaxAge:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setMinimumRankOfTopHitToSuppressResult:(unsigned long long)arg1;
- (void)setMoreResults:(id)arg1;
- (void)setMoreResultsPunchout:(id)arg1;
- (void)setNearbyBusinessesString:(id)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setPlacement:(int)arg1;
- (void)setPreventThumbnailImageScaling:(bool)arg1;
- (void)setPubliclyIndexable:(bool)arg1;
- (void)setPublishDate:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setQueryIndependentScore:(id)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setRenderHorizontallyWithOtherResultsInCategory:(bool)arg1;
- (void)setResultBundleId:(id)arg1;
- (void)setResultTemplate:(id)arg1;
- (void)setResultType:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryTitleImage:(id)arg1;
- (void)setSectionBundleIdentifier:(id)arg1;
- (void)setSectionHeader:(id)arg1;
- (void)setSectionHeaderMore:(id)arg1;
- (void)setSectionHeaderMoreURL:(id)arg1;
- (void)setServerFeatures:(id)arg1;
- (void)setServerScore:(double)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSrf:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleNote:(id)arg1;
- (void)setTitleNoteSize:(id)arg1;
- (void)setTopHit:(int)arg1;
- (void)setType:(int)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserActivityRequiredString:(id)arg1;
- (void)setUserInput:(id)arg1;
- (id)sourceName;
- (id)srf;
- (id)storeIdentifier;
- (id)thumbnail;
- (id)title;
- (id)titleNote;
- (id)titleNoteSize;
- (int)topHit;
- (int)type;
- (id)url;
- (id)userActivityRequiredString;
- (id)userInput;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)nt_cacheExpirationDateWithFetchDate:(id)arg1;
- (id)nt_publishDate;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_sfSearchResultWithUniqueIdentifier;

- (id)_firstCardSectionOfClass:(Class)arg1 ofCard:(id)arg2 outIndex:(unsigned long long*)arg3;
- (unsigned long long)engagementDestination;
- (id)parsecDomainIdentifier;
- (long long)parsecQueryID;
- (id)safari_firstCardSectionOfClass:(Class)arg1;
- (id)safari_firstInlineCardSectionOfClass:(Class)arg1;
- (unsigned long long)safari_indexOfFirstInlineCardSectionOfClass:(Class)arg1;
- (id)safari_loggingDescription;
- (void)setParsecQueryID:(long long)arg1;
- (id)sfSearchResultValue;

// Image: /System/Library/PrivateFrameworks/Search.framework/Search

- (bool)collectAnonymousFeatures;
- (id)objectForFeedback;
- (void)setPropertiesOnResultCopy:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight

- (id)replacementObjectForCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

- (float)PRSRankingItemAdditions_albumNumYearsAgo:(double)arg1;
- (float)PRSRankingItemAdditions_albumStarRating;
- (float)PRSRankingItemAdditions_anyTophitMustBe;
- (float)PRSRankingItemAdditions_anyTophitNo;
- (float)PRSRankingItemAdditions_appNumReviews;
- (float)PRSRankingItemAdditions_appStarRating;
- (id)PRSRankingItemAdditions_completedQuery;
- (id)PRSRankingItemAdditions_correctedQuery;
- (id)PRSRankingItemAdditions_description;
- (float)PRSRankingItemAdditions_epubBookNumReviews;
- (float)PRSRankingItemAdditions_epubBookNumYearsAgo:(double)arg1;
- (float)PRSRankingItemAdditions_epubBookStarRating;
- (float)PRSRankingItemAdditions_movieNumYearsAgo:(double)arg1;
- (float)PRSRankingItemAdditions_movieReviewRating;
- (float)PRSRankingItemAdditions_movieStarRating;
- (float)PRSRankingItemAdditions_podcastStarRating;
- (float)PRSRankingItemAdditions_profileNumFollowers;
- (float)PRSRankingItemAdditions_songNumYearsAgo:(double)arg1;
- (id)PRSRankingItemAdditions_title;
- (float)PRSRankingItemAdditions_tvshowNumYearsAgo:(double)arg1;
- (id)PRSRankingItemAdditions_url;
- (float)PRSRankingItemAdditions_webVideoNumViews;
- (float)PRSRankingItemAdditions_webVideoNumYearsAgo:(double)arg1;

@end
