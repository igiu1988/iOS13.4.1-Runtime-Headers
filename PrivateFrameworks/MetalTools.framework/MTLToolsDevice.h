/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsDevice : MTLToolsObject <MTLDeviceSPI> {
    MTLToolsPointerArray * _argumentEncoders;
    MTLToolsPointerArray * _buffers;
    MTLToolsPointerArray * _commandQueues;
    MTLToolsPointerArray * _computePipelineStates;
    MTLToolsPointerArray * _depthStencilStates;
    <MTLDeviceSPI> * _deviceWrapper;
    MTLToolsPointerArray * _events;
    MTLToolsPointerArray * _fences;
    MTLToolsPointerArray * _functions;
    MTLToolsPointerArray * _heaps;
    MTLToolsPointerArray * _indirectArgumentEncoders;
    MTLToolsPointerArray * _indirectCommandBuffers;
    bool  _integrated;
    MTLToolsPointerArray * _libraries;
    unsigned long long  _memorySize;
    MTLToolsPointerArray * _pipelineLibraries;
    MTLToolsPointerArray * _pipelineStates;
    MTLToolsPointerArray * _rasterizationRateMaps;
    MTLToolsPointerArray * _resourceGroups;
    MTLToolsPointerArray * _samplers;
    MTLToolsPointerArray * _textureLayouts;
    MTLToolsPointerArray * _textures;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned long long argumentBuffersSupport;
@property (nonatomic, readonly) MTLToolsPointerArray *argumentEncoders;
@property (nonatomic, readonly) MTLToolsPointerArray *buffers;
@property (nonatomic, readonly) MTLToolsPointerArray *commandQueues;
@property (nonatomic, readonly) MTLToolsPointerArray *computePipelineStates;
@property (readonly) unsigned long long currentAllocatedSize;
@property unsigned long long currentUtilityBufferIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long dedicatedMemorySize;
@property (getter=isDepth24Stencil8PixelFormatSupported, readonly) bool depth24Stencil8PixelFormatSupported;
@property (nonatomic, readonly) MTLToolsPointerArray *depthStencilStates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property (readonly) unsigned long long doubleFPConfig;
@property (nonatomic, readonly) MTLToolsPointerArray *events;
@property (readonly) unsigned long long featureProfile;
@property (nonatomic, readonly) MTLToolsPointerArray *fences;
@property (nonatomic, readonly) MTLToolsPointerArray *functions;
@property (getter=areGPUAssertionsEnabled, setter=setGPUAssertionsEnabled:) bool gpuAssertionsEnabled;
@property (readonly) unsigned long long halfFPConfig;
@property (readonly) bool hasUnifiedMemory;
@property (readonly) unsigned long long hash;
@property (getter=isHeadless, readonly) bool headless;
@property (nonatomic, readonly) MTLToolsPointerArray *heaps;
@property (readonly) struct IndirectArgumentBufferCapabilities { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 29; } indirectArgumentBufferCapabilities;
@property (nonatomic, readonly) MTLToolsPointerArray *indirectArgumentEncoders;
@property (nonatomic, readonly) MTLToolsPointerArray *indirectCommandBuffers;
@property (getter=isIntegrated, readonly) bool integrated;
@property (readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property (nonatomic, readonly) MTLToolsPointerArray *libraries;
@property (readonly) const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; unsigned int x57; unsigned int x58; unsigned int x59; }*limits;
@property (readonly) unsigned long long linearTextureAlignmentBytes;
@property (readonly) unsigned long long linearTextureArrayAlignmentBytes;
@property (readonly) unsigned long long linearTextureArrayAlignmentSlice;
@property (getter=isLowPower, readonly) bool lowPower;
@property (readonly) unsigned long long maxArgumentBufferSamplerCount;
@property (readonly) unsigned long long maxBufferLength;
@property (readonly) unsigned long long maxColorAttachments;
@property (readonly) unsigned long long maxComputeAttributes;
@property (readonly) unsigned long long maxComputeBuffers;
@property (readonly) unsigned long long maxComputeInlineDataSize;
@property (readonly) unsigned long long maxComputeLocalMemorySizes;
@property (readonly) unsigned long long maxComputeSamplers;
@property (readonly) unsigned long long maxComputeTextures;
@property (readonly) unsigned long long maxComputeThreadgroupMemory;
@property (readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property (readonly) unsigned long long maxCustomSamplePositions;
@property (readonly) unsigned long long maxFragmentBuffers;
@property (readonly) unsigned long long maxFragmentInlineDataSize;
@property (readonly) unsigned long long maxFragmentSamplers;
@property (readonly) unsigned long long maxFragmentTextures;
@property (readonly) unsigned long long maxFramebufferStorageBits;
@property (readonly) unsigned long long maxFunctionConstantIndices;
@property (readonly) unsigned long long maxIndirectBuffers;
@property (readonly) unsigned long long maxIndirectSamplers;
@property (readonly) unsigned long long maxIndirectSamplersPerDevice;
@property (readonly) unsigned long long maxIndirectTextures;
@property (readonly) unsigned long long maxInterpolants;
@property (readonly) unsigned long long maxInterpolatedComponents;
@property (readonly) float maxLineWidth;
@property (readonly) float maxPointSize;
@property (readonly) unsigned long long maxRasterizationRateLayerCount;
@property (readonly) unsigned long long maxTessellationFactor;
@property (readonly) unsigned long long maxTextureBufferWidth;
@property (readonly) unsigned long long maxTextureDepth3D;
@property (readonly) unsigned long long maxTextureDimensionCube;
@property (readonly) unsigned long long maxTextureHeight2D;
@property (readonly) unsigned long long maxTextureHeight3D;
@property (readonly) unsigned long long maxTextureLayers;
@property (readonly) unsigned long long maxTextureWidth1D;
@property (readonly) unsigned long long maxTextureWidth2D;
@property (readonly) unsigned long long maxTextureWidth3D;
@property (readonly) unsigned long long maxThreadgroupMemoryLength;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } maxThreadsPerThreadgroup;
@property (readonly) unsigned long long maxTileBuffers;
@property (readonly) unsigned long long maxTileInlineDataSize;
@property (readonly) unsigned long long maxTileSamplers;
@property (readonly) unsigned long long maxTileTextures;
@property (readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property (readonly) unsigned long long maxVertexAmplificationCount;
@property (readonly) unsigned long long maxVertexAmplificationFactor;
@property (readonly) unsigned long long maxVertexAttributes;
@property (readonly) unsigned long long maxVertexBuffers;
@property (readonly) unsigned long long maxVertexInlineDataSize;
@property (readonly) unsigned long long maxVertexSamplers;
@property (readonly) unsigned long long maxVertexTextures;
@property (readonly) unsigned long long maxViewportCount;
@property (readonly) unsigned long long maxVisibilityQueryOffset;
@property (readonly) unsigned long long memorySize;
@property (nonatomic) bool metalAssertionsEnabled;
@property (readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property (readonly) unsigned long long minConstantBufferAlignmentBytes;
@property (readonly) unsigned long long minTilePixels;
@property (readonly) NSString *name;
@property (nonatomic, readonly) MTLToolsPointerArray *pipelineLibraries;
@property (nonatomic, readonly) MTLToolsPointerArray *pipelineStates;
@property (getter=isPlacementHeapSupported, readonly) bool placementHeapSupported;
@property (getter=areProgrammableSamplePositionsSupported, readonly) bool programmableSamplePositionsSupported;
@property (getter=isQuadDataSharingSupported, readonly) bool quadDataSharingSupported;
@property (getter=areRasterOrderGroupsSupported, readonly) bool rasterOrderGroupsSupported;
@property (nonatomic, readonly) MTLToolsPointerArray *rasterizationRateMaps;
@property (readonly) unsigned long long readWriteTextureSupport;
@property (readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (readonly) unsigned long long registryID;
@property (getter=isRemovable, readonly) bool removable;
@property (nonatomic, readonly) MTLToolsPointerArray *resourceGroups;
@property (getter=isResourceIndirectionEnabled, nonatomic) bool resourceIndirectionEnabled;
@property (nonatomic, readonly) MTLToolsPointerArray *samplers;
@property bool shaderDebugInfoCaching;
@property (readonly) unsigned long long sharedMemorySize;
@property (readonly) unsigned long long singleFPConfig;
@property (readonly) unsigned long long sparseTexturesSupport;
@property (readonly) unsigned long long sparseTileSizeInBytes;
@property (readonly) Class superclass;
@property (readonly) bool supportPriorityBand;
@property (nonatomic, readonly) bool supports2DLinearTexArraySPI;
@property (nonatomic, readonly) bool supports32bpcMSAATextures;
@property (nonatomic, readonly) bool supports3DASTCTextures;
@property (nonatomic, readonly) bool supports3DBCTextures;
@property (nonatomic, readonly) bool supportsASTCHDRTextureCompression;
@property (nonatomic, readonly) bool supportsASTCTextureCompression;
@property (nonatomic, readonly) bool supportsAlphaYUVFormats;
@property (nonatomic, readonly) bool supportsArgumentBuffersTier2;
@property (nonatomic, readonly) bool supportsArrayOfSamplers;
@property (nonatomic, readonly) bool supportsArrayOfTextures;
@property (nonatomic, readonly) bool supportsBCTextureCompression;
@property (nonatomic, readonly) bool supportsBaseVertexInstanceDrawing;
@property (nonatomic, readonly) bool supportsBlackOrWhiteSamplerBorderColors;
@property (nonatomic, readonly) bool supportsBufferWithIOSurface;
@property (nonatomic, readonly) bool supportsBufferlessClientStorageTexture;
@property (nonatomic, readonly) bool supportsCMPIndirectCommandBuffers;
@property (nonatomic, readonly) bool supportsCombinedMSAAStoreAndResolveAction;
@property (nonatomic, readonly) bool supportsConcurrentComputeDispatch;
@property (nonatomic, readonly) bool supportsCountingOcclusionQuery;
@property (nonatomic, readonly) bool supportsCustomBorderColor;
@property (nonatomic, readonly) bool supportsDepthClipMode;
@property (nonatomic, readonly) bool supportsDepthClipModeClampExtended;
@property (nonatomic, readonly) bool supportsExtendedXR10Formats;
@property (nonatomic, readonly) bool supportsExtendedYUVFormats;
@property (nonatomic, readonly) bool supportsFP32TessFactors;
@property (nonatomic, readonly) bool supportsFastMathInfNaNPropagation;
@property (nonatomic, readonly) bool supportsFloat16BCubicFiltering;
@property (nonatomic, readonly) bool supportsForceSeamsOnCubemaps;
@property (nonatomic, readonly) bool supportsFragmentBufferWrites;
@property (nonatomic, readonly) bool supportsFragmentOnlyEncoders;
@property (nonatomic, readonly) bool supportsGFXIndirectCommandBuffers;
@property (nonatomic, readonly) bool supportsGPUStatistics;
@property (nonatomic, readonly) bool supportsImageBlockSampleCoverageControl;
@property (nonatomic, readonly) bool supportsImageBlocks;
@property (nonatomic, readonly) bool supportsIndirectDrawAndDispatch;
@property (nonatomic, readonly) bool supportsIndirectStageInRegion;
@property (nonatomic, readonly) bool supportsIndirectTessellation;
@property (nonatomic, readonly) bool supportsIndirectTextures;
@property (nonatomic, readonly) bool supportsInvariantVertexPosition;
@property (nonatomic, readonly) bool supportsLargeFramebufferConfigs;
@property (nonatomic, readonly) bool supportsLayeredRendering;
@property (nonatomic, readonly) bool supportsLimitedYUVFormats;
@property (nonatomic, readonly) bool supportsLinearTexture2DArray;
@property (nonatomic, readonly) bool supportsLinearTextureFromSharedBuffer;
@property (nonatomic, readonly) bool supportsMSAADepthResolve;
@property (nonatomic, readonly) bool supportsMSAADepthResolveFilter;
@property (nonatomic, readonly) bool supportsMSAAStencilResolve;
@property (nonatomic, readonly) bool supportsMSAAStencilResolveFilter;
@property (nonatomic, readonly) bool supportsMemoryOrderAtomics;
@property (nonatomic, readonly) bool supportsMemorylessRenderTargets;
@property (nonatomic, readonly) bool supportsMipLevelsSmallerThanBlockSize;
@property (nonatomic, readonly) bool supportsMirrorClampToEdgeSamplerMode;
@property (nonatomic, readonly) bool supportsMutableTier1ArgumentBuffers;
@property (nonatomic, readonly) bool supportsNativeHardwareFP16;
@property (nonatomic, readonly) bool supportsNonPrivateDepthStencilTextures;
@property (nonatomic, readonly) bool supportsNonPrivateMSAATextures;
@property (nonatomic, readonly) bool supportsNonSquareTileShaders;
@property (nonatomic, readonly) bool supportsNonUniformThreadgroupSize;
@property (nonatomic, readonly) bool supportsNorm16BCubicFiltering;
@property (nonatomic, readonly) bool supportsOpenCLTextureWriteSwizzles;
@property (nonatomic, readonly) bool supportsPacked32TextureBufferWrites;
@property (nonatomic, readonly) bool supportsPipelineLibraries;
@property (nonatomic, readonly) bool supportsPlacementHeaps;
@property (nonatomic, readonly) bool supportsPostDepthCoverage;
@property (nonatomic, readonly) bool supportsProgrammableBlending;
@property (nonatomic, readonly) bool supportsProgrammableSamplePositions;
@property (nonatomic, readonly) bool supportsPublicXR10Formats;
@property (nonatomic, readonly) bool supportsQuadGroup;
@property (nonatomic, readonly) bool supportsQuadReduction;
@property (nonatomic, readonly) bool supportsQuadShufflesAndBroadcast;
@property (nonatomic, readonly) bool supportsRasterOrderGroups;
@property (nonatomic, readonly) bool supportsReadWriteBufferArguments;
@property (nonatomic, readonly) bool supportsReadWriteTextureArguments;
@property (nonatomic, readonly) bool supportsReadWriteTextureArgumentsTier2;
@property (nonatomic, readonly) bool supportsReadWriteTextureCubeArguments;
@property (nonatomic, readonly) bool supportsRelaxedTextureViewRequirements;
@property (nonatomic, readonly) bool supportsRenderPassWithoutRenderTarget;
@property (nonatomic, readonly) bool supportsRenderTextureWrites;
@property (nonatomic, readonly) bool supportsRenderToLinearTextures;
@property (nonatomic, readonly) bool supportsSIMDGroup;
@property (nonatomic, readonly) bool supportsSIMDReduction;
@property (nonatomic, readonly) bool supportsSIMDShufflesAndBroadcast;
@property (nonatomic, readonly) bool supportsSRGBwrites;
@property (nonatomic, readonly) bool supportsSamplerAddressModeClampToHalfBorder;
@property (nonatomic, readonly) bool supportsSamplerCompareFunction;
@property (nonatomic, readonly) bool supportsSeparateDepthStencil;
@property (nonatomic, readonly) bool supportsSeparateVisibilityAndShadingRate;
@property (nonatomic, readonly) bool supportsShaderLODAverage;
@property (nonatomic, readonly) bool supportsShaderMinLODClamp;
@property (nonatomic, readonly) bool supportsSparseTextures;
@property (nonatomic, readonly) bool supportsStencilFeedback;
@property (nonatomic, readonly) bool supportsTessellation;
@property (nonatomic, readonly) bool supportsTexture2DMultisampleArray;
@property (nonatomic, readonly) bool supportsTextureCubeArray;
@property (nonatomic, readonly) bool supportsTextureOutOfBoundsReads;
@property (nonatomic, readonly) bool supportsTextureSwizzle;
@property (nonatomic, readonly) bool supportsTileShaders;
@property (nonatomic, readonly) bool supportsVariableRateRasterization;
@property (nonatomic, readonly) bool supportsVertexAmplification;
@property (nonatomic, readonly) bool supportsViewportAndScissorArray;
@property (nonatomic, readonly) bool supportsYCBCRFormats;
@property (nonatomic, readonly) bool supportsYCBCRFormats12;
@property (nonatomic, readonly) bool supportsYCBCRFormatsPQ;
@property (nonatomic, readonly) bool supportsYCBCRFormatsXR;
@property (readonly) const struct MTLTargetDeviceArch { unsigned int x1; unsigned int x2; char *x3; }*targetDeviceInfo;
@property (nonatomic, readonly) MTLToolsPointerArray *textureLayouts;
@property (nonatomic, readonly) MTLToolsPointerArray *textures;
@property (getter=isUtilityBufferRequired, readonly) bool utilityBufferRequired;
@property (nonatomic, retain) NSArray *utilityBuffers;

+ (id)newTextureDescriptorFromIOSurface:(struct __IOSurface { }*)arg1;
+ (id)newTextureDescriptorFromIOSurfaceProperties:(id)arg1;
+ (void)registerDevices;

- (void).cxx_destruct;
- (id)_deviceWrapper;
- (void)_setDeviceWrapper:(id)arg1;
- (unsigned int)acceleratorPort;
- (void)acceptVisitor:(id)arg1;
- (void)addBufferToGlobalResourceTable:(id)arg1;
- (void)addComputePipelineStateToGlobalResourceTable:(id)arg1;
- (void)addIndirectCommandBufferToGlobalResourceTable:(id)arg1;
- (void)addRenderPipelineStateToGlobalResourceTable:(id)arg1;
- (void)addSamplerStateToGlobalResourceTable:(id)arg1;
- (void)addTextureToGlobalResourceTable:(id)arg1;
- (void)allowLibrariesFromOtherPlatforms;
- (bool)areGPUAssertionsEnabled;
- (bool)areProgrammableSamplePositionsSupported;
- (bool)areRasterOrderGroupsSupported;
- (unsigned long long)argumentBuffersSupport;
- (id)argumentEncoders;
- (id)buffers;
- (id)commandQueues;
- (void)compilerPropagatesThreadPriority:(bool)arg1;
- (id)computePipelineStates;
- (void)convertSparsePixelRegions:(const struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; }*)arg1 toTileRegions:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; }*)arg2 withTileSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 alignmentMode:(unsigned long long)arg4 numRegions:(unsigned long long)arg5;
- (void)convertSparseTileRegions:(const struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; }*)arg1 toPixelRegions:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; }*)arg2 withTileSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 numRegions:(unsigned long long)arg4;
- (id)copyIOSurfaceSharedTextureProperties:(id)arg1;
- (bool)copyShaderCacheToPath:(id)arg1;
- (unsigned long long)createNewUtilityBuffer;
- (unsigned long long)currentAllocatedSize;
- (unsigned long long)currentUtilityBufferIndex;
- (void)dealloc;
- (unsigned long long)dedicatedMemorySize;
- (id)depthStencilStates;
- (unsigned long long)deviceLinearReadOnlyTextureAlignmentBytes;
- (unsigned long long)deviceLinearTextureAlignmentBytes;
- (bool)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;
- (bool)deviceSupportsFeatureSet:(unsigned long long)arg1;
- (unsigned long long)doubleFPConfig;
- (id)endCollectingPipelineDescriptors;
- (void)eventSignaled:(id)arg1 value:(unsigned long long)arg2;
- (id)events;
- (id)familyName;
- (unsigned long long)featureProfile;
- (id)fences;
- (id)functions;
- (void)getDefaultSamplePositions:(struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (void*)getShaderCacheKeys;
- (unsigned long long)halfFPConfig;
- (bool)hasUnifiedMemory;
- (struct { unsigned long long x1; unsigned long long x2; })heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (id)heaps;
- (struct IndirectArgumentBufferCapabilities { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 29; })indirectArgumentBufferCapabilities;
- (id)indirectArgumentEncoders;
- (unsigned long long)indirectBufferAddressForResourceIndex:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (id)indirectCommandBuffers;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(struct ILayerLockingPolicy { int (**x1)(); }*)arg3;
- (unsigned long long)iosurfaceReadOnlyTextureAlignmentBytes;
- (unsigned long long)iosurfaceTextureAlignmentBytes;
- (bool)isDepth24Stencil8PixelFormatSupported;
- (bool)isHeadless;
- (bool)isIntegrated;
- (bool)isLowPower;
- (bool)isPlacementHeapSupported;
- (bool)isQuadDataSharingSupported;
- (bool)isRemovable;
- (bool)isResourceIndirectionEnabled;
- (bool)isUtilityBufferRequired;
- (id)libraries;
- (struct { unsigned int x1; unsigned int x2; })libraryCacheStats;
- (const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; unsigned int x57; unsigned int x58; unsigned int x59; }*)limits;
- (unsigned long long)linearTextureAlignmentBytes;
- (unsigned long long)linearTextureArrayAlignmentBytes;
- (unsigned long long)linearTextureArrayAlignmentSlice;
- (bool)mapShaderSampleBufferWithBuffer:(struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (unsigned long long)maxArgumentBufferSamplerCount;
- (unsigned long long)maxBufferLength;
- (unsigned long long)maxColorAttachments;
- (unsigned long long)maxComputeAttributes;
- (unsigned long long)maxComputeBuffers;
- (unsigned long long)maxComputeInlineDataSize;
- (unsigned long long)maxComputeLocalMemorySizes;
- (unsigned long long)maxComputeSamplers;
- (unsigned long long)maxComputeTextures;
- (unsigned long long)maxComputeThreadgroupMemory;
- (unsigned long long)maxComputeThreadgroupMemoryAlignmentBytes;
- (unsigned long long)maxCustomSamplePositions;
- (unsigned long long)maxFragmentBuffers;
- (unsigned long long)maxFragmentInlineDataSize;
- (unsigned long long)maxFragmentSamplers;
- (unsigned long long)maxFragmentTextures;
- (unsigned long long)maxFramebufferStorageBits;
- (unsigned long long)maxFunctionConstantIndices;
- (unsigned long long)maxIndirectBuffers;
- (unsigned long long)maxIndirectSamplers;
- (unsigned long long)maxIndirectSamplersPerDevice;
- (unsigned long long)maxIndirectTextures;
- (unsigned long long)maxInterpolants;
- (unsigned long long)maxInterpolatedComponents;
- (float)maxLineWidth;
- (float)maxPointSize;
- (unsigned long long)maxRasterizationRateLayerCount;
- (unsigned long long)maxTessellationFactor;
- (unsigned long long)maxTextureBufferWidth;
- (unsigned long long)maxTextureDepth3D;
- (unsigned long long)maxTextureDimensionCube;
- (unsigned long long)maxTextureHeight2D;
- (unsigned long long)maxTextureHeight3D;
- (unsigned long long)maxTextureLayers;
- (unsigned long long)maxTextureWidth1D;
- (unsigned long long)maxTextureWidth2D;
- (unsigned long long)maxTextureWidth3D;
- (unsigned long long)maxThreadgroupMemoryLength;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })maxThreadsPerThreadgroup;
- (unsigned long long)maxTileBuffers;
- (unsigned long long)maxTileInlineDataSize;
- (unsigned long long)maxTileSamplers;
- (unsigned long long)maxTileTextures;
- (unsigned long long)maxTotalComputeThreadsPerThreadgroup;
- (unsigned long long)maxVertexAmplificationCount;
- (unsigned long long)maxVertexAmplificationFactor;
- (unsigned long long)maxVertexAttributes;
- (unsigned long long)maxVertexBuffers;
- (unsigned long long)maxVertexInlineDataSize;
- (unsigned long long)maxVertexSamplers;
- (unsigned long long)maxVertexTextures;
- (unsigned long long)maxViewportCount;
- (unsigned long long)maxVisibilityQueryOffset;
- (unsigned long long)memorySize;
- (bool)metalAssertionsEnabled;
- (unsigned long long)minBufferNoCopyAlignmentBytes;
- (unsigned long long)minConstantBufferAlignmentBytes;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minTilePixels;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)arg1;
- (id)name;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 atResourceIndex:(unsigned long long)arg4;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 atResourceIndex:(unsigned long long)arg4 deallocator:(id /* block */)arg5;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(id /* block */)arg4;
- (id)newBufferWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 atResourceIndex:(unsigned long long)arg3;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id)newComputePipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newEvent;
- (id)newFence;
- (id)newFunctionWithGLIR:(void*)arg1 functionType:(unsigned long long)arg2;
- (id)newFunctionWithGLIR:(void*)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1;
- (id)newIndirectArgumentEncoderWithLayout:(id)arg1;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newIndirectComputeCommandEncoderWithBuffer:(id)arg1;
- (id)newIndirectRenderCommandEncoderWithBuffer:(id)arg1;
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newLibraryWithCIFiltersForComputePipeline:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithURL:(id)arg1 error:(id*)arg2;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id*)arg2;
- (id)newRasterizationRateMapWithDescriptor:(id)arg1;
- (id)newRenderPipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newResourceGroupFromResources:(const id*)arg1 count:(unsigned long long)arg2;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newSharedEvent;
- (id)newSharedEventWithHandle:(id)arg1;
- (id)newSharedEventWithMachPort:(unsigned int)arg1;
- (id)newSharedTextureWithDescriptor:(id)arg1;
- (id)newSharedTextureWithHandle:(id)arg1;
- (id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(bool)arg2;
- (id)newTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(id /* block */)arg4;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;
- (unsigned long long)offsetFromIndirectBufferAddress:(unsigned long long)arg1;
- (struct { unsigned int x1; unsigned int x2; })pipelineCacheStats;
- (id)pipelineLibraries;
- (id)pipelineStates;
- (id)productName;
- (id)rasterizationRateMaps;
- (unsigned long long)readWriteTextureSupport;
- (unsigned long long)recommendedMaxWorkingSetSize;
- (unsigned long long)registryID;
- (void)removeResourceFromGlobalResourceTable:(unsigned long long)arg1 resourceType:(unsigned long long)arg2;
- (bool)requiresIndirectionForAllResourceTypes;
- (void)reserveResourceIndicesForResourceType:(unsigned long long)arg1 indices:(unsigned long long*)arg2 indexCount:(unsigned long long)arg3;
- (id)resourceGroups;
- (unsigned long long)resourceIndexFromIndirectBufferAddress:(unsigned long long)arg1;
- (unsigned long long)resourcePatchingTypeForResourceType:(unsigned long long)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)samplers;
- (id)serializeRenderPipelineDescriptor:(id)arg1;
- (id)serializeStructType:(id)arg1;
- (void)setCurrentUtilityBufferIndex:(unsigned long long)arg1;
- (void)setGPUAssertionsEnabled:(bool)arg1;
- (void)setMetalAssertionsEnabled:(bool)arg1;
- (void)setResourceIndirectionEnabled:(bool)arg1;
- (bool)setResourcesPurgeableState:(id*)arg1 newState:(unsigned long long)arg2 oldState:(unsigned long long*)arg3 count:(int)arg4;
- (void)setShaderDebugInfoCaching:(bool)arg1;
- (void)setUtilityBuffers:(id)arg1;
- (void)setupMPSFunctionTable:(struct MPSFunctionTable { }*)arg1;
- (bool)shaderDebugInfoCaching;
- (unsigned long long)sharedMemorySize;
- (unsigned long long)singleFPConfig;
- (unsigned long long)sparseTexturesSupport;
- (unsigned long long)sparseTileSizeInBytes;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })sparseTileSizeWithTextureType:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3;
- (void)startCollectingPipelineDescriptors;
- (bool)supportPriorityBand;
- (bool)supports2DLinearTexArraySPI;
- (bool)supports32bpcMSAATextures;
- (bool)supports3DASTCTextures;
- (bool)supports3DBCTextures;
- (bool)supportsASTCHDRTextureCompression;
- (bool)supportsASTCTextureCompression;
- (bool)supportsAlphaYUVFormats;
- (bool)supportsArgumentBuffersTier2;
- (bool)supportsArrayOfSamplers;
- (bool)supportsArrayOfTextures;
- (bool)supportsBCTextureCompression;
- (bool)supportsBaseVertexInstanceDrawing;
- (bool)supportsBlackOrWhiteSamplerBorderColors;
- (bool)supportsBufferWithIOSurface;
- (bool)supportsBufferlessClientStorageTexture;
- (bool)supportsCMPIndirectCommandBuffers;
- (bool)supportsCombinedMSAAStoreAndResolveAction;
- (bool)supportsConcurrentComputeDispatch;
- (bool)supportsCountingOcclusionQuery;
- (bool)supportsCustomBorderColor;
- (bool)supportsDepthClipMode;
- (bool)supportsDepthClipModeClampExtended;
- (bool)supportsExtendedXR10Formats;
- (bool)supportsExtendedYUVFormats;
- (bool)supportsFP32TessFactors;
- (bool)supportsFamily:(long long)arg1;
- (bool)supportsFastMathInfNaNPropagation;
- (bool)supportsFeatureSet:(unsigned long long)arg1;
- (bool)supportsFloat16BCubicFiltering;
- (bool)supportsForceSeamsOnCubemaps;
- (bool)supportsFragmentBufferWrites;
- (bool)supportsFragmentOnlyEncoders;
- (bool)supportsGFXIndirectCommandBuffers;
- (bool)supportsGPUStatistics;
- (bool)supportsImageBlockSampleCoverageControl;
- (bool)supportsImageBlocks;
- (bool)supportsIndirectDrawAndDispatch;
- (bool)supportsIndirectStageInRegion;
- (bool)supportsIndirectTessellation;
- (bool)supportsIndirectTextures;
- (bool)supportsInvariantVertexPosition;
- (bool)supportsLargeFramebufferConfigs;
- (bool)supportsLayeredRendering;
- (bool)supportsLimitedYUVFormats;
- (bool)supportsLinearTexture2DArray;
- (bool)supportsLinearTextureFromSharedBuffer;
- (bool)supportsMSAADepthResolve;
- (bool)supportsMSAADepthResolveFilter;
- (bool)supportsMSAAStencilResolve;
- (bool)supportsMSAAStencilResolveFilter;
- (bool)supportsMemoryOrderAtomics;
- (bool)supportsMemorylessRenderTargets;
- (bool)supportsMipLevelsSmallerThanBlockSize;
- (bool)supportsMirrorClampToEdgeSamplerMode;
- (bool)supportsMutableTier1ArgumentBuffers;
- (bool)supportsNativeHardwareFP16;
- (bool)supportsNonPrivateDepthStencilTextures;
- (bool)supportsNonPrivateMSAATextures;
- (bool)supportsNonSquareTileShaders;
- (bool)supportsNonUniformThreadgroupSize;
- (bool)supportsNorm16BCubicFiltering;
- (bool)supportsOpenCLTextureWriteSwizzles;
- (bool)supportsPacked32TextureBufferWrites;
- (bool)supportsPipelineLibraries;
- (bool)supportsPlacementHeaps;
- (bool)supportsPostDepthCoverage;
- (bool)supportsProgrammableBlending;
- (bool)supportsProgrammableSamplePositions;
- (bool)supportsPublicXR10Formats;
- (bool)supportsQuadGroup;
- (bool)supportsQuadReduction;
- (bool)supportsQuadShufflesAndBroadcast;
- (bool)supportsRasterOrderGroups;
- (bool)supportsRasterizationRateMapWithLayerCount:(unsigned long long)arg1;
- (bool)supportsReadWriteBufferArguments;
- (bool)supportsReadWriteTextureArguments;
- (bool)supportsReadWriteTextureArgumentsTier2;
- (bool)supportsReadWriteTextureCubeArguments;
- (bool)supportsRelaxedTextureViewRequirements;
- (bool)supportsRenderPassWithoutRenderTarget;
- (bool)supportsRenderTextureWrites;
- (bool)supportsRenderToLinearTextures;
- (bool)supportsSIMDGroup;
- (bool)supportsSIMDReduction;
- (bool)supportsSIMDShufflesAndBroadcast;
- (bool)supportsSRGBwrites;
- (bool)supportsSampleCount:(unsigned long long)arg1;
- (bool)supportsSamplerAddressModeClampToHalfBorder;
- (bool)supportsSamplerCompareFunction;
- (bool)supportsSeparateDepthStencil;
- (bool)supportsSeparateVisibilityAndShadingRate;
- (bool)supportsShaderLODAverage;
- (bool)supportsShaderMinLODClamp;
- (bool)supportsSparseTextures;
- (bool)supportsStencilFeedback;
- (bool)supportsTessellation;
- (bool)supportsTexture2DMultisampleArray;
- (bool)supportsTextureCubeArray;
- (bool)supportsTextureOutOfBoundsReads;
- (bool)supportsTextureSampleCount:(unsigned long long)arg1;
- (bool)supportsTextureSwizzle;
- (bool)supportsTileShaders;
- (bool)supportsVariableRateRasterization;
- (bool)supportsVertexAmplification;
- (bool)supportsVertexAmplificationCount:(unsigned long long)arg1;
- (bool)supportsViewportAndScissorArray;
- (bool)supportsYCBCRFormats;
- (bool)supportsYCBCRFormats12;
- (bool)supportsYCBCRFormatsPQ;
- (bool)supportsYCBCRFormatsXR;
- (id)textureLayouts;
- (id)textures;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })tileSizeWithSparsePageSize:(unsigned long long)arg1 textureType:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 sampleCount:(unsigned long long)arg4;
- (void)unloadShaderCaches;
- (void)unmapShaderSampleBuffer;
- (id)unwrapMTLComputePipelineDescriptor:(id)arg1;
- (id)unwrapMTLRenderPipelineDescriptor:(id)arg1;
- (id)unwrapMTLTileRenderPipelineDescriptor:(id)arg1;
- (bool)useDeviceResourceTableForType:(unsigned long long)arg1;
- (id)utilityBufferForComputeCommandEncoder:(id)arg1;
- (id)utilityBufferForRenderCommandEncoder:(id)arg1;
- (id)utilityBuffers;
- (id)vendorName;

@end
