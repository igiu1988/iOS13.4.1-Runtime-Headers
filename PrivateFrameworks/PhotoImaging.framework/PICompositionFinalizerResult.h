/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PICompositionFinalizerResult : NSObject {
    NUComposition * _composition;
    long long  _disposition;
}

@property (readonly, copy) NUComposition *composition;
@property (readonly) long long disposition;

- (void).cxx_destruct;
- (id)composition;
- (long long)disposition;
- (id)initWithDisposition:(long long)arg1 composition:(id)arg2;

@end
