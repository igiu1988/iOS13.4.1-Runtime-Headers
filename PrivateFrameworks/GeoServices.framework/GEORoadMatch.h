/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoadMatch : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinateOnRoad;
    double  _courseOnRoad;
    double  _distanceFromJunction;
    double  _distanceFromRoad;
    double  _junctionRadius;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned short x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; } * _roadFeature;
    NSString * _roadName;
    double  _roadWidth;
}

@property (nonatomic) struct { double x1; double x2; } coordinateOnRoad;
@property (nonatomic) double courseOnRoad;
@property (nonatomic) double distanceFromJunction;
@property (nonatomic) double distanceFromRoad;
@property (nonatomic) double junctionRadius;
@property (nonatomic, readonly) struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned short x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*roadFeature;
@property (nonatomic, copy) NSString *roadName;
@property (nonatomic) double roadWidth;

- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinateOnRoad;
- (double)courseOnRoad;
- (void)dealloc;
- (double)distanceFromJunction;
- (double)distanceFromRoad;
- (id)initWithCoordinateOnRoad:(struct { double x1; double x2; })arg1 courseOnRoad:(double)arg2;
- (double)junctionRadius;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned short x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*)roadFeature;
- (id)roadName;
- (double)roadWidth;
- (void)setCoordinateOnRoad:(struct { double x1; double x2; })arg1;
- (void)setCourseOnRoad:(double)arg1;
- (void)setDistanceFromJunction:(double)arg1;
- (void)setDistanceFromRoad:(double)arg1;
- (void)setJunctionRadius:(double)arg1;
- (void)setRoadFeature:(struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned short x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*)arg1;
- (void)setRoadName:(id)arg1;
- (void)setRoadWidth:(double)arg1;

@end
