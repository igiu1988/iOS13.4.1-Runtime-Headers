/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARCoachingSpline : NSObject {
    float  _cap_error;
    struct vector<ARCoachingControlPoint, std::__1::allocator<ARCoachingControlPoint> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ARCoachingControlPoint *, std::__1::allocator<ARCoachingControlPoint> > { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _controlPoints;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
            unsigned short *__value_; 
        } __end_cap_; 
    }  _indices;
    struct vector<ARCoachingPatchData, std::__1::allocator<ARCoachingPatchData> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ARCoachingPatchData *, std::__1::allocator<ARCoachingPatchData> > { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _patchData;
    float  _relativeThickness;
}

@property (nonatomic, readonly) struct { float x1; }*controlPoints;
@property (nonatomic, readonly) unsigned short*indices;
@property (nonatomic, readonly) unsigned int numControlPoints;
@property (nonatomic, readonly) unsigned int numIndices;
@property (nonatomic, readonly) struct { }*patchData;
@property (nonatomic, readonly) unsigned int patchDataLength;

+ (void)interpolate:(void *)arg1 p1:(void *)arg2 p2:(void *)arg3 p3:(void *)arg4 t:(void *)arg5; // needs 5 arg types, found 1: float
+ (void)interpolateTangent:(void *)arg1 p1:(void *)arg2 p2:(void *)arg3 p3:(void *)arg4 t:(void *)arg5; // needs 5 arg types, found 1: float

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { float x1; }*)controlPoints;
- (void)genLeftCapWithWidth:(float)arg1;
- (void)genRightCapWithWidth:(float)arg1;
- (void)genTubeIndicesWithPattern:(unsigned long long)arg1;
- (unsigned short*)indices;
- (id)initWithPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 numPoints:(unsigned int)arg2 relativeThickness:(float)arg3 pattern:(unsigned long long)arg4 mat:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg5;
- (unsigned int)numControlPoints;
- (unsigned int)numIndices;
- (struct { }*)patchData;
- (unsigned int)patchDataLength;

@end
