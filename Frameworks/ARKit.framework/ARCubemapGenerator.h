/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARCubemapGenerator : NSObject {
    ARGPUCubemapConverter * _cubemapConverter;
    ARGPUCubemapHistogram * _cubemapHistogram;
    ARGPUCubemapProjector * _cubemapProjector;
    NSObject<OS_dispatch_queue> * _cubemapQueue;
    ARGPUWarper * _gpuWarper;
}

- (void).cxx_destruct;
- (void)cubemapWithTransform:(void *)arg1 extent:(void *)arg2 lastHistogram:(void *)arg3 fromPlanes:(void *)arg4 cameraImage:(void *)arg5 cameraTransform:(void *)arg6 cameraIntrinsics:(void *)arg7 cameraExposure:(void *)arg8 cameraExposureOffset:(void *)arg9 completionHandler:(void *)arg10; // needs 10 arg types, found 9: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct ARLabHistogram { float x1; struct array<std::__1::array<std::__1::array<float, 8>, 8>, 4> { struct array<std::__1::array<float, 8>, 8> { struct array<float, 8> { float x_1_3_1[8]; } x_1_2_1[8]; } x_2_1_1[4]; } x2; }, struct vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> > { struct ARTexturedPlane {} *x1; struct ARTexturedPlane {} *x2; struct __compressed_pair<ARTexturedPlane *, std::__1::allocator<ARTexturedPlane> > { struct ARTexturedPlane {} *x_3_1_1; } x3; }, struct __CVBuffer { }*, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, double, float, id /* block */
- (id)init;

@end
