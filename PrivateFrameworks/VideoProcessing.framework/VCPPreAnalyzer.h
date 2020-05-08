/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPPreAnalyzer : NSObject {
    VCPSceneProcessingImageManager * _imageManager;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _pool8Y;
    NSObject<OS_dispatch_group> * _processingGroup;
    NSObject<OS_dispatch_queue> * _processingQueue;
    PVSceneTaxonomy * _sceneTaxonomy;
    struct CF<OpaqueVTPixelTransferSession *> { 
        struct OpaqueVTPixelTransferSession {} *value_; 
    }  _transferSession;
}

+ (bool)_allowANE;
+ (bool)_enableSceneAssetConcurrency;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_collectSceneAnalysisResults:(id*)arg1 withClassificationResults:(id)arg2 andJunkImageResults:(id)arg3 andAestheticsResults:(id)arg4 andSaliencyResults:(id)arg5 andSceneprintResults:(id)arg6;
- (void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2;
- (int)_convertFromBuffer:(struct __CVBuffer { }*)arg1 toLumaPixelBuffer:(struct __CVBuffer {}**)arg2;
- (int)_createAestheticsRequest:(id*)arg1 andClassificationRequest:(id*)arg2 andSceneprintRequest:(id*)arg3 andJunkImageRequest:(id*)arg4 andSaliencyImageRequest:(id*)arg5;
- (int)_createPixelBufferPool:(struct __CVPixelBufferPool {}**)arg1 withPixelFormat:(unsigned int)arg2;
- (void)_generateSceneClassifications:(id)arg1 withClassificationResults:(id)arg2 andJunkImageResults:(id)arg3;
- (int)_loadImageURL:(id)arg1 isPano:(bool)arg2 withRequestHandler:(id*)arg3 andLumaPixelBuffer:(struct __CVBuffer {}**)arg4;
- (int)_performAnalysis:(id*)arg1 isSDOF:(bool)arg2 withRequestHandler:(id)arg3 andLumaPixelBuffer:(struct __CVBuffer { }*)arg4;
- (int)_performBlurAnalysis:(id*)arg1 withBuffer:(struct __CVBuffer { }*)arg2 andIsSDOF:(bool)arg3;
- (int)_performExposureAnalysis:(id*)arg1 withBuffer:(struct __CVBuffer { }*)arg2;
- (int)_performSceneAnalysis:(id*)arg1 withRequestHandler:(id)arg2;
- (void)analyzeWithImageURL:(id)arg1 isPano:(bool)arg2 isSDOF:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)init;

@end