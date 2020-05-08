/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILockupComponent : SKUIPageComponent {
    SKUIEditorialComponent * _editorial;
    SKUIItem * _item;
    long long  _itemIdentifier;
    struct SKUILockupStyle { 
        long long artworkSize; 
        long long layoutStyle; 
        unsigned long long visibleFields; 
    }  _lockupStyle;
}

@property (nonatomic, readonly) bool _needsItemData;
@property (nonatomic, readonly) SKUIEditorialComponent *editorial;
@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; } lockupStyle;
@property (nonatomic, readonly) SKUILockupViewElement *viewElement;

- (void).cxx_destruct;
- (bool)_needsItemData;
- (void)_setItem:(id)arg1;
- (void)_setLockupStyle:(struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })arg1;
- (long long)componentType;
- (id)editorial;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithItem:(id)arg1 style:(struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })arg2;
- (id)initWithItemIdentifier:(long long)arg1 style:(struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })arg2;
- (id)initWithViewElement:(id)arg1;
- (id)item;
- (long long)itemIdentifier;
- (struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })lockupStyle;

@end
