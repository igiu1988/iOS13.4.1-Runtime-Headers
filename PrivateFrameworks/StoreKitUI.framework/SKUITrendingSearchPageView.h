/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITrendingSearchPageView : UIView {
    <SKUITrendingSearchPageViewDelegate> * _delegate;
    SKUITrendingSearchPage * _page;
    SKUITrendingSearchView * _trendingSearchView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) <SKUITrendingSearchPageViewDelegate> *delegate;
@property (nonatomic, retain) SKUITrendingSearchPage *page;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)page;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setPage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
