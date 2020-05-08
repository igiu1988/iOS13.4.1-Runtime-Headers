/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface IMPodcastFeed : NSObject {
    NSString * _author;
    NSString * _category;
    NSString * _feedDescription;
    NSString * _globalImageURL;
    NSString * _imageURL;
    bool  _isExplicit;
    NSMutableArray * _items;
    bool  _preferredCategoryFound;
    NSString * _provider;
    NSString * _showType;
    NSString * _title;
    NSString * _updatedFeedURL;
    NSString * _webpageURL;
}

@property (nonatomic, retain) NSString *author;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *feedDescription;
@property (nonatomic, retain) NSString *globalImageURL;
@property (nonatomic, retain) NSString *imageURL;
@property (nonatomic) bool isExplicit;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic) bool preferredCategoryFound;
@property (nonatomic, retain) NSString *provider;
@property (nonatomic, retain) NSString *showType;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *updatedFeedURL;
@property (nonatomic, retain) NSString *webpageURL;

- (void).cxx_destruct;
- (id)author;
- (id)category;
- (id)feedDescription;
- (id)globalImageURL;
- (id)imageURL;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isExplicit;
- (id)items;
- (bool)preferredCategoryFound;
- (id)provider;
- (void)setAuthor:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setFeedDescription:(id)arg1;
- (void)setGlobalImageURL:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setIsExplicit:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setPreferredCategoryFound:(bool)arg1;
- (void)setProvider:(id)arg1;
- (void)setShowType:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdatedFeedURL:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (id)showType;
- (id)title;
- (id)updatedFeedURL;
- (id)webpageURL;

@end