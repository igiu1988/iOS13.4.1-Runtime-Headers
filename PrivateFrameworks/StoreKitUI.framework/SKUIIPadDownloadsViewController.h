/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIPadDownloadsViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUIClientContext * _clientContext;
    UICollectionView * _collectionView;
    <SKUIDownloadsChildViewControllerDelegate> * _delegate;
    NSArray * _downloads;
    bool  _editing;
    _UIContentUnavailableView * _noContentView;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIDownloadsChildViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelAction:(id)arg1;
- (void)_deleteAction:(id)arg1;
- (void)_editAction:(id)arg1;
- (void)_reload;
- (void)_reloadLayout;
- (void)_reloadNavigationItem;
- (id)clientContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (id)downloads;
- (void)loadView;
- (void)reloadDownloadsAtIndexes:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloads:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
