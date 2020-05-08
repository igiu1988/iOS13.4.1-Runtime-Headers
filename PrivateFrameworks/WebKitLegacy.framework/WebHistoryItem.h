/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHistoryItem : NSObject <NSCopying> {
    WebHistoryItemPrivate * _private;
}

@property (nonatomic, readonly, copy) NSString *URLString;
@property (nonatomic, copy) NSString *alternateTitle;
@property (nonatomic, readonly) double lastVisitedTimeInterval;
@property (nonatomic, readonly, copy) NSString *originalURLString;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)entryWithURL:(id)arg1;
+ (void)initialize;

- (id)RSSFeedReferrer;
- (id)URL;
- (id)URLString;
- (bool)_hasCachedPageExpired;
- (bool)_isInBackForwardCache;
- (id)_redirectURLs;
- (float)_scale;
- (bool)_scaleIsInitial;
- (struct CGPoint { double x1; double x2; })_scrollPoint;
- (void)_setScale:(float)arg1 isInitial:(bool)arg2;
- (void)_setScrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setViewportArguments:(id)arg1;
- (id)_viewportArguments;
- (void)_visitedWithTitle:(id)arg1;
- (id)alternateTitle;
- (id)children;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationIncludingChildren:(bool)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2;
- (id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4;
- (id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3;
- (id)initWithWebCoreHistoryItem:(struct Ref<WebCore::HistoryItem, WTF::DumbPtrTraits<WebCore::HistoryItem> > { struct HistoryItem {} *x1; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTargetItem;
- (bool)lastVisitWasFailure;
- (double)lastVisitedTimeInterval;
- (id)originalURLString;
- (struct CGPoint { double x1; double x2; })scrollPoint;
- (void)setAlternateTitle:(id)arg1;
- (void)setRSSFeedReferrer:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setViewState:(id)arg1;
- (id)target;
- (id)title;

@end
