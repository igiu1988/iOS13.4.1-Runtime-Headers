/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoBitmap : PBCodable <NSCopying> {
    NSData * _bitmapData;
    unsigned int  _bitmapInfo;
    unsigned long long  _bitsPerComponent;
    unsigned long long  _bitsPerPixel;
    unsigned long long  _bytesPerRow;
    unsigned long long  _height;
    unsigned long long  _width;
}

@property (nonatomic, retain) NSData *bitmapData;
@property (nonatomic) unsigned int bitmapInfo;
@property (nonatomic) unsigned long long bitsPerComponent;
@property (nonatomic) unsigned long long bitsPerPixel;
@property (nonatomic) unsigned long long bytesPerRow;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long width;

- (void).cxx_destruct;
- (id)bitmapData;
- (unsigned int)bitmapInfo;
- (unsigned long long)bitsPerComponent;
- (unsigned long long)bitsPerPixel;
- (unsigned long long)bytesPerRow;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned long long)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBitmapData:(id)arg1;
- (void)setBitmapInfo:(unsigned int)arg1;
- (void)setBitsPerComponent:(unsigned long long)arg1;
- (void)setBitsPerPixel:(unsigned long long)arg1;
- (void)setBytesPerRow:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;
- (void)writeTo:(id)arg1;

@end
