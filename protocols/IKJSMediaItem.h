/* Generated by EzioChiu.
 */

@protocol IKJSMediaItem <JSExport>

@required

- (NSString *)artworkImageSrcset;
- (NSString *)artworkImageURL;
- (NSString *)contentRatingDomain;
- (NSNumber *)contentRatingRanking;
- (NSString *)description;
- (NSString *)externalID;
- (NSArray *)highlightGroups;
- (id)initWithType:(NSString *)arg1 :(NSString *)arg2;
- (NSArray *)interstitials;
- (bool)isExplicit;
- (NSDictionary *)metadata;
- (NSNumber *)resumeTime;
- (void)setArtworkImageSrcset:(NSString *)arg1;
- (void)setArtworkImageURL:(NSString *)arg1;
- (void)setContentRatingDomain:(NSString *)arg1;
- (void)setContentRatingRanking:(NSNumber *)arg1;
- (void)setDescription:(NSString *)arg1;
- (void)setExternalID:(NSString *)arg1;
- (void)setHighlightGroups:(NSArray *)arg1;
- (void)setInterstitials:(NSArray *)arg1;
- (void)setIsExplicit:(bool)arg1;
- (void)setMetadata:(NSDictionary *)arg1;
- (void)setResumeTime:(NSNumber *)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setUrl:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;
- (NSString *)type;
- (NSString *)url;

@end
