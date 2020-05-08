/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigVideoContainerLayer : FigBaseCALayer {
    bool  _isForScrubbingOnly;
    bool  _shouldResizeVideoLayer;
    CALayer * _videoLayer;
}

@property (getter=isForScrubbingOnly, nonatomic) bool forScrubbingOnly;
@property (nonatomic) bool shouldResizeVideoLayer;
@property (nonatomic, retain) CALayer *videoLayer;

+ (id)defaultActionForKey:(id)arg1;

- (id)actionForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isForScrubbingOnly;
- (void)layoutSublayers;
- (void)setForScrubbingOnly:(bool)arg1;
- (void)setShouldResizeVideoLayer:(bool)arg1;
- (void)setVideoLayer:(id)arg1;
- (bool)shouldResizeVideoLayer;
- (id)videoLayer;

@end