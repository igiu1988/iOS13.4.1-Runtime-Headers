/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKTextureLoaderMDL : MTKTextureLoaderData {
    struct MTLPixelFormatInfo { 
        char *name; 
        unsigned int flags; 
        unsigned long long castClass; 
        union { 
            struct MTLNormalPixelFormatInfo { 
                unsigned long long pixelBytes; 
                unsigned char componentCount; 
                unsigned char alignment; 
                unsigned long long pixelBytesRender; 
                unsigned long long pixelBytesRenderMSAA; 
            } normal; 
            struct MTLCompressedPixelFormatInfo { 
                unsigned long long blockBytes; 
                unsigned long long blockWidth; 
                unsigned long long blockHeight; 
                unsigned long long blockDepth; 
            } compressed; 
        } type; 
    }  _pixelFormatInfo;
    MDLTexture * _texture;
}

- (void)dealloc;
- (bool)determineFormatFromChannelEncoding:(long long)arg1 channelCount:(unsigned long long)arg2 error:(id*)arg3;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6;
- (id)initWithMDLTexture:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
