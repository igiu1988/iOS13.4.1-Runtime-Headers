/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemStorage : PBCodable <GEOMapItemPrivate, NSCopying> {
    GEOMapItemClientAttributes * _clientAttributes;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_clientAttributes : 1; 
        unsigned int read_internalDetourInfo : 1; 
        unsigned int read_mapsURL : 1; 
        unsigned int read_originatingCoordinate : 1; 
        unsigned int read_placeData : 1; 
        unsigned int read_placeResult : 1; 
        unsigned int read_place : 1; 
        unsigned int read_userValues : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_clientAttributes : 1; 
        unsigned int wrote_internalDetourInfo : 1; 
        unsigned int wrote_mapsURL : 1; 
        unsigned int wrote_originatingCoordinate : 1; 
        unsigned int wrote_placeData : 1; 
        unsigned int wrote_placeResult : 1; 
        unsigned int wrote_place : 1; 
        unsigned int wrote_userValues : 1; 
    }  _flags;
    <GEOMapItem> * _geoMapItem;
    geo_isolater * _geoMapItemIsolater;
    GEOPDResultDetourInfo * _internalDetourInfo;
    NSString * _mapsURL;
    GEOLatLng * _originatingCoordinate;
    GEOPlace * _place;
    GEOPDPlace * _placeData;
    GEOPlaceResult * _placeResult;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    _GEOMapItemStorageNotificationTrampoline * _trampoline;
    PBUnknownFields * _unknownFields;
    GEOMapItemStorageUserValues * _userValues;
}

