/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
 */

@interface DDSAsset : NSObject {
    ASAsset * _asAsset;
    NSDictionary * _attributes;
    long long  _compatibilityVersion;
    NSURL * _localURL;
    MAAsset * _maAsset;
}

@property (nonatomic, retain) ASAsset *asAsset;
@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic, readonly) long long compatibilityVersion;
@property (nonatomic, readonly) NSString *debuggingID;
@property (nonatomic, retain) NSURL *localURL;
@property (nonatomic, retain) MAAsset *maAsset;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)asset;
+ (id)assetWithASAsset:(id)arg1;
+ (id)assetWithMAAsset:(id)arg1;
+ (id)debuggingIDsForAssets:(id)arg1;
+ (id)uniqueIdentifierForASAsset:(id)arg1;
+ (id)uniqueIdentifierForMAAsset:(id)arg1;

- (void).cxx_destruct;
- (void)_mergeAttributes:(id)arg1;
- (id)asAsset;
- (id)attributes;
- (long long)compatibilityVersion;
- (id)debuggingID;
- (id)init;
- (id)localURL;
- (id)maAsset;
- (void)setAsAsset:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setLocalURL:(id)arg1;
- (void)setMaAsset:(id)arg1;
- (void)setasAsset:(id)arg1;
- (id)uniqueIdentifier;

@end
