/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPFaceTimeFace : NSObject {
    VNFaceprint * _faceprint;
}

@property (nonatomic, retain) VNFaceprint *faceprint;

+ (id)face;
+ (id)faceFromManagedObject:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)faceprint;
- (id)managedObjectForContext:(id)arg1;
- (void)setFaceprint:(id)arg1;

@end
