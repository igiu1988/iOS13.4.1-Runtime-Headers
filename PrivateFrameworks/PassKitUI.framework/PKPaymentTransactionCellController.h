/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionCellController : NSObject {
    PKPeerPaymentContactResolver * _contactResolver;
    PKObjectDownloader * _fileDownloader;
    NSMutableOrderedSet * _highPriorityIconRequests;
    NSMutableDictionary * _iconCache;
    NSMutableArray * _iconCacheKeys;
    NSMutableArray * _inflightRequests;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockRequests;
    NSMutableOrderedSet * _lowPriorityIconRequests;
    bool  _processingRequest;
    NSObject<OS_dispatch_queue> * _queueIcons;
}

@property (nonatomic, readonly) PKPeerPaymentContactResolver *contactResolver;

+ (id)_billPaymentFundingSourceForTransaction:(id)arg1;
+ (id)_relativeDateForTransaction:(id)arg1;
+ (id)_statusAnnotationForTransaction:(id)arg1;
+ (id)presentationInformationForTransaction:(id)arg1 pass:(id)arg2 account:(id)arg3 deviceName:(id)arg4 context:(unsigned long long)arg5;
+ (id)secondaryFundingSourceDescriptionForTransaction:(id)arg1 includeBankAccountSuffix:(bool)arg2 useGenericNameIfNoDescriptionAvailable:(bool)arg3;

- (void).cxx_destruct;
- (id)_cacheImageFromDownloaderCacheForURL:(id)arg1;
- (id)_iconCacheKeyForMerchant:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 imageOut:(id*)arg3;
- (id)_iconCacheKeyForPaymentTransaction:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 imageOut:(id*)arg3;
- (id)_iconForCacheKey:(id)arg1;
- (id)_iconForTransaction:(id)arg1 merchant:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 requestType:(unsigned long long)arg4 iconHandler:(id /* block */)arg5;
- (void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3;
- (void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3;
- (void)configureCell:(id)arg1 forTransaction:(id)arg2 paymentPass:(id)arg3 account:(id)arg4 detailStyle:(long long)arg5 deviceName:(id)arg6 avatarViewDelegate:(id)arg7;
- (id)contactResolver;
- (id)fileDownloader;
- (id)iconForMerchant:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 requestType:(unsigned long long)arg3 iconHandler:(id /* block */)arg4;
- (id)iconForTransaction:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 requestType:(unsigned long long)arg3 iconHandler:(id /* block */)arg4;
- (id)initWithContactResolver:(id)arg1;
- (void)queue_processNextIconRequest;

@end