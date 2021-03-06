/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayTypeContextView : UIView <HKDisplayTypeContextHorizontalCollectionViewCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    NSLayoutConstraint * _collectionHeightConstraint;
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _collectionViewLayout;
    <HKDisplayTypeContextViewDelegate> * _delegate;
    NSArray * _displayTypeContextItems;
    long long  _lastSelectedRow;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKDisplayTypeContextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *displayTypeContextItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (id)_buildCollectionViewLayout;
- (double)_contentHeight;
- (void)_handleSelection:(id)arg1 indexPath:(id)arg2 informDelegate:(bool)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)didTapOnInfoButtonForCollectionViewCell:(id)arg1;
- (id)displayTypeContextItems;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)preferredHeight;
- (void)selectItemAtIndex:(long long)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDisplayTypeContextItems:(id)arg1;

@end
