/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelRadioStation : MPModelObject

@property (nonatomic) bool allowsItemLiking;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *attributionLabel;
@property (getter=isBeats1, nonatomic) bool beats1;
@property (nonatomic, readonly) MPRadioStationEvent *currentStationEvent;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic) bool hasExplicitContent;
@property (getter=isLive, nonatomic) bool live;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *providerBundleIdentifier;
@property (nonatomic, readonly) long long providerID;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, copy) NSURL *providerUniversalLink;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic, copy) NSArray *stationEvents;
@property (nonatomic, copy) id /* block */ stationGlyphBlock;
@property (getter=isSubscriptionRequired, nonatomic) bool subscriptionRequired;
@property (nonatomic) long long subtype;
@property (nonatomic) long long type;
@property (nonatomic, readonly) MPRadioStationEvent *upcomingStationEvent;

+ (id)__allowsItemLiking_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__attributionLabel_KEY;
+ (id)__beats1_KEY;
+ (id)__editorNotes_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__live_KEY;
+ (id)__name_KEY;
+ (id)__providerBundleIdentifier_KEY;
+ (id)__providerID_KEY;
+ (id)__providerName_KEY;
+ (id)__providerUniversalLink_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__stationEvents_KEY;
+ (id)__stationGlyphBlock_KEY;
+ (id)__subscriptionRequired_KEY;
+ (id)__subtype_KEY;
+ (id)__type_KEY;
+ (id)classesForSecureCoding;

- (id)artworkCatalog;
- (id)contentItemCollectionInfo;
- (id)currentStationEvent;
- (id)humanDescription;
- (id)stationGlyph;
- (id)upcomingStationEvent;

@end
