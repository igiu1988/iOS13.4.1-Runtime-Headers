/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutParameters : NSObject {
    double  _expectedDuration;
    SXLayoutOptions * _layoutOptions;
    unsigned long long  _layoutType;
}

@property (nonatomic, readonly) double expectedDuration;
@property (nonatomic, readonly) SXLayoutOptions *layoutOptions;
@property (nonatomic, readonly) unsigned long long layoutType;

- (void).cxx_destruct;
- (id)description;
- (double)expectedDuration;
- (id)initWithLayoutOptions:(id)arg1 layoutType:(unsigned long long)arg2 expectedDuration:(double)arg3;
- (id)layoutOptions;
- (unsigned long long)layoutType;

@end