@property (getter=_additionalPlaceInfos, nonatomic, readonly) NSArray *additionalPlaceInfos;
@property (nonatomic, readonly) NSDictionary *addressDictionary;
@property (getter=_addressGeocodeAccuracy, nonatomic, readonly) int addressGeocodeAccuracy;
@property (getter=_alternateSearchableNames, nonatomic, readonly) NSArray *alternateSearchableNames;
@property (getter=_amenities, nonatomic, readonly) NSArray *amenities;
@property (getter=_annotatedItemList, nonatomic, readonly) <GEOAnnotatedItemList> *annotatedItemList;
@property (getter=_areaInMeters, nonatomic, readonly) double areaInMeters;
@property (nonatomic, readonly) NSArray *areasOfInterest;
@property (getter=_associatedApp, nonatomic, readonly) GEOAssociatedApp *associatedApp;
@property (getter=_attribution, nonatomic, readonly) GEOMapItemPlaceAttribution *attribution;
@property (getter=_brandMUID, nonatomic, readonly) unsigned long long brandMUID;
@property (getter=_browseCategories, nonatomic, readonly) NSArray *browseCategories;
@property (getter=_businessClaim, nonatomic, readonly) GEOPDBusinessClaim *businessClaim;
@property (getter=_businessHours, nonatomic, readonly) NSArray *businessHours;
@property (getter=_businessURL, nonatomic, readonly) NSString *businessURL;
@property (nonatomic, readonly) struct { double x1; double x2; } centerCoordinate;
@property (getter=_childItems, nonatomic, readonly) NSArray *childItems;
@property (getter=_clientAttributes, nonatomic, readonly) GEOMapItemClientAttributes *clientAttributes;
@property (nonatomic, retain) GEOMapItemClientAttributes *clientAttributes;
@property (nonatomic, readonly) int contactAddressType;
@property (nonatomic, readonly) bool contactIsMe;
@property (nonatomic, readonly) NSString *contactName;
@property (nonatomic, readonly) NSString *contactSpokenName;
@property (getter=_containedPlace, nonatomic, readonly) GEOMapItemContainedPlace *containedPlace;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (getter=_customIconID, nonatomic, readonly) unsigned long long customIconID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOMapItemDetourInfo *detourInfo;
@property (getter=_disambiguationName, nonatomic, readonly) NSString *disambiguationName;
@property (nonatomic, readonly) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) GEOMapRegion *displayMapRegionOrNil;
@property (nonatomic, readonly) float displayMaxZoom;
@property (nonatomic, readonly) float displayMinZoom;
@property (getter=isDisputed, nonatomic, readonly) bool disputed;
@property (getter=_enableRAPLightweightFeedback, nonatomic, readonly) bool enableRAPLightweightFeedback;
@property (nonatomic, readonly) NSData *encodedData;
@property (getter=_encyclopedicInfo, nonatomic, readonly) <GEOEncyclopedicInfo> *encyclopedicInfo;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSData *externalTransitStationCode;
@property (getter=_featureLink, nonatomic, readonly) GEORestaurantFeaturesLink *featureLink;
@property (getter=_flyover, nonatomic, readonly) GEOPDFlyover *flyover;
@property (getter=_flyoverAnnouncementMessage, nonatomic, readonly) NSString *flyoverAnnouncementMessage;
@property (nonatomic, readonly) GEOAddress *geoAddress;
@property (nonatomic, readonly) GEOMapRegion *geoFenceMapRegion;
@property (nonatomic, readonly) GEOMapRegion *geoFenceMapRegionOrNil;
@property (getter=_groundViewLocationId, nonatomic, readonly) unsigned long long groundViewLocationId;
@property (getter=_hasAnyAmenities, nonatomic, readonly) bool hasAnyAmenities;
@property (getter=_hasAreaInMeters, nonatomic, readonly) bool hasAreaInMeters;
@property (getter=_hasBrandMUID, nonatomic, readonly) bool hasBrandMUID;
@property (getter=_hasBusinessClaim, nonatomic, readonly) bool hasBusinessClaim;
@property (getter=_hasBusinessHours, nonatomic, readonly) bool hasBusinessHours;
@property (nonatomic, readonly) bool hasClientAttributes;
@property (getter=_hasCurrentOperatingHours, nonatomic, readonly) bool hasCurrentOperatingHours;
@property (nonatomic, readonly) bool hasDisplayMaxZoom;
@property (nonatomic, readonly) bool hasDisplayMinZoom;
@property (getter=_hasEncyclopedicInfo, nonatomic, readonly) bool hasEncyclopedicInfo;
@property (nonatomic, readonly) bool hasExpiredComponents;
@property (getter=_hasFeatureLink, nonatomic, readonly) bool hasFeatureLink;
@property (getter=_hasFlyover, nonatomic, readonly) bool hasFlyover;
@property (getter=_hasGroundViewLocationId, nonatomic, readonly) bool hasGroundViewLocationId;
@property (nonatomic, readonly) bool hasInternalDetourInfo;
@property (getter=_hasLinkedServices, nonatomic, readonly) bool hasLinkedServices;
@property (getter=_hasMUID, nonatomic, readonly) bool hasMUID;
@property (nonatomic, readonly) bool hasMapsURL;
@property (getter=_hasOperatingHours, nonatomic, readonly) bool hasOperatingHours;
@property (nonatomic, readonly) bool hasOriginatingCoordinate;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic, readonly) bool hasPlaceData;
@property (nonatomic, readonly) bool hasPlaceResult;
@property (getter=_hasPriceRange, nonatomic, readonly) bool hasPriceRange;
@property (getter=_hasResolvablePartialInformation, nonatomic, readonly) bool hasResolvablePartialInformation;
@property (getter=_hasResultProviderID, nonatomic, readonly) bool hasResultProviderID;
@property (getter=_hasTelephone, nonatomic, readonly) bool hasTelephone;
@property (getter=_hasTransit, nonatomic, readonly) bool hasTransit;
@property (getter=_hasUserRatingScore, nonatomic, readonly) bool hasUserRatingScore;
@property (nonatomic, readonly) bool hasUserValues;
@property (nonatomic, readonly) bool hasVenueCapacity;
@property (getter=_hasVenueFeatureType, nonatomic, readonly) bool hasVenueFeatureType;
@property (getter=_hasWifiFingerprintConfidence, nonatomic, readonly) bool hasWifiFingerprintConfidence;
@property (getter=_hasWifiFingerprintLabelStatusCode, nonatomic, readonly) bool hasWifiFingerprintLabelStatusCode;
@property (getter=_hasWifiFingerprintLabelType, nonatomic, readonly) bool hasWifiFingerprintLabelType;
@property (readonly) unsigned long long hash;
@property (getter=_identifier, nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (getter=_isInLinkedPlaceRelationship, nonatomic, readonly) bool inLinkedPlaceRelationship;
@property (nonatomic, retain) GEOPDResultDetourInfo *internalDetourInfo;
@property (nonatomic, readonly) bool isEventAllDay;
@property (getter=_isStandaloneBrand, nonatomic, readonly) bool isStandAloneBrand;
@property (getter=_isTransitDisplayFeature, nonatomic, readonly) bool isTransitDisplayFeature;
@property (getter=_linkedServices, nonatomic, readonly) NSArray *linkedServices;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (getter=_mapsCategoryId, nonatomic, readonly) NSString *mapsCategoryId;
@property (nonatomic, retain) NSString *mapsURL;
@property (getter=_messageLink, nonatomic, readonly) GEOMessageLink *messageLink;
@property (getter=_muid, nonatomic, readonly) unsigned long long muid;
@property (getter=_muninViewState, nonatomic, readonly) GEOMuninViewState *muninViewState;
@property (nonatomic, readonly) NSString *name;
@property (getter=_needsAttribution, nonatomic, readonly) bool needsAttribution;
@property (getter=_normalizedUserRatingScore, nonatomic, readonly) float normalizedUserRatingScore;
@property (getter=_openingHoursOptions, nonatomic, readonly) unsigned long long openingHoursOptions;
@property (getter=_optsOutOfTelephoneAds, nonatomic, readonly) bool optsOutOfTelephoneAds;
@property (nonatomic, retain) GEOLatLng *originatingCoordinate;
@property (getter=_parsecSectionType, nonatomic, readonly) int parsecSectionType;
@property (getter=_photos, nonatomic, readonly) NSArray *photos;
@property (getter=_photosAttribution, nonatomic, readonly) GEOMapItemPhotosAttribution *photosAttribution;
@property (getter=_place, nonatomic, readonly) GEOPlace *place;
@property (nonatomic, retain) GEOPlace *place;
@property (getter=_placeCollections, nonatomic, readonly) NSArray *placeCollections;
@property (getter=_placeData, nonatomic, readonly) GEOPDPlace *placeData;
@property (nonatomic, retain) GEOPDPlace *placeData;
@property (getter=_placeDataAsData, nonatomic, readonly) NSData *placeDataAsData;
@property (getter=_placeDisplayStyle, nonatomic, readonly) int placeDisplayStyle;
@property (getter=_placeDisplayType, nonatomic, readonly) int placeDisplayType;
@property (getter=_placeResult, nonatomic, readonly) GEOPlaceResult *placeResult;
@property (nonatomic, retain) GEOPlaceResult *placeResult;
@property (getter=_placeType, nonatomic, readonly) int placeType;
@property (getter=_placecardLayoutConfiguration, nonatomic, readonly) GEOPlacecardLayoutConfiguration *placecardLayoutConfiguration;
@property (getter=_poiCategory, nonatomic, readonly) NSString *poiCategory;
@property (getter=_poiPinpointURLString, nonatomic, readonly) NSString *poiPinpointURLString;
@property (getter=_poiSurveyURLString, nonatomic, readonly) NSString *poiSurveyURLString;
@property (getter=_priceDescription, nonatomic, readonly) GEOPriceDescription *priceDescription;
@property (getter=_priceRange, nonatomic, readonly) unsigned int priceRange;
@property (getter=_providerURL, nonatomic, readonly, copy) NSURL *providerURL;
@property (getter=_quickLinks, nonatomic, readonly) NSArray *quickLinks;
@property (nonatomic, readonly) int referenceFrame;
@property (getter=_relatedPlaceList, nonatomic, readonly) GEORelatedPlaceList *relatedPlaceList;
@property (getter=_responseStatusIsIncomplete, nonatomic, readonly) bool responseStatusIncomplete;
@property (getter=_resultProviderID, nonatomic, readonly) int resultProviderID;
@property (getter=_resultSnippetDistanceDisplayThreshold, nonatomic, readonly) unsigned int resultSnippetDistanceDisplayThreshold;
@property (getter=_resultSnippetLocationString, nonatomic, readonly) NSString *resultSnippetLocationString;
@property (getter=_reviews, nonatomic, readonly) NSArray *reviews;
@property (getter=_reviewsAttribution, nonatomic, readonly) GEOMapItemReviewsAttribution *reviewsAttribution;
@property (getter=_roadAccessPoints, nonatomic, readonly) NSArray *roadAccessPoints;
@property (getter=_sampleSizeForUserRatingScore, nonatomic, readonly) unsigned int sampleSizeForUserRatingScore;
@property (nonatomic, readonly) NSString *secondaryName;
@property (nonatomic, readonly) NSString *secondarySpokenName;
@property (getter=_showSuggestAnEditButton, nonatomic, readonly) bool showSuggestAnEditButton;
@property (nonatomic, readonly) NSArray *spatialMappedCategories;
@property (nonatomic, readonly) NSArray *spatialMappedPlaceCategories;
@property (getter=_storefrontInfo, nonatomic, readonly) GEOStorefrontInfo *storefrontInfo;
@property (getter=_storefrontPresentationInfo, nonatomic, readonly) GEOStorefrontPresentationInfo *storefrontPresentationInfo;
@property (getter=_styleAttributes, nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (getter=_telephone, nonatomic, readonly) NSString *telephone;
@property (nonatomic, readonly) NSTimeZone *timezone;
@property (getter=_tips, nonatomic, readonly) NSArray *tips;
@property (getter=_transitAttribution, nonatomic, readonly) <GEOTransitAttribution> *transitAttribution;
@property (getter=_transitInfo, nonatomic, readonly) <GEOMapItemTransitInfo> *transitInfo;
@property (getter=_transitVehiclePosition, nonatomic, readonly) <GEOTransitVehiclePosition> *transitVehiclePosition;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOMapItemStorageUserValues *userValues;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (getter=_vendorID, nonatomic, readonly, copy) NSString *vendorID;
@property (nonatomic, readonly) long long venueCapacity;
@property (getter=_venueFeatureType, nonatomic, readonly) int venueFeatureType;
@property (getter=_venueInfo, nonatomic, readonly) <GEOMapItemVenueInfo> *venueInfo;
@property (getter=_walletCategoryIdentifier, nonatomic, readonly) NSString *walletCategoryIdentifier;
@property (getter=_walletCategoryLocalizedString, nonatomic, readonly) NSString *walletCategoryLocalizedString;
@property (getter=_walletCategoryLocalizedStringLocale, nonatomic, readonly) NSString *walletCategoryLocalizedStringLocale;
@property (getter=_walletCategoryStyling, nonatomic, readonly) GEOStyleAttributes *walletCategoryStyling;
@property (getter=_walletMapsCategoryIdentifier, nonatomic, readonly) NSString *walletMapsCategoryIdentifier;
@property (getter=_walletPlaceLocalizedString, nonatomic, readonly) NSString *walletPlaceLocalizedString;
@property (getter=_walletPlaceLocalizedStringLocale, nonatomic, readonly) NSString *walletPlaceLocalizedStringLocale;
@property (getter=_walletPlaceStyling, nonatomic, readonly) GEOStyleAttributes *walletPlaceStyling;
@property (getter=_webURL, nonatomic, readonly, copy) NSURL *webURL;
@property (getter=_wifiFingerprintConfidence, nonatomic, readonly) unsigned int wifiFingerprintConfidence;
@property (getter=_wifiFingerprintLabelStatusCode, nonatomic, readonly) int wifiFingerprintLabelStatusCode;
@property (getter=_wifiFingerprintLabelType, nonatomic, readonly) int wifiFingerprintLabelType;

+ (bool)isValid:(id)arg1;
+ (id)mapItemStorageForCoordinate:(struct { double x1; double x2; })arg1;
+ (id)mapItemStorageForGEOMapItem:(id)arg1;
+ (id)mapItemStorageForGEOMapItem:(id)arg1 clientAttributes:(id)arg2;
+ (id)mapItemStorageForGEOMapItem:(id)arg1 forUseType:(unsigned long long)arg2;
+ (id)mapItemStorageForPlace:(id)arg1;
+ (id)mapItemStorageForPlace:(id)arg1 clientAttributes:(id)arg2;
+ (id)mapItemStorageForPlace:(id)arg1 clientAttributes:(id)arg2 userValues:(id)arg3;
+ (id)mapItemStorageForPlaceData:(id)arg1;
+ (id)mapItemStorageForPlaceData:(id)arg1 detourInfo:(id)arg2;
+ (id)mapItemStorageForPlaceData:(id)arg1 detourInfo:(id)arg2 userValues:(id)arg3;
+ (id)mapItemStorageForPlaceResult:(id)arg1;
+ (id)mapItemStorageForSerializedMapItemStorage:(id)arg1;
+ (id)mapItemStorageForSerializedPlaceData:(id)arg1;
+ (id)mapItemStorageForSerializedPlaceData:(id)arg1 serializedDetourInfo:(id)arg2;

- (void).cxx_destruct;
- (id)_additionalPlaceInfos;
- (int)_addressGeocodeAccuracy;
- (id)_alternateSearchableNames;
- (id)_amenities;
- (id)_annotatedItemList;
- (double)_areaInMeters;
- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (id)_asPlaceInfo;
- (id)_associatedApp;
- (id)_attribution;
- (id)_bestAvatarBrandIconURLForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (id)_bestHeroBrandIconURLForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (id)_bestNavbarBrandIconURLForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (unsigned long long)_brandMUID;
- (id)_browseCategories;
- (id)_businessClaim;
- (id)_businessHours;
- (id)_businessURL;
- (id)_childItems;
- (id)_clientAttributes;
- (id)_containedPlace;
- (unsigned long long)_customIconID;
- (id)_disambiguationName;
- (bool)_enableRAPLightweightFeedback;
- (id)_encyclopedicInfo;
- (id)_featureLink;
- (id)_flyover;
- (id)_flyoverAnnouncementMessage;
- (id)_geoMapItem;
- (id)_geoMapItemCreatingAndAssociatingIfNeeded;
- (unsigned long long)_groundViewLocationId;
- (bool)_hasAnyAmenities;
- (bool)_hasAreaInMeters;
- (bool)_hasBrandMUID;
- (bool)_hasBusinessClaim;
- (bool)_hasBusinessHours;
- (bool)_hasCurrentOperatingHours;
- (bool)_hasEncyclopedicInfo;
- (bool)_hasFeatureLink;
- (bool)_hasFlyover;
- (bool)_hasGroundViewLocationId;
- (bool)_hasLinkedServices;
- (bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (bool)_hasMUID;
- (bool)_hasOperatingHours;
- (bool)_hasPriceRange;
- (bool)_hasResolvablePartialInformation;
- (bool)_hasResultProviderID;
- (bool)_hasTelephone;
- (bool)_hasTransit;
- (bool)_hasUserRatingScore;
- (bool)_hasVenueFeatureType;
- (bool)_hasWifiFingerprintConfidence;
- (bool)_hasWifiFingerprintLabelStatusCode;
- (bool)_hasWifiFingerprintLabelType;
- (id)_identifier;
- (bool)_isInLinkedPlaceRelationship;
- (bool)_isStandaloneBrand;
- (bool)_isTransitDisplayFeature;
- (id)_linkedServices;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_mapItemByStrippingOptionalData;
- (id)_mapsCategoryId;
- (id)_messageLink;
- (unsigned long long)_muid;
- (id)_muninViewState;
- (bool)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned long long)_openingHoursOptions;
- (bool)_optsOutOfTelephoneAds;
- (int)_parsecSectionType;
- (id)_photos;
- (id)_photosAttribution;
- (id)_place;
- (id)_placeCollections;
- (id)_placeData;
- (id)_placeDataAsData;
- (int)_placeDisplayStyle;
- (int)_placeDisplayType;
- (id)_placeResult;
- (int)_placeType;
- (id)_placecardLayoutConfiguration;
- (id)_poiCategory;
- (id)_poiPinpointURLString;
- (id)_poiSurveyURLString;
- (id)_priceDescription;
- (unsigned int)_priceRange;
- (id)_providerURL;
- (id)_quickLinks;
- (void)_readClientAttributes;
- (void)_readInternalDetourInfo;
- (void)_readMapsURL;
- (void)_readOriginatingCoordinate;
- (void)_readPlace;
- (void)_readPlaceData;
- (void)_readPlaceResult;
- (void)_readUserValues;
- (id)_relatedPlaceList;
- (bool)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (unsigned int)_resultSnippetDistanceDisplayThreshold;
- (id)_resultSnippetLocationString;
- (id)_reviews;
- (id)_reviewsAttribution;
- (id)_roadAccessPoints;
- (unsigned int)_sampleSizeForUserRatingScore;
- (bool)_showSuggestAnEditButton;
- (id)_spokenAddressForLocale:(id)arg1;
- (id)_storefrontInfo;
- (id)_storefrontPresentationInfo;
- (id)_styleAttributes;
- (id)_telephone;
- (id)_tips;
- (id)_transitAttribution;
- (id)_transitInfo;
- (id)_transitVehiclePosition;
- (id)_vendorID;
- (int)_venueFeatureType;
- (id)_venueInfo;
- (id)_walletCategoryIdentifier;
- (id)_walletCategoryLocalizedString;
- (id)_walletCategoryLocalizedStringLocale;
- (id)_walletCategoryStyling;
- (id)_walletMapsCategoryIdentifier;
- (id)_walletPlaceLocalizedString;
- (id)_walletPlaceLocalizedStringLocale;
- (id)_walletPlaceStyling;
- (id)_webURL;
- (unsigned int)_wifiFingerprintConfidence;
- (int)_wifiFingerprintLabelStatusCode;
- (int)_wifiFingerprintLabelType;
- (id)addressDictionary;
- (id)addressObject;
- (id)areasOfInterest;
- (struct { double x1; double x2; })centerCoordinate;
- (void)clearSensitiveFields;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientAttributes;
- (int)contactAddressType;
- (bool)contactIsMe;
- (id)contactName;
- (id)contactSpokenName;
- (struct { double x1; double x2; })coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detourInfo;
- (id)dictionaryRepresentation;
- (id)displayMapRegion;
- (id)displayMapRegionOrNil;
- (float)displayMaxZoom;
- (float)displayMinZoom;
- (id)encodedData;
- (id)eventDate;
- (id)eventName;
- (id)externalTransitStationCode;
- (id)geoAddress;
- (id)geoFenceMapRegion;
- (id)geoFenceMapRegionOrNil;
- (bool)hasAmenityType:(int)arg1;
- (bool)hasClientAttributes;
- (bool)hasDisplayMaxZoom;
- (bool)hasDisplayMinZoom;
- (bool)hasExpiredComponents;
- (bool)hasInternalDetourInfo;
- (bool)hasMapsURL;
- (bool)hasOriginatingCoordinate;
- (bool)hasPlace;
- (bool)hasPlaceData;
- (bool)hasPlaceResult;
- (bool)hasUserValues;
- (bool)hasVenueCapacity;
- (unsigned long long)hash;
- (id)init;
- (void)initAdditionalFields;
- (id)initWithData:(id)arg1;
- (id)initWithPlace:(id)arg1 clientAttributes:(id)arg2 userValues:(id)arg3;
- (id)initWithPlaceData:(id)arg1 detourInfo:(id)arg2 clientAttributes:(id)arg3 userValues:(id)arg4;
- (id)initWithPlaceResult:(id)arg1;
- (id)internalDetourInfo;
- (bool)isDisputed;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMapItem:(id)arg1;
- (bool)isEventAllDay;
- (bool)isValid;
- (void)iterateGroundViewsWithBlock:(id /* block */)arg1;
- (id)mapRegion;
- (id)mapsURL;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)originatingCoordinate;
- (id)place;
- (id)placeData;
- (id)placeResult;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)referenceFrame;
- (id)secondaryName;
- (id)secondarySpokenName;
- (void)setClientAttributes:(id)arg1;
- (void)setInternalDetourInfo:(id)arg1;
- (void)setMapsURL:(id)arg1;
- (void)setOriginatingCoordinate:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)setPlaceData:(id)arg1;
- (void)setPlaceResult:(id)arg1;
- (void)setUserValues:(id)arg1;
- (id)shortAddress;
- (id)spatialMappedCategories;
- (id)spatialMappedPlaceCategories;
- (id)spokenNameForLocale:(id)arg1;
- (id)timezone;
- (id)unknownFields;
- (id)userValues;
- (bool)valueForAmenityType:(int)arg1;
- (long long)venueCapacity;
- (id)weatherDisplayName;
- (void)writeTo:(id)arg1;

@end
