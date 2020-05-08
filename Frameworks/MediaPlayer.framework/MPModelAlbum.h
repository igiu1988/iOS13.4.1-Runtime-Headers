/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelAlbum : MPModelObject

@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (getter=isClassical, nonatomic) bool classical;
@property (getter=isCompilation, nonatomic) bool compilation;
@property (nonatomic, copy) NSString *copyrightText;
@property (nonatomic) long long discCount;
@property (nonatomic, readonly, copy) NSDate *downloadedDate;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, retain) MPModelGenre *genre;
@property (nonatomic) bool hasCleanContent;
@property (nonatomic) bool hasExplicitContent;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (nonatomic, copy) NSDate *lastDevicePlaybackDate;
@property (getter=isLibraryAddEligible, nonatomic) bool libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic) long long maximumItemTrackNumber;
@property (getter=isPreorder, nonatomic) bool preorder;
@property (nonatomic, copy) NSDateComponents *releaseDateComponents;
@property (nonatomic, retain) MPModelSong *representativeSong;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic, copy) id /* block */ songPopularityBlock;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long trackCount;
@property (nonatomic) float volumeNormalization;
@property (nonatomic) long long year;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__artist_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__classical_KEY;
+ (id)__compilation_KEY;
+ (id)__copyrightText_KEY;
+ (id)__discCount_KEY;
+ (id)__downloadedDate_KEY;
+ (id)__editorNotes_KEY;
+ (id)__genre_KEY;
+ (id)__hasCleanContent_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__keepLocalEnableState_KEY;
+ (id)__keepLocalManagedStatus_KEY;
+ (id)__lastDevicePlaybackDate_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__maximumItemTrackNumber_KEY;
+ (id)__preorder_KEY;
+ (id)__releaseDateComponents_KEY;
+ (id)__representativeSong_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__songPopularityBlock_KEY;
+ (id)__title_KEY;
+ (id)__trackCount_KEY;
+ (id)__volumeNormalization_KEY;
+ (id)__year_KEY;
+ (id)kindWithSongKind:(id)arg1;
+ (id)kindWithSongKind:(id)arg1 options:(unsigned long long)arg2;
+ (id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2;
+ (id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2 options:(unsigned long long)arg3;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;

- (id)artworkCatalog;
- (id)contentItemCollectionInfo;
- (id)humanDescription;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)songPopularityForIdentifiers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredSectionPlaybackProperties;

- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;
- (id)mpc_protoContainerRepresentation;
- (id)mpc_radioContentReference;

@end
