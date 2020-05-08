/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouSuggestionAssetCollection : PXBaseDisplayCollection <PXDisplayAssetCollection> {
    NSDate * _endDate;
    unsigned long long  _estimatedAssetCount;
    bool  _isAggregation;
    bool  _isEnriched;
    bool  _isEnrichmentComplete;
    bool  _isRecent;
    NSString * _localizedDateDescription;
    NSString * _localizedDebugDescription;
    NSArray * _localizedLocationNames;
    NSString * _localizedSmartDescription;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    double  _promotionScore;
    unsigned short  _px_highlightEnrichmentState;
    long long  _px_highlightKind;
    NSDate * _startDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long estimatedAssetCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAggregation;
@property (nonatomic, readonly) bool isEnriched;
@property (nonatomic, readonly) bool isEnrichmentComplete;
@property (nonatomic, readonly) bool isRecent;
@property (nonatomic, readonly) NSString *localizedDateDescription;
@property (nonatomic, readonly) NSString *localizedDebugDescription;
@property (nonatomic, readonly) NSArray *localizedLocationNames;
@property (nonatomic, readonly) NSString *localizedSmartDescription;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) double promotionScore;
@property (nonatomic, readonly) bool px_canRearrangeContent;
@property (nonatomic, readonly) unsigned short px_highlightEnrichmentState;
@property (nonatomic, readonly) long long px_highlightKind;
@property (nonatomic, readonly) bool px_isAllPhotosSmartAlbum;
@property (nonatomic, readonly) bool px_isCloudMultipleContributorsEnabled;
@property (nonatomic, readonly) bool px_isFavoriteMemoriesSmartFolder;
@property (nonatomic, readonly) bool px_isFavoritesSmartAlbum;
@property (nonatomic, readonly) bool px_isFolder;
@property (nonatomic, readonly) bool px_isHiddenSmartAlbum;
@property (nonatomic, readonly) bool px_isImportHistoryCollection;
@property (nonatomic, readonly) bool px_isImportSessionCollection;
@property (nonatomic, readonly) bool px_isImportedAlbum;
@property (nonatomic, readonly) bool px_isMacSyncedAlbum;
@property (nonatomic, readonly) bool px_isMacSyncedEventsFolder;
@property (nonatomic, readonly) bool px_isMacSyncedFacesFolder;
@property (nonatomic, readonly) bool px_isMediaTypeSmartAlbum;
@property (nonatomic, readonly) bool px_isMediaTypesFolder;
@property (nonatomic, readonly) bool px_isMemoriesVirtualCollection;
@property (nonatomic, readonly) bool px_isMomentsVirtualCollection;
@property (nonatomic, readonly) bool px_isMyPhotoStreamAlbum;
@property (nonatomic, readonly) bool px_isOwnedSharedAlbum;
@property (nonatomic, readonly) bool px_isPeopleVirtualCollection;
@property (nonatomic, readonly) bool px_isPhotosVirtualCollection;
@property (nonatomic, readonly) bool px_isPlacesSmartAlbum;
@property (nonatomic, readonly) bool px_isProject;
@property (nonatomic, readonly) bool px_isProjectsFolder;
@property (nonatomic, readonly) bool px_isRecentlyAddedSmartAlbum;
@property (nonatomic, readonly) bool px_isRecentlyDeletedSmartAlbum;
@property (nonatomic, readonly) bool px_isRecentlyEditedSmartAlbum;
@property (nonatomic, readonly) bool px_isRecentsSmartAlbum;
@property (nonatomic, readonly) bool px_isRegularAlbum;
@property (nonatomic, readonly) bool px_isRegularFolder;
@property (nonatomic, readonly) bool px_isRootSmartAlbum;
@property (nonatomic, readonly) bool px_isScreenRecordingsSmartAlbum;
@property (nonatomic, readonly) bool px_isSharedActivityVirtualCollection;
@property (nonatomic, readonly) bool px_isSharedAlbum;
@property (nonatomic, readonly) bool px_isSharedAlbumsFolder;
@property (nonatomic, readonly) bool px_isSmartAlbum;
@property (nonatomic, readonly) bool px_isSmartFolder;
@property (nonatomic, readonly) bool px_isStandInAlbum;
@property (nonatomic, readonly) bool px_isTopLevelFolder;
@property (nonatomic, readonly) bool px_isTransientPlacesCollection;
@property (nonatomic, readonly) bool px_isUserCreated;
@property (nonatomic, readonly) bool px_isUserSmartAlbum;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endDate;
- (unsigned long long)estimatedAssetCount;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (bool)isAggregation;
- (bool)isEnriched;
- (bool)isEnrichmentComplete;
- (bool)isRecent;
- (id)localizedDateDescription;
- (id)localizedDateDescriptionWithOptions:(unsigned long long)arg1;
- (id)localizedDebugDescription;
- (id)localizedLocationNames;
- (id)localizedSmartDescription;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (double)promotionScore;
- (unsigned short)px_highlightEnrichmentState;
- (long long)px_highlightKind;
- (id)startDate;

@end
