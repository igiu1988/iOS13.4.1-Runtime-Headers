/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@interface ARUISpriteRenderState : NSObject <ARUIPrecompiledRendering, ARUIRendering> {
    <MTLRenderPipelineState> * _renderPipelineState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTLRenderPipelineState> *renderPipelineState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (id)initWithPipelineLibrary:(id)arg1;
- (id)name;
- (id)renderPipelineDescriptorFromLibrary:(id)arg1;
- (id)renderPipelineState;
- (void)setRenderPipelineState:(id)arg1;
- (bool)shouldRunStateForIcon:(id)arg1;

@end
