/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItem : NSObject <GEOURLSerializable, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding> {
    _MKMapItemPlaceAttribution * _attribution;
    <GEOMapItemTransitInfo> * _defaultTransitInfo;
    <NSObject> * _didResolveAttributionToken;
    NSString * _firstLocalizedCategoryName;
    <GEOMapItem> * _geoMapItem;
    MKMapItemIdentifier * _identifier;
    bool  _isCurrentLocation;
    bool  _isMapItemTypeTransit;
    bool  _isPlaceHolder;
    bool  _isTransitInfoUpdated;
    NSString * _localizedSampleSizeForUserRatingScoreString;
    MKMapItemMetadata * _metadata;
    NSNumberFormatter * _numberFormatterForAdamId;
    _MKMapItemPhotosAttribution * _photosAttribution;
    GEOPlace * _place;
    NSString * _pointOfInterestCategory;
    <MKTransitInfoPreload> * _preloadedTransitInfo;
    _MKPlaceReservationInfo * _reservationInfo;
    _MKMapItemReviewsAttribution * _reviewsAttribution;
    NSString * _shortAddress;
    NSDate * _transitInfoUpdatedDate;
    <GEOTransitAttribution> * _updatedTransitAttribution;
    <GEOMapItemTransitInfo> * _updatedTransitInfo;
    GEOMapItemStorageUserValues * _userValues;
}

