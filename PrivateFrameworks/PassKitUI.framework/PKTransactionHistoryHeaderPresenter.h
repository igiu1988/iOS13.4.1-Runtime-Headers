/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKTransactionHistoryHeaderPresenter : NSObject <PKDashboardItemPresenter> {
    PKObjectDownloader * _fileDownloader;
    NSDateFormatter * _formatterMonth;
    UIImage * _heroImage;
    UIImage * _logoBackgroundImage;
    UIImage * _logoImage;
    UICollectionViewCell * _templateCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundImageFromLogoImage:(id)arg1;
- (void)_configureCategoryHeaderCell:(id)arg1 forITem:(id)arg2;
- (void)_configureInstallmentProductHeaderCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (void)_configureMerchantHeaderCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (void)_configurePeerPaymentHeaderCell:(id)arg1 forITem:(id)arg2;
- (void)_configureTransactionTypeHeaderCell:(id)arg1 forItem:(id)arg2;
- (id)_installmentProductHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)_merchantHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)_peerPaymentHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)_transactionGroupHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)_transactionTypeHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)_updateMerchantHeaderImagesOnCell:(id)arg1 item:(id)arg2;
- (bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (void)dealloc;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)init;
- (Class)itemClass;
- (struct CGSize { double x1; double x2; })sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;

@end
