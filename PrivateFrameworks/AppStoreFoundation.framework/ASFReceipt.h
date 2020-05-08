/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
 */

@interface ASFReceipt : NSObject {
    NSString * _bundleID;
    NSString * _bundleVersion;
    NSString * _cancellationReason;
    NSDate * _creationDate;
    NSString * _developerID;
    NSString * _downloadID;
    NSDate * _expirationDate;
    NSString * _frAppVersion;
    NSNumber * _frToolVersion;
    NSString * _hwtype;
    NSArray * _iaps;
    NSString * _installerVersionID;
    NSNumber * _itemID;
    NSMutableArray * _mutableIAPs;
    NSString * _opaqueDSIDString;
    NSString * _organizationDisplayName;
    NSString * _parentalControls;
    NSString * _path;
    NSDate * _purchaseDate;
    NSString * _receiptType;
    NSDate * _renewalDate;
    bool  _verbose;
}

@property (readonly) NSString *bundleID;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *cancellationReason;
@property (readonly) NSDate *creationDate;
@property (readonly) NSString *developerID;
@property (readonly) NSString *downloadID;
@property (readonly) NSDate *expirationDate;
@property (readonly) NSString *frAppVersion;
@property (readonly) NSNumber *frToolVersion;
@property (readonly) NSString *hwtype;
@property (readonly) NSArray *iaps;
@property (readonly) NSString *installerVersionID;
@property (readonly) bool isDSIDless;
@property (readonly) bool isRevoked;
@property (readonly) bool isVPPLicensed;
@property (readonly) NSNumber *itemID;
@property (readonly) NSString *opaqueDSIDString;
@property (readonly) NSString *organizationDisplayName;
@property (readonly) NSString *parentalControls;
@property (readonly) NSString *path;
@property (readonly) NSDate *purchaseDate;
@property (readonly) NSData *receiptData;
@property (readonly) NSString *receiptDataString;
@property (readonly) NSString *receiptType;
@property (readonly) NSDate *renewalDate;

+ (id)_receiptURLForBundleURL:(id)arg1;
+ (id)receiptFromBundleAtPath:(id)arg1;
+ (id)receiptFromBundleAtURL:(id)arg1;
+ (id)receiptWithContentsOfFile:(id)arg1;
+ (id)receiptWithData:(id)arg1;

- (void).cxx_destruct;
- (bool)_anchorTrust:(struct __SecTrust { }*)arg1 toRootCertificateIn:(struct __CFArray { }*)arg2;
- (bool)_checkArray:(struct __CFArray { }*)arg1 containsCertificateWithOID:(struct __CFString { }*)arg2;
- (bool)_checkIfCertificate:(struct __SecCertificate { }*)arg1 containsOID:(struct __CFString { }*)arg2;
- (struct __CFArray { }*)_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr { }*)arg1;
- (bool)_decodeIAPReceiptData:(id)arg1;
- (bool)_decodeReceiptData:(id)arg1 toDecodedMessage:(inout struct SecCmsMessageStr {}**)arg2;
- (struct SecCmsSignedDataStr { }*)_extractSignedDataFromMessage:(struct SecCmsMessageStr { }*)arg1;
- (void)_log:(id)arg1;
- (void)_log:(id)arg1 arg:(id)arg2;
- (void)_logError:(id)arg1;
- (id)_parseIAPTokens:(id)arg1;
- (id)_parseIAPsFromDataRef:(struct __CFData { }*)arg1;
- (bool)_parseReceiptFromMessage:(struct SecCmsMessageStr { }*)arg1;
- (void)_parseTokens:(id)arg1;
- (bool)_setPoliciesForTrust:(struct __SecTrust { }*)arg1;
- (long long)_verifySignatureForSignedData:(struct SecCmsSignedDataStr { }*)arg1 onDate:(id)arg2;
- (id)bundleID;
- (id)bundleVersion;
- (id)cancellationReason;
- (id)creationDate;
- (id)developerID;
- (id)downloadID;
- (id)expirationDate;
- (id)frAppVersion;
- (id)frToolVersion;
- (id)hwtype;
- (id)iaps;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)installerVersionID;
- (bool)isDSIDless;
- (bool)isRevoked;
- (bool)isVPPLicensed;
- (id)itemID;
- (id)opaqueDSIDString;
- (id)organizationDisplayName;
- (id)parentalControls;
- (id)path;
- (id)purchaseDate;
- (id)receiptData;
- (id)receiptDataString;
- (id)receiptType;
- (id)renewalDate;

@end
