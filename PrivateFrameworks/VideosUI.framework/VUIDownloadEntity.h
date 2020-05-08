/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDownloadEntity : NSObject <NSCopying, VUIMediaEntityAssetControllerDelegate> {
    <VUIDownloadEntityDelegate> * _delegate;
    long long  _downloadType;
    NSNumber * _duration;
    NSNumber * _episodeNumber;
    NSArray * _mediaEntities;
    NSNumber * _numberOfMediaItems;
    NSNumber * _numberOfMediaItemsDownloading;
    NSNumber * _releaseYear;
    NSObject<VUIMediaEntityIdentifier> * _showIdentifier;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIDownloadEntityDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long downloadType;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSNumber *episodeNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *mediaEntities;
@property (nonatomic, retain) NSNumber *numberOfMediaItems;
@property (nonatomic, retain) NSNumber *numberOfMediaItemsDownloading;
@property (nonatomic, retain) NSNumber *releaseYear;
@property (nonatomic, retain) NSObject<VUIMediaEntityIdentifier> *showIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_configureWithMediaEntities:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (long long)downloadType;
- (id)duration;
- (id)episodeNumber;
- (id)initWithMediaEntities:(id)arg1 withDownloadType:(long long)arg2;
- (id)initWithMediaEntity:(id)arg1 withDownloadType:(long long)arg2;
- (id)mediaEntities;
- (void)mediaEntityAssetController:(id)arg1 stateDidChange:(id)arg2;
- (id)numberOfMediaItems;
- (id)numberOfMediaItemsDownloading;
- (id)releaseYear;
- (void)setDelegate:(id)arg1;
- (void)setDownloadType:(long long)arg1;
- (void)setDuration:(id)arg1;
- (void)setEpisodeNumber:(id)arg1;
- (void)setMediaEntities:(id)arg1;
- (void)setNumberOfMediaItems:(id)arg1;
- (void)setNumberOfMediaItemsDownloading:(id)arg1;
- (void)setReleaseYear:(id)arg1;
- (void)setShowIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)showIdentifier;
- (id)title;

@end
