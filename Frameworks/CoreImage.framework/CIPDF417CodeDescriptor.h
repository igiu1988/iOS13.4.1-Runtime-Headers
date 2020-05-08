/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPDF417CodeDescriptor : CIBarcodeDescriptor {
    long long  columnCount;
    NSData * errorCorrectedPayload;
    bool  isCompact;
    long long  rowCount;
}

@property (readonly) long long columnCount;
@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) bool isCompact;
@property (readonly) long long rowCount;

+ (id)descriptorWithPayload:(id)arg1 isCompact:(bool)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4;
+ (bool)supportsSecureCoding;

- (long long)columnCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)errorCorrectedPayload;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 isCompact:(bool)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4;
- (bool)isCompact;
- (bool)isValid;
- (long long)rowCount;

@end
