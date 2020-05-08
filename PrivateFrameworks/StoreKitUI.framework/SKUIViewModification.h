/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewModification : NSObject {
    NSMapTable * _allViewTextProperties;
    SKUIViewReusePool * _viewPool;
    NSMutableArray * _views;
}

@property (nonatomic, readonly, copy) NSMapTable *allViewTextProperties;
@property (nonatomic, readonly) NSArray *views;

- (void).cxx_destruct;
- (id)_addImageViewWithReuseIdentifier:(id)arg1 viewElement:(id)arg2 context:(id)arg3;
- (id)_attributedStringViewForLayout:(id)arg1;
- (id)_itemStateForButton:(id)arg1;
- (void)_styleItemOfferButton:(id)arg1 forElement:(id)arg2 context:(id)arg3;
- (id)addBadgeViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addBarRatingWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addButtonWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addDividerWithElement:(id)arg1 context:(id)arg2;
- (id)addHeaderViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addHorizontalListWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addHorizontalLockupWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addImageDeckViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addImageGridViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addImageViewWithElement:(id)arg1 context:(id)arg2;
- (id)addImageViewWithVideoElement:(id)arg1 context:(id)arg2;
- (id)addLabelViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addLabelViewWithOrdinalElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addMenuButtonWithTitleItem:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addOfferViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addResponseViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addReusableViewWithReuseIdentifier:(id)arg1;
- (id)addReviewListTitleViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addStackItemViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addStackListViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addStarRatingControlViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addStarRatingViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addTabularLockupWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addTextViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addTomatoRatingViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)addView:(id)arg1;
- (id)allViewTextProperties;
- (id)initWithViewReusePool:(id)arg1;
- (void)setTextProperties:(id)arg1 forView:(id)arg2;
- (id)views;

@end
