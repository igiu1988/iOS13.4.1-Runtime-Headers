/* Generated by EzioChiu.
 */

@protocol ARUIBlurRendering <NSObject>

@required

- (<MTLTexture> *)gaussianBlurredTexture:(void *)arg1 withCommandBuffer:(void *)arg2 andSize:(void *)arg3 blurRadius:(void *)arg4 initialDownsampleFraction:(void *)arg5 brightnessMultiplier:(void *)arg6; // needs 6 arg types, found 5: <MTLTexture> *, <MTLCommandBuffer> *, unsigned long long, float, float
- (void)prewarmBlurRenderPipeline;

@end