@property (getter=_acceptsApplePay, nonatomic, readonly) bool acceptsApplePay;
@property (getter=_alternativeAppAdamIds, nonatomic, readonly) NSArray *alternativeAppAdamIds;
@property (getter=_amenities, nonatomic, readonly) NSArray *amenities;
@property (getter=_annotatedItemList, nonatomic, readonly) <GEOAnnotatedItemList> *annotatedItemList;
@property (getter=_attribution, nonatomic, readonly) _MKMapItemPlaceAttribution *attribution;
@property (getter=_brandMUID, nonatomic, readonly) unsigned long long brand;
@property (getter=_browseCategories, nonatomic, readonly) NSArray *browseCategories;
@property (getter=_businessClaim, nonatomic, readonly) GEOPDBusinessClaim *businessClaim;
@property (getter=_businessHours, nonatomic, readonly) NSArray *businessHours;
@property (getter=_coordinate, nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (getter=_customIconID, nonatomic, readonly) unsigned long long customIconID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_detourInfo, nonatomic, readonly) GEOMapItemDetourInfo *detourInfo;
@property (getter=_displayMapRegion, nonatomic, readonly) GEOMapRegion *displayMapRegion;
@property (getter=_displayMaxZoom, nonatomic, readonly) float displayMaxZoom;
@property (getter=_displayMinZoom, nonatomic, readonly) float displayMinZoom;
@property (getter=_encyclopedicInfo, nonatomic, readonly) <GEOEncyclopedicInfo> *encyclopedicInfo;
@property (getter=_externalTransitStationCode, nonatomic, readonly) NSData *externalTransitStationCode;
@property (getter=_firstLocalizedCategoryName, nonatomic, readonly) NSString *firstLocalizedCategoryName;
@property (getter=_flyover, nonatomic, readonly) GEOPDFlyover *flyover;
@property (getter=_flyoverAnnouncementMessage, nonatomic, readonly) NSString *flyoverAnnouncementMessage;
@property (nonatomic, readonly) NSString *formattedNumberOfReviews;
@property (nonatomic, readonly) NSString *formattedNumberOfReviewsIncludingProvider;
@property (getter=_geoAddress, nonatomic, readonly) GEOAddress *geoAddress;
@property (getter=_geoFenceMapRegion, nonatomic, readonly) GEOMapRegion *geoFenceMapRegion;
@property (getter=_geoMapItem, nonatomic, readonly) <GEOMapItemPrivate> *geoMapItem;
@property (getter=_geoMapItemStorageForDragAndDrop, nonatomic, readonly) GEOMapItemStorage *geoMapItemStorageForDragAndDrop;
@property (getter=_geoMapItemStorageForPersistence, nonatomic, readonly) GEOMapItemStorage *geoMapItemStorageForPersistence;
@property (getter=_handle, nonatomic, readonly) NSData *handle;
@property (getter=_hasAcceptsApplePayAmenity, nonatomic, readonly) bool hasAcceptsApplePayAmenity;
@property (getter=_hasAnyAmenities, nonatomic, readonly) bool hasAnyAmenities;
@property (getter=_hasBrandMUID, nonatomic, readonly) bool hasBrandMUID;
@property (getter=_hasBusinessClaim, nonatomic, readonly) bool hasBusinessClaim;
@property (getter=_hasBusinessHours, nonatomic, readonly) bool hasBusinessHours;
@property (getter=_hasCorrectedHomeWorkAddress, nonatomic, readonly) bool hasCorrectedHomeWorkAddress;
@property (getter=_hasCorrectedHomeWorkCoordinate, nonatomic, readonly) bool hasCorrectedHomeWorkCoordinate;
@property (getter=_hasDisplayMaxZoom, nonatomic, readonly) bool hasDisplayMaxZoom;
@property (getter=_hasDisplayMinZoom, nonatomic, readonly) bool hasDisplayMinZoom;
@property (getter=_hasEncyclopedicInfo, nonatomic, readonly) bool hasEncyclopedicInfo;
@property (getter=_hasFlyover, nonatomic, readonly) bool hasFlyover;
@property (getter=_hasLinkedServices, nonatomic, readonly) bool hasLinkedServices;
@property (getter=_hasLocalizedOperatingHours, nonatomic, readonly) bool hasLocalizedOperatingHours;
@property (getter=_hasMUID, nonatomic, readonly) bool hasMUID;
@property (getter=_hasMuninStorefront, nonatomic, readonly) bool hasMuninStorefront;
@property (getter=_hasMuninViewState, nonatomic, readonly) bool hasMuninViewState;
@property (getter=_hasOperatingHours, nonatomic, readonly) bool hasOperatingHours;
@property (getter=_hasPriceDescription, nonatomic, readonly) bool hasPriceDescription;
@property (getter=_hasPriceRange, nonatomic, readonly) bool hasPriceRange;
@property (getter=_hasResolvablePartialInformation, nonatomic, readonly) bool hasResolvablePartialInformation;
@property (getter=_hasResultProviderID, nonatomic, readonly) bool hasResultProviderID;
@property (getter=_hasTransit, nonatomic, readonly) bool hasTransit;
@property (getter=_hasTransitDisplayName, nonatomic, readonly) bool hasTransitDisplayName;
@property (getter=_hasTransitLabels, nonatomic, readonly) bool hasTransitLabels;
@property (getter=_hasUserRatingScore, nonatomic, readonly) bool hasUserRatingScore;
@property (getter=_hasVenueFeatureType, nonatomic, readonly) bool hasVenueFeatureType;
@property (readonly) unsigned long long hash;
@property (getter=_identifier, nonatomic, readonly) MKMapItemIdentifier *identifier;
@property (nonatomic) bool isCurrentLocation;
@property (getter=_isEmptyContactMapItem, readonly) bool isEmptyContactMapItem;
@property (getter=_isMapItemTypeAddress, nonatomic, readonly) bool isMapItemTypeAddress;
@property (getter=_isMapItemTypeBrand, nonatomic, readonly) bool isMapItemTypeBrand;
@property (getter=_isMapItemTypeBusiness, nonatomic, readonly) bool isMapItemTypeBusiness;
@property (getter=_isMapItemTypeSettlement, nonatomic, readonly) bool isMapItemTypeSettlement;
@property (getter=_isMapItemTypeTransit, nonatomic) bool isMapItemTypeTransit;
@property (getter=_isMapItemTypeUnknown, nonatomic, readonly) bool isMapItemTypeUnknown;
@property (getter=_isMessageIDVerified, nonatomic, readonly) bool isMessageIDVerified;
@property (nonatomic, readonly) bool isPlaceHolder;
@property (getter=_isStandAloneBrand, nonatomic, readonly) bool isStandAloneBrand;
@property (getter=_linkedServices, nonatomic, readonly) NSArray *linkedServices;
@property (getter=_localizedResponseTime, nonatomic, readonly) NSString *localizedResponseTime;
@property (getter=_localizedSampleSizeForUserRatingScoreString, nonatomic, readonly) NSString *localizedSampleSizeForUserRatingScoreString;
@property (getter=_messageBusinessHours, nonatomic, readonly) GEOBusinessHours *messageBusinessHours;
@property (getter=_messageID, nonatomic, readonly) NSString *messageID;
@property (getter=_messageURLString, nonatomic, readonly) NSString *messageURLString;
@property (nonatomic, readonly) MKMapItemMetadata *metadata;
@property (getter=_muid, nonatomic, readonly) unsigned long long muid;
@property (getter=_muninViewState, nonatomic, readonly) GEOMuninViewState *muninViewState;
@property (nonatomic, copy) NSString *name;
@property (getter=_navBackgroundbrandColor, nonatomic, readonly) UIColor *navBackgroundbrandColor;
@property (getter=_navTintBrandColor, nonatomic, readonly) UIColor *navTintBrandColor;
@property (getter=_needsAttribution, nonatomic, readonly) bool needsAttribution;
@property (getter=_normalizedUserRatingScore, nonatomic, readonly) float normalizedUserRatingScore;
@property (getter=_openingHoursOptions, nonatomic, readonly) unsigned long long openingHoursOptions;
@property (getter=_parsecSectionType, nonatomic, readonly) int parsecSectionType;
@property (nonatomic, copy) NSString *phoneNumber;
@property (getter=_phoneNumberOptsOutOfAds, nonatomic, readonly) bool phoneNumberOptsOutOfAds;
@property (getter=_photosAttribution, nonatomic, readonly) _MKMapItemPhotosAttribution *photosAttribution;
@property (nonatomic, readonly) GEOPlace *place;
@property (getter=_placeCollections, nonatomic, readonly) NSArray *placeCollections;
@property (getter=_placeDataAsData, nonatomic, readonly) NSData *placeDataAsData;
@property (getter=_placeDisplayStyle, nonatomic, readonly) int placeDisplayStyle;
@property (getter=_placecardLayout, nonatomic, readonly) GEOModuleLayoutEntry *placecardLayout;
@property (nonatomic, readonly) MKPlacemark *placemark;
@property (getter=_poiPinpointURLString, nonatomic, readonly) NSString *poiPinpointURLString;
@property (getter=_poiSurveyURLString, nonatomic, readonly) NSString *poiSurveyURLString;
@property (nonatomic, copy) NSString *pointOfInterestCategory;
@property (getter=_preferedAppAdamID, nonatomic, readonly) NSNumber *preferedAppAdamID;
@property (getter=_preloadedTransitInfo, nonatomic, readonly) <MKTransitInfoPreload> *preloadedTransitInfo;
@property (getter=_priceDescription, nonatomic, readonly) NSString *priceDescription;
@property (getter=_priceRangeString, nonatomic, readonly) NSString *priceRangeString;
@property (getter=_providerURL, nonatomic, readonly, copy) NSURL *providerURL;
@property (getter=_quickLinks, nonatomic, readonly) NSArray *quickLinks;
@property (getter=_relatedPlaceList, nonatomic, readonly) GEORelatedPlaceList *relatedPlaceList;
@property (nonatomic, retain) _MKPlaceReservationInfo *reservationInfo;
@property (getter=_responseStatusIsIncomplete, nonatomic, readonly) bool responseStatusIncomplete;
@property (getter=_resultProviderID, nonatomic, readonly) int resultProviderID;
@property (getter=_reviews, nonatomic, readonly) NSArray *reviews;
@property (getter=_reviewsAttribution, nonatomic, readonly) _MKMapItemReviewsAttribution *reviewsAttribution;
@property (getter=_reviewsDisplayName, nonatomic, readonly) NSString *reviewsDisplayName;
@property (nonatomic, readonly) NSString *reviewsProviderDisplayName;
@property (getter=_sampleSizeForUserRatingScore, nonatomic, readonly) unsigned int sampleSizeForUserRatingScore;
@property (getter=_secondaryName, nonatomic, readonly) NSString *secondaryName;
@property (getter=_secondarySpokenName, nonatomic, readonly) NSString *secondarySpokenName;
@property (getter=_shortAddress, nonatomic, readonly) NSString *shortAddress;
@property (getter=_styleAttributes, nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (getter=_tips, nonatomic, readonly) NSArray *tips;
@property (getter=_transitAttribution, nonatomic, readonly) <GEOTransitAttribution> *transitAttribution;
@property (getter=_transitDisplayName, nonatomic, readonly) NSString *transitDisplayName;
@property (getter=_transitInfo, nonatomic, readonly) <GEOMapItemTransitInfo> *transitInfo;
@property (getter=_transitInfoUpdatedDate, nonatomic, readonly) NSDate *transitInfoUpdatedDate;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, readonly) GEOMapItemStorageUserValues *userValues;
@property (getter=_vendorID, nonatomic, readonly, copy) NSString *vendorID;
@property (getter=_venueFeatureType, nonatomic, readonly) long long venueFeatureType;
@property (getter=_venueInfo, nonatomic, readonly) <GEOMapItemVenueInfo> *venueInfo;
@property (getter=_webURL, nonatomic, readonly, copy) NSURL *webURL;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;
@property (nonatomic, readonly) NSString *yelpID;

