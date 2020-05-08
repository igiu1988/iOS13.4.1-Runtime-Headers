/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKAirDropTransferInfo : NSObject {
    bool  _autoAccept;
    NSString * _bundleID;
    NSArray * _files;
    bool  _hideProgress;
    NSArray * _items;
    NSString * _itemsDescription;
    NSData * _previewImageData;
    NSString * _senderName;
    NSString * _sourceBundleIdentifier;
}

@property (nonatomic) bool autoAccept;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSArray *files;
@property (nonatomic) bool hideProgress;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSString *itemsDescription;
@property (nonatomic, copy) NSData *previewImageData;
@property (nonatomic, copy) NSString *senderName;
@property (nonatomic, copy) NSString *sourceBundleIdentifier;

- (void).cxx_destruct;
- (void)addFiles:(id)arg1;
- (void)addItems:(id)arg1;
- (bool)autoAccept;
- (id)bundleID;
- (id)description;
- (id)dictionaryRepresentation;
- (id)files;
- (bool)hideProgress;
- (id)items;
- (id)itemsDescription;
- (id)previewImageData;
- (id)senderName;
- (void)setAutoAccept:(bool)arg1;
- (void)setBundleID:(id)arg1;
- (void)setFiles:(id)arg1;
- (void)setHideProgress:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setItemsDescription:(id)arg1;
- (void)setPreviewImageData:(id)arg1;
- (void)setSenderName:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (id)sourceBundleIdentifier;

@end
