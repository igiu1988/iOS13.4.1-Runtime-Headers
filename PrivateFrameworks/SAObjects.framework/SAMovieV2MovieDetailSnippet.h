/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2MovieDetailSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *actors;
@property (nonatomic, copy) NSString *adamId;
@property (nonatomic, copy) NSArray *alternateProviderPunchouts;
@property (nonatomic, copy) NSNumber *availableOnItunesForPurchase;
@property (nonatomic, copy) NSNumber *availableOnItunesForRent;
@property (nonatomic) bool canBeFavorited;
@property (nonatomic, copy) NSString *canonicalId;
@property (nonatomic, copy) NSArray *directors;
@property (nonatomic, copy) NSArray *genres;
@property (nonatomic, copy) NSURL *hiresTrailerUri;
@property (nonatomic, copy) NSURL *iTunesUri;
@property (nonatomic) bool is3d;
@property (nonatomic) bool isContainerItem;
@property (nonatomic, copy) NSURL *lowresTrailerUri;
@property (nonatomic, copy) NSURL *movieIdentifier;
@property (nonatomic, retain) SAMovieV2ReviewListSnippet *movieReviewListSnippet;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) SAUIAppPunchOut *playOnItunesPunchout;
@property (nonatomic, copy) NSNumber *playTrailer;
@property (nonatomic, copy) NSArray *posterImages;
@property (nonatomic, copy) NSNumber *qualityRating;
@property (nonatomic, copy) NSString *rating;
@property (nonatomic) long long runtimeInMinutes;
@property (nonatomic, retain) SAMovieV2ShowtimeSnippet *showtimeSnippet;
@property (nonatomic, copy) NSArray *studios;
@property (nonatomic, copy) NSString *synopsis;
@property (nonatomic, retain) SAMovieV2TheaterShowtimeListSnippet *theaterShowtimeListSnippet;
@property (nonatomic, copy) NSString *theaterShowtimeSearchRegionDescription;
@property (nonatomic, copy) NSDate *theatricalReleaseDate;
@property (nonatomic, retain) SAUIAppPunchOut *videosPunchout;

+ (id)movieDetailSnippet;
+ (id)movieDetailSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)actors;
- (id)adamId;
- (id)alternateProviderPunchouts;
- (id)availableOnItunesForPurchase;
- (id)availableOnItunesForRent;
- (bool)canBeFavorited;
- (id)canonicalId;
- (id)directors;
- (id)encodedClassName;
- (id)genres;
- (id)groupIdentifier;
- (id)hiresTrailerUri;
- (id)iTunesUri;
- (bool)is3d;
- (bool)isContainerItem;
- (id)lowresTrailerUri;
- (id)movieIdentifier;
- (id)movieReviewListSnippet;
- (id)name;
- (id)playOnItunesPunchout;
- (id)playTrailer;
- (id)posterImages;
- (id)qualityRating;
- (id)rating;
- (long long)runtimeInMinutes;
- (void)setActors:(id)arg1;
- (void)setAdamId:(id)arg1;
- (void)setAlternateProviderPunchouts:(id)arg1;
- (void)setAvailableOnItunesForPurchase:(id)arg1;
- (void)setAvailableOnItunesForRent:(id)arg1;
- (void)setCanBeFavorited:(bool)arg1;
- (void)setCanonicalId:(id)arg1;
- (void)setDirectors:(id)arg1;
- (void)setGenres:(id)arg1;
- (void)setHiresTrailerUri:(id)arg1;
- (void)setITunesUri:(id)arg1;
- (void)setIs3d:(bool)arg1;
- (void)setIsContainerItem:(bool)arg1;
- (void)setLowresTrailerUri:(id)arg1;
- (void)setMovieIdentifier:(id)arg1;
- (void)setMovieReviewListSnippet:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPlayOnItunesPunchout:(id)arg1;
- (void)setPlayTrailer:(id)arg1;
- (void)setPosterImages:(id)arg1;
- (void)setQualityRating:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setRuntimeInMinutes:(long long)arg1;
- (void)setShowtimeSnippet:(id)arg1;
- (void)setStudios:(id)arg1;
- (void)setSynopsis:(id)arg1;
- (void)setTheaterShowtimeListSnippet:(id)arg1;
- (void)setTheaterShowtimeSearchRegionDescription:(id)arg1;
- (void)setTheatricalReleaseDate:(id)arg1;
- (void)setVideosPunchout:(id)arg1;
- (id)showtimeSnippet;
- (id)studios;
- (id)synopsis;
- (id)theaterShowtimeListSnippet;
- (id)theaterShowtimeSearchRegionDescription;
- (id)theatricalReleaseDate;
- (id)videosPunchout;

@end
