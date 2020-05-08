/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    struct MTLTileRenderPipelineDescriptorPrivate { 
        MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; 
        union { 
            unsigned long long sampleCount; 
            unsigned long long rasterSampleCount; 
        } ; 
        NSString *label; 
        <MTLFunction> *tileFunction; 
        bool threadgroupSizeMatchesTileSize; 
        unsigned long long paddingToRemove; 
        unsigned long long colorSampleCount; 
        MTLPipelineBufferDescriptorArrayInternal *tileBuffers; 
        unsigned short maxTotalThreadsPerThreadgroup; 
    }  _private;
}

- (const struct MTLTileRenderPipelineDescriptorPrivate { id x1; union { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; id x3; id x4; bool x5; unsigned long long x6; unsigned long long x7; id x8; unsigned short x9; }*)_descriptorPrivate;
- (id)colorAttachments;
- (unsigned long long)colorSampleCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (unsigned long long)rasterSampleCount;
- (void)reset;
- (unsigned long long)sampleCount;
- (void)setColorSampleCount:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;
- (void)setRasterSampleCount:(unsigned long long)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setThreadgroupSizeMatchesTileSize:(bool)arg1;
- (void)setTileFunction:(id)arg1;
- (bool)threadgroupSizeMatchesTileSize;
- (id)tileBuffers;
- (id)tileFunction;
- (void)validateWithDevice:(id)arg1;

@end
