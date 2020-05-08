/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackHistoryRecordChangeRequest : NSObject <NSCopying> {
    bool  _allowsStoreContainerImport;
    MPModelGenericObject * _itemGenericObject;
    MPModelPlayEvent * _playEvent;
    long long  _repeatType;
    bool  _updateHistoryPlaylist;
}

@property (nonatomic) bool allowsStoreContainerImport;
@property (nonatomic, retain) MPModelGenericObject *itemGenericObject;
@property (nonatomic, retain) MPModelPlayEvent *playEvent;
@property (nonatomic) long long repeatType;
@property (nonatomic) bool updateHistoryPlaylist;

- (void).cxx_destruct;
- (bool)allowsStoreContainerImport;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)itemGenericObject;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)playEvent;
- (long long)repeatType;
- (void)setAllowsStoreContainerImport:(bool)arg1;
- (void)setItemGenericObject:(id)arg1;
- (void)setPlayEvent:(id)arg1;
- (void)setRepeatType:(long long)arg1;
- (void)setUpdateHistoryPlaylist:(bool)arg1;
- (bool)updateHistoryPlaylist;

@end
