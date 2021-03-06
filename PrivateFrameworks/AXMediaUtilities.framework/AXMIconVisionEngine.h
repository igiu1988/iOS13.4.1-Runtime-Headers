/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMIconVisionEngine : AXMVisionEngine {
    AXMIconClassDetectorNode * _iconClassDetector;
    AXMImageNode * _imageNode;
}

@property (nonatomic) AXMIconClassDetectorNode *iconClassDetector;
@property (nonatomic) AXMImageNode *imageNode;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)classifyImages:(id)arg1 withTimeout:(double)arg2;
- (id)iconClassDetector;
- (id)imageNode;
- (id)initWithIdentifier:(id)arg1;
- (void)setIconClassDetector:(id)arg1;
- (void)setImageNode:(id)arg1;

@end
