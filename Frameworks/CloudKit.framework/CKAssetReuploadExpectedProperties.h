/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAssetReuploadExpectedProperties : NSObject <NSCopying, NSSecureCoding> {
    NSData * _assetKey;
    NSData * _fileSignature;
    NSData * _referenceSignature;
}

@property (nonatomic, copy) NSData *assetKey;
@property (nonatomic, copy) NSData *fileSignature;
@property (nonatomic, copy) NSData *referenceSignature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)assetKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileSignature;
- (id)initWithCoder:(id)arg1;
- (id)referenceSignature;
- (void)setAssetKey:(id)arg1;
- (void)setFileSignature:(id)arg1;
- (void)setReferenceSignature:(id)arg1;

@end
