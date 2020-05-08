/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXScrubberSeekRequest : NSObject {
    NSDate * _dateCreated;
    double  _seekTime;
    <PXVideoScrubberControllerTarget> * _target;
}

@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic) double seekTime;
@property (nonatomic) <PXVideoScrubberControllerTarget> *target;

- (void).cxx_destruct;
- (id)dateCreated;
- (id)init;
- (id)initWithTarget:(id)arg1 seekTime:(double)arg2;
- (double)seekTime;
- (void)setDateCreated:(id)arg1;
- (void)setSeekTime:(double)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end