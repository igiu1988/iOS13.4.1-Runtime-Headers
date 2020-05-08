/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRateControlUtil : NSObject

+ (bool)calculateCongestionMetricsFromOWRDList:(struct { double x1[100]; double x2[100]; int x3; int x4; unsigned int x5; double x6; double x7; double x8; bool x9; }*)arg1 owrd:(double)arg2 time:(double)arg3 config:(struct VCRateControlAlgorithmConfig { unsigned int *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; int x27; int x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; bool x42; bool x43; bool x44; int x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; bool x57; double x58; int x59; int x60; })arg4 isInitialRampUp:(bool)arg5;
+ (void)calculateNOWRDAccWithOWRDList:(struct { double x1[100]; double x2[100]; int x3; int x4; unsigned int x5; double x6; double x7; double x8; bool x9; }*)arg1 config:(struct VCRateControlAlgorithmConfig { unsigned int *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; int x27; int x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; bool x42; bool x43; bool x44; int x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; bool x57; double x58; int x59; int x60; })arg2;
+ (void)calculateNOWRDShortWithOWRDList:(struct { double x1[100]; double x2[100]; int x3; int x4; unsigned int x5; double x6; double x7; double x8; bool x9; }*)arg1 config:(struct VCRateControlAlgorithmConfig { unsigned int *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; int x27; int x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; bool x42; bool x43; bool x44; int x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; bool x57; double x58; int x59; int x60; })arg2 isInitialRampUp:(bool)arg3;
+ (double)calculateNOWRDWithDuration:(double)arg1 owrdList:(struct { double x1[100]; double x2[100]; int x3; int x4; unsigned int x5; double x6; double x7; double x8; bool x9; }*)arg2 historySize:(unsigned int)arg3 minHistorySize:(unsigned int)arg4 initalRampUpReadyDuration:(double)arg5 isInitialRampUp:(bool)arg6;
+ (void)calculateNOWRDWithOWRDList:(struct { double x1[100]; double x2[100]; int x3; int x4; unsigned int x5; double x6; double x7; double x8; bool x9; }*)arg1 config:(struct VCRateControlAlgorithmConfig { unsigned int *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; int x27; int x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; bool x42; bool x43; bool x44; int x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; bool x57; double x58; int x59; int x60; })arg2 isInitialRampUp:(bool)arg3;
+ (bool)prepareOWRDList:(struct { double x1[100]; double x2[100]; int x3; int x4; unsigned int x5; double x6; double x7; double x8; bool x9; }*)arg1 owrd:(double)arg2 time:(double)arg3 config:(struct VCRateControlAlgorithmConfig { unsigned int *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; int x27; int x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; bool x42; bool x43; bool x44; int x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; bool x57; double x58; int x59; int x60; })arg4;

@end
