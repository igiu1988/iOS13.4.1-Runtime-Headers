/* Generated by EzioChiu.
 */

@protocol PLMomentAssetData <PLMomentRefreshable, PLRegionsClusteringItem>

@required

- (NSArray *)assetComparisonSortDescriptors;
- (NSString *)avalancheUUID;
- (long long)compareToAsset:(id <PLMomentAssetData>)arg1;
- (double)curationScore;
- (NSDate *)dateCreated;
- (<PLPhotosHighlightData> *)dayGroupHighlightBeingAssets;
- (<PLPhotosHighlightData> *)dayGroupHighlightBeingExtendedAssets;
- (<PLPhotosHighlightData> *)dayGroupHighlightBeingKeyAsset;
- (bool)favorite;
- (NSString *)globalUUID;
- (bool)hasChanges;
- (<PLPhotosHighlightData> *)highlightBeingAssets;
- (<PLPhotosHighlightData> *)highlightBeingExtendedAssets;
- (<PLPhotosHighlightData> *)highlightBeingKeyAsset;
- (<PLPhotosHighlightData> *)highlightBeingSummaryAssets;
- (int)inferredTimeZoneOffset;
- (bool)isAvalancheStackPhoto;
- (bool)isDeleted;
- (bool)isInterestingForAvalanche;
- (bool)isPhoto;
- (bool)isScreenRecording;
- (bool)isVideo;
- (NSDate *)localDateCreated;
- (CLLocation *)location;
- (PLRevGeoLocationInfo *)locationInfo;
- (<PLMomentData> *)moment;
- (<PLPhotosHighlightData> *)monthHighlightBeingFirstAsset;
- (<PLPhotosHighlightData> *)monthHighlightBeingKeyAsset;
- (PLRevGeoPlaceAnnotation *)placeAnnotation;
- (NSData *)reverseLocationData;
- (bool)reverseLocationDataIsValid;
- (void)setCurationScore:(double)arg1;
- (void)setDateCreated:(NSDate *)arg1;
- (void)setDayGroupHighlightBeingAssets:(id <PLPhotosHighlightData>)arg1;
- (void)setDayGroupHighlightBeingExtendedAssets:(id <PLPhotosHighlightData>)arg1;
- (void)setDayGroupHighlightBeingKeyAsset:(id <PLPhotosHighlightData>)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setHighlightBeingAssets:(id <PLPhotosHighlightData>)arg1;
- (void)setHighlightBeingExtendedAssets:(id <PLPhotosHighlightData>)arg1;
- (void)setHighlightBeingKeyAsset:(id <PLPhotosHighlightData>)arg1;
- (void)setHighlightBeingSummaryAssets:(id <PLPhotosHighlightData>)arg1;
- (void)setLocation:(CLLocation *)arg1;
- (void)setMoment:(id <PLMomentData>)arg1;
- (void)setMonthHighlightBeingFirstAsset:(id <PLPhotosHighlightData>)arg1;
- (void)setMonthHighlightBeingKeyAsset:(id <PLPhotosHighlightData>)arg1;
- (void)setReverseLocationData:(NSData *)arg1;
- (void)setReverseLocationDataIsValid:(bool)arg1;
- (void)setShiftedLocation:(CLLocation *)arg1;
- (void)setShiftedLocationIsValid:(bool)arg1;
- (void)setYearHighlightBeingKeyAsset:(id <PLPhotosHighlightData>)arg1;
- (CLLocation *)shiftedLocation;
- (bool)shiftedLocationIsValid;
- (NSObject<NSCopying> *)uniqueObjectID;
- (bool)visibilityStateIsEqualToState:(short)arg1;
- (<PLPhotosHighlightData> *)yearHighlightBeingKeyAsset;

@optional

- (NSString *)cloudAssetGUID;
- (double)duration;
- (long long)height;
- (short)kind;
- (short)kindSubtype;
- (NSDate *)modificationDate;
- (void)setDuration:(double)arg1;
- (void)setHeight:(long long)arg1;
- (void)setKind:(short)arg1;
- (void)setKindSubtype:(short)arg1;
- (void)setModificationDate:(NSDate *)arg1;
- (void)setWidth:(long long)arg1;
- (NSString *)uuid;
- (long long)width;

@end
