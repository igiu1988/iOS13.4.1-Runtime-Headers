/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceObservation : VNDetectedObjectObservation {
    struct _Geometry2D_rect2D_ { 
        struct _Geometry2D_point2D_ { 
            float x; 
            float y; 
        } origin; 
        struct _Geometry2D_size2D_ { 
            float height; 
            float width; 
        } size; 
    }  _alignedBoundingBox;
    NSData * _alignedMeanShape;
    float  _alignedRotationAngle;
    float  _blinkScore;
    VNFaceLandmarks2D * _cachedLandmarks;
    VNFaceLandmarks3D * _cachedLandmarks3d;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachedLandmarks3dLock;
    VNFaceLandmarks2D * _cachedLandmarks65;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachedLandmarks65Lock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachedLandmarksLock;
    NSDictionary * _expressionsAndScores;
    VNFaceAttributes * _faceAttributes;
    NSNumber * _faceCaptureQuality;
    unsigned long long  _faceId;
    float  _faceIdConfidence;
    float  _faceJunkinessIndex;
    float  _faceOrientationIndex;
    VNFaceRegionMap * _faceRegionMap;
    VNFaceSegments * _faceSegments;
    VNFaceTorsoprint * _faceTorsoprint;
    VNFaceprint * _faceprint;
    bool  _hasBBoxBeenAligned;
    bool  _isBlinking;
    NSArray * _landmarkOcclusionFlagsPerPoint;
    NSData * _landmarkPoints;
    NSData * _landmarkPoints3d;
    NSData * _landmarkPoints65;
    NSArray * _landmarkPrecisionEstimatesPerPoint;
    float  _landmarkScore;
    VNFaceLandmarks2D * _landmarks;
    unsigned long long  _landmarks3DRequestRevision;
    unsigned long long  _landmarksConstellation;
    unsigned long long  _landmarksRequestRevision;
    NSData * _poseData;
    NSNumber * _roll;
    VNTorsoprint * _torsoprint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unalignedBoundingBox;
    NSNumber * _yaw;
}

@property (nonatomic) struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; } alignedBoundingBox;
@property (nonatomic, retain) NSData *alignedMeanShape;
@property (nonatomic) float alignedRotationAngle;
@property (readonly) float blinkScore;
@property (nonatomic, readonly, copy) NSDictionary *expressionsAndConfidence;
@property (nonatomic, readonly) VNFaceAttributes *faceAttributes;
@property (nonatomic, readonly) NSNumber *faceCaptureQuality;
@property (nonatomic) unsigned long long faceId;
@property (nonatomic) float faceIdConfidence;
@property (getter=faceJunkinessIndex, nonatomic, readonly) float faceJunkinessIndex;
@property (getter=faceOrientationIndex, nonatomic, readonly) float faceOrientationIndex;
@property (nonatomic, readonly) VNFaceRegionMap *faceRegionMap;
@property (nonatomic, readonly) VNFaceSegments *faceSegments;
@property (nonatomic, retain) VNFaceTorsoprint *faceTorsoprint;
@property (nonatomic, retain) VNFaceprint *faceprint;
@property (nonatomic) bool hasBBoxBeenAligned;
@property (nonatomic, retain) NSArray *landmarkOcclusionFlagsPerPoint;
@property (nonatomic, retain) NSData *landmarkPoints;
@property (nonatomic, retain) NSData *landmarkPoints3d;
@property (nonatomic, retain) NSData *landmarkPoints65;
@property (nonatomic, retain) NSArray *landmarkPrecisionEstimatesPerPoint;
@property (nonatomic, retain) VNFaceLandmarks2D *landmarks;
@property (nonatomic) unsigned long long landmarks3DRequestRevision;
@property (nonatomic, readonly) VNFaceLandmarks3D *landmarks3d;
@property (nonatomic, readonly) VNFaceLandmarks2D *landmarks65;
@property (nonatomic) unsigned long long landmarksConstellation;
@property (nonatomic) unsigned long long landmarksRequestRevision;
@property (nonatomic, readonly) float nameConfidence;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pose;
@property (nonatomic, retain) NSData *poseData;
@property (nonatomic, readonly) struct { } poseQuaternion;
@property (nonatomic, retain) NSNumber *roll;
@property (nonatomic, retain) VNTorsoprint *torsoprint;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unalignedBoundingBox;
@property (nonatomic, retain) NSNumber *yaw;

