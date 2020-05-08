/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCItemGlobalID : NSObject <NSCopying> {
    BRCItemID * _itemID;
    BRCZoneRowID * _zoneRowID;
}

@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) BRCZoneRowID *zoneRowID;

+ (id)itemGlobalIDFromLocalItem:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithZoneRowID:(id)arg1 itemID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemGlobalID:(id)arg1;
- (id)itemID;
- (id)zoneRowID;

@end