+ (id)_deserializeResourceOptionsFromURL:(id)arg1 error:(out id*)arg2;
+ (void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2;
+ (id)_itemWithContact:(id)arg1 geoMapItem:(id)arg2;
+ (id)_itemWithGeoMapItem:(id)arg1;
+ (id)_launchOptionsFromResourceOptionsDictionary:(id)arg1;
+ (id)_launchOptionsWithOptions:(id)arg1;
+ (id)_localizedNextOpeningDayOftheWeekFormatter;
+ (id)_localizedNextOpeningHoursFormatter;
+ (id)_mapItemBackedByURL:(id)arg1;
+ (void)_mapItemFromHandle:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_mapItemFromVCardRepresentation:(id)arg1 error:(id*)arg2;
+ (id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;
+ (void)_mapItemsFromHandleURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(id /* block */)arg2;
+ (bool)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2;
+ (void)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)_sharedSessionURLForPunchoutURL:(id)arg1;
+ (id)_sharedSessionUserInfoForPunchoutUserInfo:(id)arg1;
+ (id)_sourceAppIdFromLaunchURL:(id)arg1;
+ (id)_sourceAppIdFromLaunchUserInfo:(id)arg1;
+ (id)_urlForLocation:(id)arg1 address:(id)arg2 label:(id)arg3 options:(id)arg4;
+ (id)_urlForMapItemHandles:(id)arg1 options:(id)arg2;
+ (id)contactsAddressDictionaryFromGeoAddressDictionary:(id)arg1;
+ (id)contactsAddressKeysForGeoAddressKeys;
+ (id)launchOptionsFromURL:(id)arg1;
+ (id)mapItemForCurrentLocation;
+ (id)mapItemWithDictionary:(id)arg1;
+ (id)mapItemWithSerializedPlaceData:(id)arg1;
+ (id)mapItemWithSerializedPlaceData:(id)arg1 serializedDetourInfo:(id)arg2 currentLocation:(bool)arg3;
+ (id)mapItemsFromURL:(id)arg1 options:(id*)arg2;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (bool)openMapsWithItems:(id)arg1 launchOptions:(id)arg2;
+ (void)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 fromScene:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)plistCompatibleDictionaryFromStandardOptions:(id)arg1;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)sanitizeArray:(id)arg1 forKey:(id)arg2;
+ (id)sanitizeDictionary:(id)arg1;
+ (id)sanitizeObject:(id)arg1 forKey:(id)arg2;
+ (id)standardOptionsFromPlistCompatibleDictionary:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)ticketForMapsDataString:(id)arg1 name:(id)arg2;
+ (id)urlForMapItem:(id)arg1 options:(id)arg2;
+ (id)urlForMapItems:(id)arg1 options:(id)arg2;
+ (bool)valueIsValid:(id)arg1 forKey:(id)arg2;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (bool)_acceptsApplePay;
- (id)_activityURL;
- (id)_activityURLUsingWebPlaceCard:(bool)arg1;
- (id)_activityURLUsingWebPlaceCard:(bool)arg1 muninViewState:(id)arg2;
- (id)_addressFormattedAsCity;
- (id)_addressFormattedAsMultilineAddress;
- (id)_addressFormattedAsName;
- (id)_addressFormattedAsShortenedAddress;
- (id)_addressFormattedAsSinglelineAddress;
- (id)_addressFormattedAsStreetOnly;
- (id)_addressFormattedAsTitlesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_addressFormattedAsWeatherDisplayName;
- (id)_addressOrNil:(id)arg1;
- (id)_alternativeAppAdamIds;
- (id)_amenities;
- (id)_annotatedItemList;
- (id)_attribution;
- (id)_attributionFor:(id)arg1 sourceStringFormat:(id)arg2 moreSourceStringFormat:(id)arg3 imageTintColor:(id)arg4;
- (id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3 isSnippetLogo:(bool)arg4;
- (id)_bestBrandIconURLForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (id)_bestNavbarBrandIconURLForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (unsigned long long)_brandMUID;
- (id)_browseCategories;
- (id)_businessClaim;
- (id)_businessHours;
- (bool)_canGetDirections;
- (id)_cnPostalAddress;
- (struct CLLocationCoordinate2D { double x1; double x2; })_coordinate;
- (unsigned long long)_customIconID;
- (id)_detourInfo;
- (id)_displayMapRegion;
- (float)_displayMaxZoom;
- (float)_displayMinZoom;
- (id)_encyclopedicInfo;
- (id)_externalTransitStationCode;
- (id)_firstLocalizedCategoryName;
- (id)_flyover;
- (id)_flyoverAnnouncementMessage;
- (id)_formatterForAdamId;
- (id)_fullAddressWithMultiline:(bool)arg1;
- (id)_geoAddress;
- (id)_geoFenceMapRegion;
- (id)_geoMapItem;
- (id)_geoMapItemStorageForDragAndDrop;
- (id)_geoMapItemStorageForPersistence;
- (id)_getBusiness;
- (id)_handle;
- (bool)_hasAcceptsApplePayAmenity;
- (bool)_hasAnyAmenities;
- (bool)_hasBrandMUID;
- (bool)_hasBusinessClaim;
- (bool)_hasBusinessHours;
- (bool)_hasCorrectedHomeWorkAddress;
- (bool)_hasCorrectedHomeWorkCoordinate;
- (bool)_hasDisplayMaxZoom;
- (bool)_hasDisplayMinZoom;
- (bool)_hasEncyclopedicInfo;
- (bool)_hasFlyover;
- (bool)_hasLinkedServices;
- (bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (bool)_hasLocalizedOperatingHours;
- (bool)_hasMUID;
- (bool)_hasMuninStorefront;
- (bool)_hasMuninViewState;
- (bool)_hasOperatingHours;
- (bool)_hasPriceDescription;
- (bool)_hasPriceRange;
- (bool)_hasResolvablePartialInformation;
- (bool)_hasRestaurantExtensionInfo;
- (bool)_hasResultProviderID;
- (bool)_hasTransit;
- (bool)_hasTransitDisplayName;
- (bool)_hasTransitLabels;
- (bool)_hasUserRatingScore;
- (bool)_hasVenueFeatureType;
- (id)_htmlRepresentation;
- (id)_identifier;
- (id)_initWithLabelMarker:(id)arg1;
- (bool)_isEmptyContactMapItem;
- (bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (bool)_isMapItemTypeAddress;
- (bool)_isMapItemTypeBrand;
- (bool)_isMapItemTypeBusiness;
- (bool)_isMapItemTypeSettlement;
- (bool)_isMapItemTypeTransit;
- (bool)_isMapItemTypeUnknown;
- (bool)_isMessageIDVerified;
- (bool)_isStandAloneBrand;
- (void)_launchActivityForBrandItem;
- (id)_linkedServices;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedNextOpeningStringShort:(bool)arg1;
- (id)_localizedResponseTime;
- (id)_localizedSampleSizeForUserRatingScoreString;
- (id)_mapsDataString;
- (void)_markTransitInfoUpdated;
- (id)_messageBusinessHours;
- (id)_messageID;
- (id)_messageURLString;
- (unsigned long long)_muid;
- (id)_muninViewState;
- (id)_navBackgroundbrandColor;
- (id)_navTintBrandColor;
- (bool)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned long long)_openingHoursOptions;
- (int)_parsecSectionType;
- (bool)_phoneNumberOptsOutOfAds;
- (id)_photosAttribution;
- (id)_placeCardContact;
- (id)_placeCollections;
- (id)_placeDataAsData;
- (int)_placeDisplayStyle;
- (id)_placecardLayout;
- (id)_poiPinpointURLString;
- (id)_poiSurveyURLString;
- (id)_postalAddressFromMeCardUsingAddressIdentifier:(id)arg1;
- (id)_preferedAppAdamID;
- (id)_preloadedTransitInfo;
- (id)_priceDescription;
- (id)_priceRangeString;
- (id)_providerURL;
- (id)_quickLinks;
- (void)_refreshAttribution;
- (id)_relatedPlaceList;
- (bool)_responseStatusIsIncomplete;
- (unsigned long long)_restaurantExtensionModeForFirstProvider;
- (id)_restaurantLink_firstProviderDisplayName;
- (id)_restaurantLink_firstProviderIdentifier;
- (id)_restaurantLink_firstProviderPlaceIdentifier;
- (id)_restaurantLink_firstVendorID;
- (bool)_restaurantLink_hasFeatureType:(unsigned long long)arg1;
- (id)_restaurantLink_overridenBundleIDsForVendorIDs;
- (int)_resultProviderID;
- (id)_reviewForIdentifier:(id)arg1;
- (id)_reviews;
- (id)_reviewsAttribution;
- (id)_reviewsDisplayName;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)_secondaryName;
- (id)_secondarySpokenName;
- (id)_shortAddress;
- (id)_styleAttributes;
- (id)_tips;
- (id)_transitAttribution;
- (id)_transitDisplayName;
- (id)_transitInfo;
- (id)_transitInfoUpdatedDate;
- (void)_updateTransitInfoWithMapItem:(id)arg1;
- (id)_urlExtraStorage;
- (id)_vCardFilename;
- (id)_vCardRepresentation;
- (id)_vendorID;
- (long long)_venueFeatureType;
- (id)_venueInfo;
- (id)_weatherDisplayName;
- (id)_webURL;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedNumberOfReviews;
- (id)formattedNumberOfReviewsIncludingProvider;
- (id)formattedNumberOfReviewsIncludingProvider:(bool)arg1 formatter:(id)arg2;
- (bool)hasAmenityType:(int)arg1;
- (unsigned long long)hash;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithCLLocation:(id)arg1 placeType:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(bool)arg2;
- (id)initWithGeoMapItemAsCurrentLocation:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (id)initWithPlace:(id)arg1 isPlaceHolderPlace:(bool)arg2;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (bool)isCurrentLocation;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceHolder;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)metadata;
- (id)name;
- (bool)openInMapsWithLaunchOptions:(id)arg1;
- (void)openInMapsWithLaunchOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openInMapsWithLaunchOptions:(id)arg1 fromScene:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)phoneNumber;
- (id)place;
- (id)placemark;
- (id)pointOfInterestCategory;
- (void)preloadTransitInfoWithCompletion:(id /* block */)arg1;
- (id)reservationInfo;
- (id)reviewsProviderDisplayName;
- (void)setIsCurrentLocation:(bool)arg1;
- (void)setIsMapItemTypeTransit:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPointOfInterestCategory:(id)arg1;
- (void)setReservationInfo:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)sharingURL;
- (id)thumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 annotationView:(id)arg2;
- (id)timeZone;
- (id)url;
- (id)urlRepresentation;
- (id)userValues;
- (bool)valueForAmenityType:(int)arg1;
- (id)venueLabelWithContext:(unsigned long long)arg1;
- (id)yelpID;

@end
