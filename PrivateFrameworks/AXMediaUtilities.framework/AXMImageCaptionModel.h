/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMImageCaptionModel : NSObject {
    NSString * _preferredModelName;
}

- (void).cxx_destruct;
- (id)_captionWithRequestHandler:(id)arg1 model:(id)arg2 error:(id*)arg3;
- (id)_captionWithRequestHandler:(id)arg1 modelName:(id)arg2 error:(id*)arg3;
- (id)_captionWithRequestHandler:(id)arg1 usingExternalModelAtURL:(id)arg2 error:(id*)arg3;
- (id)_imageFeatureVectorWithRequestHandler:(id)arg1 error:(id*)arg2;
- (id)_sceneObservationsWithRequestHandler:(id)arg1 error:(id*)arg2;
- (id)_stringForNextWordTensor:(id)arg1 tokens:(id)arg2;
- (id)_stringForTokenIndex:(long long)arg1 tokens:(id)arg2;
- (id)_tokenizerDictionary:(id*)arg1;
- (void)evaluate:(id)arg1;
- (id)initWithModelName:(id)arg1;

@end
