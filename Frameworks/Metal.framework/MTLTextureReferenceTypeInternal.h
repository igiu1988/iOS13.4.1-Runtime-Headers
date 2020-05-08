/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType {
    unsigned long long  _access;
    unsigned long long  _dataType;
    bool  _isDepthTexture;
    unsigned long long  _textureDataType;
    unsigned long long  _textureType;
}

- (unsigned long long)access;
- (unsigned long long)dataType;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDataType:(unsigned long long)arg1 textureType:(unsigned long long)arg2 access:(unsigned long long)arg3 isDepthTexture:(bool)arg4;
- (bool)isDepthTexture;
- (unsigned long long)textureDataType;
- (unsigned long long)textureType;

@end
