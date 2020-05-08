/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICBook : NSObject <NSSecureCoding> {
    NSURL * _artworkURL;
    NSString * _author;
    NSDate * _datePurchased;
    NSString * _genre;
    unsigned long long  _purchaseHistoryID;
    NSString * _redownloadParameters;
    unsigned long long  _storeID;
    NSString * _title;
    bool  _vppLicensed;
    NSString * _vppOrganizationDisplayName;
    NSString * _vppOrganizationID;
}

@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSDate *datePurchased;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic) unsigned long long purchaseHistoryID;
@property (nonatomic, copy) NSString *redownloadParameters;
@property (nonatomic) unsigned long long storeID;
@property (nonatomic, copy) NSString *title;
@property (getter=isVPPLicensed, nonatomic) bool vppLicensed;
@property (nonatomic, copy) NSString *vppOrganizationDisplayName;
@property (nonatomic, copy) NSString *vppOrganizationID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artworkURL;
- (id)author;
- (id)datePurchased;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)genre;
- (id)initWithCoder:(id)arg1;
- (bool)isVPPLicensed;
- (unsigned long long)purchaseHistoryID;
- (id)redownloadParameters;
- (void)setArtworkURL:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setDatePurchased:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setPurchaseHistoryID:(unsigned long long)arg1;
- (void)setRedownloadParameters:(id)arg1;
- (void)setStoreID:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setVppLicensed:(bool)arg1;
- (void)setVppOrganizationDisplayName:(id)arg1;
- (void)setVppOrganizationID:(id)arg1;
- (unsigned long long)storeID;
- (id)title;
- (id)vppOrganizationDisplayName;
- (id)vppOrganizationID;

@end
