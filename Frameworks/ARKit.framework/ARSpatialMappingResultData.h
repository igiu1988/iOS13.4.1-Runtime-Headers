/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSpatialMappingResultData : NSObject <ARResultData> {
    NSArray * _meshChunks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *meshChunks;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)initWithMeshChunks:(id)arg1;
- (id)meshChunks;
- (void)setMeshChunks:(id)arg1;
- (void)updateSemanticsFromSamplingData:(struct __CFData { }*)arg1;

@end
