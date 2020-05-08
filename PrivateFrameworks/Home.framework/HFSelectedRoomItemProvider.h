/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSelectedRoomItemProvider : HFItemProvider {
    id /* block */  _filter;
    HMHome * _home;
    HFRoomBuilderItem * _roomBuilderItem;
    HFItemBuilder<HFServiceLikeBuilder> * _serviceLikeBuilder;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HFRoomBuilderItem *roomBuilderItem;
@property (nonatomic, retain) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 serviceLikeBuilder:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)roomBuilderItem;
- (id)serviceLikeBuilder;
- (void)setFilter:(id /* block */)arg1;
- (void)setRoomBuilderItem:(id)arg1;
- (void)setServiceLikeBuilder:(id)arg1;

@end
