/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPDataDetectors : NSObject

+ (bool)_components:(id)arg1 haveHongKongAtKey:(id)arg2;
+ (bool)_componentsHaveStreetAndCityOrZip:(id)arg1;
+ (void)addAddressComponentsInResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1 toDictionary:(id)arg2;
+ (id)addressComponentsFromString:(id)arg1 extractedAddress:(id*)arg2;
+ (id)addressComponentsFromString:(id)arg1 extractedAddress:(id*)arg2 locale:(id)arg3;
+ (bool)isValidDataDetectorsMatch:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1 addressComponents:(id*)arg2;
+ (void)scanString:(id)arg1 inRange:(struct { long long x1; long long x2; })arg2 withScanner:(struct __DDScanner { }*)arg3 options:(long long)arg4 block:(id /* block */)arg5;

@end