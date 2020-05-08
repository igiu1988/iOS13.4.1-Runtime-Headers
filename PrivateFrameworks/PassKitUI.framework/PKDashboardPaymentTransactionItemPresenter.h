/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardPaymentTransactionItemPresenter : NSObject <PKDashboardItemPresenter> {
    UIImage * _appleCardImage;
    <CNAvatarViewDelegate> * _avatarViewDelegate;
    UIImage * _cashbackImage;
    PKPeerPaymentContactResolver * _contactResolver;
    unsigned long long  _context;
    PKPaymentDefaultDataProvider * _dataProvider;
    UIImage * _emptyImage;
    PKPeerPaymentController * _peerPaymentController;
    PKPeerPaymentWebService * _peerPaymentWebService;
    PKPaymentTransactionCollectionViewCell * _sampleCell;
    PKPaymentTransactionCellController * _transactionCellController;
    UIFont * _transactionCellPrimaryLabelFont;
    UIFont * _transactionCellPrimaryLabelPeerPaymentFont;
    UIFont * _transactionCellSecondaryLabelFont;
    UIFont * _transactionCellSecondaryLabelPeerPaymentFont;
    UIFont * _transactionCellValueLabelFont;
    UIFont * _transactionCellValueLabelPeerPaymentFont;
    PKPaymentTransactionDetailsFactory * _transactionDetailsFactory;
    bool  _useAccessibilityLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;
- (id)_contactKeysToFetch;
- (struct CGSize { double x1; double x2; })_imageSize;
- (bool)_shouldShowIconForPass:(id)arg1 context:(unsigned long long)arg2;
- (void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3;
- (void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3;
- (id)appleCardImage;
- (bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)cashbackImage;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithContext:(unsigned long long)arg1 avatarViewDelegate:(id)arg2;
- (Class)itemClass;
- (void)prefetchForItem:(id)arg1 inCollectionView:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (void)viewControllerForTransaction:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 forcePreventHistory:(bool)arg4 completion:(id /* block */)arg5;

@end