+ (bool)_exifOrientationFromFaceRollAngle:(float)arg1 exifOrientation:(int*)arg2 error:(id*)arg3;
+ (bool)computeYawPitchRollFromPoseMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 outputYaw:(float*)arg2 outputPitch:(float*)arg3 outputRoll:(float*)arg4;
+ (id)faceObservationWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andAlignedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)faceObservationWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 faceprint:(id)arg2;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 alignedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 roll:(id)arg4 yaw:(id)arg5;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andAlignedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 faceprint:(id)arg3;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 roll:(id)arg3 yaw:(id)arg4;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 unalignedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 alignedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)VNPersonsModelFaceprintWithRequestRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)_initLocks;
- (struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })alignedBoundingBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignedBoundingBoxAsCGRect;
- (id)alignedMeanShape;
- (float)alignedRotationAngle;
- (float)blinkScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionsAndConfidence;
- (id)expressionsAndDetections;
- (id)expressionsAndScores;
- (id)faceAttributes;
- (id)faceCaptureQuality;
- (unsigned long long)faceId;
- (float)faceIdConfidence;
- (float)faceJunkinessIndex;
- (float)faceOrientationIndex;
- (id)faceRegionMap;
- (id)faceSegments;
- (id)faceTorsoprint;
- (id)faceprint;
- (bool)getComputedRectifyingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1;
- (bool)getFaceEXIFOrientation:(int*)arg1 error:(id*)arg2;
- (bool)hasBBoxBeenAligned;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1;
- (bool)isBlinking;
- (bool)isEqual:(id)arg1;
- (id)landmarkOcclusionFlagsPerPoint;
- (id)landmarkPoints;
- (id)landmarkPoints3d;
- (id)landmarkPoints65;
- (id)landmarkPrecisionEstimatesPerPoint;
- (float)landmarkScore;
- (id)landmarks;
- (unsigned long long)landmarks3DRequestRevision;
- (id)landmarks3d;
- (id)landmarks65;
- (unsigned long long)landmarksConstellation;
- (unsigned long long)landmarksRequestRevision;
- (float)nameConfidence;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pose;
- (id)poseData;
- (struct { })poseQuaternion;
- (id)roll;
- (void)setAlignedBoundingBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAlignedMeanShape:(id)arg1;
- (void)setAlignedRotationAngle:(float)arg1;
- (void)setBlinkScore:(float)arg1;
- (void)setExpressionsAndScores:(id)arg1;
- (void)setFaceAttributes:(id)arg1;
- (void)setFaceCaptureQuality:(id)arg1;
- (void)setFaceId:(unsigned long long)arg1;
- (void)setFaceIdConfidence:(float)arg1;
- (void)setFaceJunkinessIndex:(float)arg1;
- (void)setFaceOrientationIndex:(float)arg1;
- (void)setFaceRegionMap:(id)arg1;
- (void)setFaceSegments:(id)arg1;
- (void)setFaceTorsoprint:(id)arg1;
- (void)setFaceprint:(id)arg1;
- (void)setHasBBoxBeenAligned:(bool)arg1;
- (void)setIsBlinking:(bool)arg1;
- (void)setLandmarkOcclusionFlagsPerPoint:(id)arg1;
- (void)setLandmarkPoints3d:(id)arg1;
- (void)setLandmarkPoints65:(id)arg1;
- (void)setLandmarkPoints:(id)arg1;
- (void)setLandmarkPrecisionEstimatesPerPoint:(id)arg1;
- (void)setLandmarkScore:(float)arg1;
- (void)setLandmarks3DRequestRevision:(unsigned long long)arg1;
- (void)setLandmarks:(id)arg1;
- (void)setLandmarksConstellation:(unsigned long long)arg1;
- (void)setLandmarksRequestRevision:(unsigned long long)arg1;
- (void)setPoseData:(id)arg1;
- (void)setRoll:(id)arg1;
- (void)setTorsoprint:(id)arg1;
- (void)setUnalignedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setYaw:(id)arg1;
- (id)torsoprint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unalignedBoundingBox;
- (id)yaw;

@end
