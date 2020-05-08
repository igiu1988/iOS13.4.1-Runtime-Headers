/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSForYouLinkRecommendation : NSObject {
    UIImage * _appIcon;
    NSString * _bundleIdentifier;
    NSNumber * _cachedScore;
    CNContact * _contact;
    UIImage * _contactImage;
    NSString * _footnote;
    UIImage * _image;
    NSURL * _imageURL;
    NSDate * _lastSeenDate;
    NSMutableSet * _originalQueries;
    NSURL * _pageURL;
    NSString * _secondarySourceIdentifier;
    NSString * _simplifiedURLString;
    unsigned long long  _source;
    id  _sourceID;
    NSString * _title;
    unsigned long long  _topicSource;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) UIImage *appIcon;
@property (nonatomic, readonly, copy) NSString *badgeBundleIdentifier;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NSNumber *cachedScore;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) UIImage *contactImage;
@property (nonatomic, copy) NSString *footnote;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic, readonly) NSDate *lastSeenDate;
@property (nonatomic, readonly, copy) NSSet *originalQueries;
@property (nonatomic, readonly, copy) NSString *originalQueriesString;
@property (nonatomic, readonly) NSURL *pageURL;
@property (nonatomic, copy) NSString *secondarySourceIdentifier;
@property (nonatomic, readonly, copy) NSString *simplifiedURLString;
@property (nonatomic, readonly) unsigned long long source;
@property (nonatomic, retain) id sourceID;
@property (nonatomic, readonly) UIImage *sourceIcon;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long topicSource;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (void)addOriginalQueries:(id)arg1;
- (id)appIcon;
- (id)badgeBundleIdentifier;
- (id)bundleIdentifier;
- (id)cachedScore;
- (id)contact;
- (id)contactImage;
- (id)footnote;
- (id)image;
- (id)imageURL;
- (id)initWithTitle:(id)arg1 url:(id)arg2 lastSeenDate:(id)arg3 source:(unsigned long long)arg4 topicSource:(unsigned long long)arg5;
- (id)lastSeenDate;
- (id)originalQueries;
- (id)originalQueriesString;
- (id)pageURL;
- (id)secondarySourceIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCachedScore:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactImage:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setSecondarySourceIdentifier:(id)arg1;
- (void)setSourceID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopicSource:(unsigned long long)arg1;
- (id)simplifiedURLString;
- (unsigned long long)source;
- (id)sourceID;
- (id)sourceIcon;
- (id)title;
- (unsigned long long)topicSource;
- (id)uniqueIdentifier;

@end
