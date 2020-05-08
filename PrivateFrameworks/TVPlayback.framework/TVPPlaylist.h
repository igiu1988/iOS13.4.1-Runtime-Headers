/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

@interface TVPPlaylist : NSObject {
    NSArray * _activeList;
    unsigned long long  _activeListIndex;
    NSDictionary * _changeContext;
    unsigned long long  _count;
    unsigned long long  _currentIndex;
    NSObject<TVPMediaItem> * _currentMediaItem;
    long long  _endAction;
    NSString * _name;
    NSObject<TVPMediaItem> * _nextMediaItem;
    unsigned long long  _numConsecutivePlaybackFailures;
    NSObject<TVPMediaItem> * _previousMediaItem;
    long long  _repeatMode;
    bool  _shuffleEnabled;
    NSMutableArray * _shuffledItems;
    bool  _skipExplicit;
    NSMutableArray * _trackList;
    unsigned long long  _upNextIndex;
    NSArray * _upcomingItems;
    unsigned long long  _upcomingItemsLimit;
    bool  _windowed;
}

@property (nonatomic, readonly) NSArray *activeList;
@property (nonatomic, readonly) unsigned long long activeListIndex;
@property (nonatomic, retain) NSDictionary *changeContext;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic, retain) NSObject<TVPMediaItem> *currentMediaItem;
@property (nonatomic) long long endAction;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSObject<TVPMediaItem> *nextMediaItem;
@property (nonatomic) unsigned long long numConsecutivePlaybackFailures;
@property (nonatomic, retain) NSObject<TVPMediaItem> *previousMediaItem;
@property (nonatomic) long long repeatMode;
@property (nonatomic, readonly) bool shuffleEnabled;
@property (nonatomic) bool skipExplicit;
@property (nonatomic, readonly) bool supportsRepeat;
@property (nonatomic, readonly) bool supportsShuffle;
@property (nonatomic, readonly) NSArray *trackList;
@property (nonatomic, readonly) unsigned long long upNextIndex;
@property (nonatomic, readonly) NSArray *upcomingItems;
@property (nonatomic) unsigned long long upcomingItemsLimit;
@property (nonatomic) bool windowed;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void).cxx_destruct;
- (bool)_isMediaItemExplicit:(id)arg1;
- (unsigned long long)_nextActiveListIndex;
- (unsigned long long)_previousActiveListIndex;
- (void)_shuffle:(bool)arg1;
- (void)_updateCurrent:(bool)arg1 andNextItems:(bool)arg2 withContext:(id)arg3;
- (id)activeList;
- (unsigned long long)activeListIndex;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)addItemsToUpNext:(id)arg1;
- (id)changeContext;
- (void)changeMedia:(long long)arg1;
- (void)changeMedia:(long long)arg1 withContext:(id)arg2;
- (bool)changeToActiveListIndex:(unsigned long long)arg1 withContext:(id)arg2;
- (unsigned long long)count;
- (unsigned long long)currentIndex;
- (id)currentMediaItem;
- (long long)endAction;
- (id)init;
- (id)initWithMediaItems:(id)arg1 index:(long long)arg2 isCollection:(bool)arg3;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertItems:(id)arg1 atIndexes:(id)arg2;
- (bool)isEqualToPlaylist:(id)arg1;
- (bool)moreItemsAvailable:(long long)arg1;
- (id)name;
- (id)nextMediaItem;
- (unsigned long long)numConsecutivePlaybackFailures;
- (id)previousMediaItem;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (long long)repeatMode;
- (void)setChangeContext:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)setCurrentMediaItem:(id)arg1;
- (void)setEndAction:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setNextMediaItem:(id)arg1;
- (void)setNumConsecutivePlaybackFailures:(unsigned long long)arg1;
- (void)setPreviousMediaItem:(id)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setShuffleEnabled:(bool)arg1 preserveCurrentItem:(bool)arg2;
- (void)setSkipExplicit:(bool)arg1;
- (void)setUpcomingItemsLimit:(unsigned long long)arg1;
- (void)setWindowed:(bool)arg1;
- (bool)shuffleEnabled;
- (bool)skipExplicit;
- (bool)supportsRepeat;
- (bool)supportsShuffle;
- (id)trackList;
- (unsigned long long)upNextIndex;
- (id)upcomingItems;
- (unsigned long long)upcomingItemsLimit;
- (bool)windowed;

@end
