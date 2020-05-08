/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKInkFeatheringDescriptor : NSObject {
    double  _endCapFade;
    double  _endCapTime;
    double  _startCapFade;
    double  _startCapTime;
}

@property (nonatomic) double endCapFade;
@property (nonatomic) double endCapTime;
@property (nonatomic) double startCapFade;
@property (nonatomic) double startCapTime;

+ (id)descriptorWithStartCapTime:(double)arg1 startCapFade:(double)arg2 endCapTime:(double)arg3 endCapFade:(double)arg4;

- (double)endCapFade;
- (double)endCapTime;
- (void)setEndCapFade:(double)arg1;
- (void)setEndCapTime:(double)arg1;
- (void)setStartCapFade:(double)arg1;
- (void)setStartCapTime:(double)arg1;
- (double)startCapFade;
- (double)startCapTime;

@end
