/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

@interface NUView : UIView <CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate> {
    NSBundle * _bundle;
    <NUViewDelegate> * _delegate;
    CLKDevice * _device;
    NUMetalQuad * _quad;
    CLKUIQuadView * _quadView;
    CLKUIResourceProviderKey * _resourceProviderKey;
    NUResources * _resources;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NUViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NUScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)provideAtlasBacking:(id)arg1;
- (id)quadView;
- (void)quadViewWillDisplay:(id)arg1 forTime:(double)arg2;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1 inGroup:(id)arg2;
- (id)resourceProviderKey;
- (id)scene;
- (void)setAnimationFrameInterval:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setScene:(id)arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end
