/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKTicket : NSObject <MKMapServiceTicket> {
    NSError * _error;
    NSArray * _exactMapItems;
    NSArray * _refinedMapItems;
    <GEOMapServiceTicket> * _ticket;
}

@property (nonatomic, readonly) GEOMapRegion *boundingRegion;
@property (nonatomic, readonly) NSArray *browseCategories;
@property (nonatomic, readonly) GEOCategorySearchResultSection *categorySearchResultSection;
@property (getter=isChainResultSet, nonatomic, readonly) bool chainResultSet;
@property (nonatomic, readonly) GEOResolvedItem *clientResolvedResult;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEODirectionIntent *directionIntent;
@property (nonatomic, readonly) NSArray *displayHeaderSubstitutes;
@property (nonatomic, readonly) unsigned int dymSuggestionVisibleTime;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *exactMapItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *refinedMapItems;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) double requestResponseTime;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) NSArray *retainedSearchMetadata;
@property (nonatomic, readonly) NSArray *searchResultSections;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) NSString *sectionHeader;
@property (nonatomic, readonly) bool shouldEnableRedoSearch;
@property (nonatomic, readonly) bool showDymSuggestionCloseButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (id)boundingRegion;
- (id)browseCategories;
- (void)cancel;
- (id)categorySearchResultSection;
- (id)clientResolvedResult;
- (id)defaultRelatedSuggestion;
- (id)description;
- (id)directionIntent;
- (id)displayHeaderSubstitutes;
- (unsigned int)dymSuggestionVisibleTime;
- (id)error;
- (id)exactMapItems;
- (id)initWithTicket:(id)arg1;
- (bool)isChainResultSet;
- (id)refinedMapItems;
- (id)relatedSearchSuggestions;
- (double)requestResponseTime;
- (id)resultDisplayHeader;
- (id)retainedSearchMetadata;
- (id)searchResultSections;
- (int)searchResultType;
- (id)sectionHeader;
- (bool)shouldEnableRedoSearch;
- (bool)showDymSuggestionCloseButton;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithHandler:(id /* block */)arg1 queue:(id)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(long long)arg2 queue:(id)arg3 networkActivity:(id /* block */)arg4;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3;
- (id)traits;

@end
