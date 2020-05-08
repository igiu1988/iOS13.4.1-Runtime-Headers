/* Generated by EzioChiu.
 */

@protocol _INPBMessageLinkMetadata <NSObject>

@required

- (int)StringAsLinkMediaType:(NSString *)arg1;
- (void)addIconURL:(NSString *)arg1;
- (void)addImageURL:(NSString *)arg1;
- (NSString *)albumArtist;
- (NSString *)albumName;
- (NSString *)appleTvSubtitle;
- (NSString *)appleTvTitle;
- (NSString *)artistGenre;
- (NSString *)artistName;
- (NSString *)audioBookAuthor;
- (NSString *)audioBookName;
- (NSString *)audioBookNarrator;
- (NSString *)bookAuthor;
- (NSString *)bookName;
- (void)clearIconURLs;
- (void)clearImageURLs;
- (NSString *)creator;
- (bool)hasAlbumArtist;
- (bool)hasAlbumName;
- (bool)hasAppleTvSubtitle;
- (bool)hasAppleTvTitle;
- (bool)hasArtistGenre;
- (bool)hasArtistName;
- (bool)hasAudioBookAuthor;
- (bool)hasAudioBookName;
- (bool)hasAudioBookNarrator;
- (bool)hasBookAuthor;
- (bool)hasBookName;
- (bool)hasCreator;
- (bool)hasITunesStoreFrontIdentifier;
- (bool)hasITunesStoreIdentifier;
- (bool)hasItemType;
- (bool)hasLinkMediaType;
- (bool)hasMovieBundleGenre;
- (bool)hasMovieBundleName;
- (bool)hasMovieGenre;
- (bool)hasMovieName;
- (bool)hasMusicVideoArtist;
- (bool)hasMusicVideoName;
- (bool)hasOriginalURL;
- (bool)hasPlaylistCurator;
- (bool)hasPlaylistName;
- (bool)hasPodcastArtist;
- (bool)hasPodcastEpisodeArtist;
- (bool)hasPodcastEpisodeName;
- (bool)hasPodcastEpisodePodcastName;
- (bool)hasPodcastEpisodeReleaseDate;
- (bool)hasPodcastName;
- (bool)hasRadioCurator;
- (bool)hasRadioName;
- (bool)hasSiteName;
- (bool)hasSoftwareGenre;
- (bool)hasSoftwareName;
- (bool)hasSoftwarePlatform;
- (bool)hasSongAlbum;
- (bool)hasSongArtist;
- (bool)hasSongTitle;
- (bool)hasSummary;
- (bool)hasTitle;
- (bool)hasTvEpisodeEpisodeName;
- (bool)hasTvEpisodeGenre;
- (bool)hasTvEpisodeSeasonName;
- (bool)hasTvSeasonGenre;
- (bool)hasTvSeasonName;
- (bool)hasTvShowName;
- (NSString *)iTunesStoreFrontIdentifier;
- (NSString *)iTunesStoreIdentifier;
- (NSString *)iconURLAtIndex:(unsigned long long)arg1;
- (NSArray *)iconURLs;
- (unsigned long long)iconURLsCount;
- (NSString *)imageURLAtIndex:(unsigned long long)arg1;
- (NSArray *)imageURLs;
- (unsigned long long)imageURLsCount;
- (NSString *)itemType;
- (int)linkMediaType;
- (NSString *)linkMediaTypeAsString:(int)arg1;
- (NSString *)movieBundleGenre;
- (NSString *)movieBundleName;
- (NSString *)movieGenre;
- (NSString *)movieName;
- (NSString *)musicVideoArtist;
- (NSString *)musicVideoName;
- (NSString *)originalURL;
- (NSString *)playlistCurator;
- (NSString *)playlistName;
- (NSString *)podcastArtist;
- (NSString *)podcastEpisodeArtist;
- (NSString *)podcastEpisodeName;
- (NSString *)podcastEpisodePodcastName;
- (_INPBDateTime *)podcastEpisodeReleaseDate;
- (NSString *)podcastName;
- (NSString *)radioCurator;
- (NSString *)radioName;
- (void)setAlbumArtist:(NSString *)arg1;
- (void)setAlbumName:(NSString *)arg1;
- (void)setAppleTvSubtitle:(NSString *)arg1;
- (void)setAppleTvTitle:(NSString *)arg1;
- (void)setArtistGenre:(NSString *)arg1;
- (void)setArtistName:(NSString *)arg1;
- (void)setAudioBookAuthor:(NSString *)arg1;
- (void)setAudioBookName:(NSString *)arg1;
- (void)setAudioBookNarrator:(NSString *)arg1;
- (void)setBookAuthor:(NSString *)arg1;
- (void)setBookName:(NSString *)arg1;
- (void)setCreator:(NSString *)arg1;
- (void)setHasLinkMediaType:(bool)arg1;
- (void)setITunesStoreFrontIdentifier:(NSString *)arg1;
- (void)setITunesStoreIdentifier:(NSString *)arg1;
- (void)setIconURLs:(NSArray *)arg1;
- (void)setImageURLs:(NSArray *)arg1;
- (void)setItemType:(NSString *)arg1;
- (void)setLinkMediaType:(int)arg1;
- (void)setMovieBundleGenre:(NSString *)arg1;
- (void)setMovieBundleName:(NSString *)arg1;
- (void)setMovieGenre:(NSString *)arg1;
- (void)setMovieName:(NSString *)arg1;
- (void)setMusicVideoArtist:(NSString *)arg1;
- (void)setMusicVideoName:(NSString *)arg1;
- (void)setOriginalURL:(NSString *)arg1;
- (void)setPlaylistCurator:(NSString *)arg1;
- (void)setPlaylistName:(NSString *)arg1;
- (void)setPodcastArtist:(NSString *)arg1;
- (void)setPodcastEpisodeArtist:(NSString *)arg1;
- (void)setPodcastEpisodeName:(NSString *)arg1;
- (void)setPodcastEpisodePodcastName:(NSString *)arg1;
- (void)setPodcastEpisodeReleaseDate:(_INPBDateTime *)arg1;
- (void)setPodcastName:(NSString *)arg1;
- (void)setRadioCurator:(NSString *)arg1;
- (void)setRadioName:(NSString *)arg1;
- (void)setSiteName:(NSString *)arg1;
- (void)setSoftwareGenre:(NSString *)arg1;
- (void)setSoftwareName:(NSString *)arg1;
- (void)setSoftwarePlatform:(NSString *)arg1;
- (void)setSongAlbum:(NSString *)arg1;
- (void)setSongArtist:(NSString *)arg1;
- (void)setSongTitle:(NSString *)arg1;
- (void)setSummary:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setTvEpisodeEpisodeName:(NSString *)arg1;
- (void)setTvEpisodeGenre:(NSString *)arg1;
- (void)setTvEpisodeSeasonName:(NSString *)arg1;
- (void)setTvSeasonGenre:(NSString *)arg1;
- (void)setTvSeasonName:(NSString *)arg1;
- (void)setTvShowName:(NSString *)arg1;
- (NSString *)siteName;
- (NSString *)softwareGenre;
- (NSString *)softwareName;
- (NSString *)softwarePlatform;
- (NSString *)songAlbum;
- (NSString *)songArtist;
- (NSString *)songTitle;
- (NSString *)summary;
- (NSString *)title;
- (NSString *)tvEpisodeEpisodeName;
- (NSString *)tvEpisodeGenre;
- (NSString *)tvEpisodeSeasonName;
- (NSString *)tvSeasonGenre;
- (NSString *)tvSeasonName;
- (NSString *)tvShowName;

@end
