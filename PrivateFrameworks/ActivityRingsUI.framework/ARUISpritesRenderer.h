/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@interface ARUISpritesRenderer : NSObject {
    unsigned long long  _numIndicies;
    <MTLBuffer> * _spriteIndexBuffer;
    <MTLBuffer> * _spriteVertexBuffer;
    ARUISpriteTexture * _texture;
    struct { } * _uniforms;
    struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1[2]; } * _vertexAttributes;
}

@property (nonatomic, retain) ARUISpriteTexture *texture;
@property (nonatomic) struct { }*uniforms;
@property (nonatomic) struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1[2]; }*vertexAttributes;

+ (void)clearCaches;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 maximumRingCount:(unsigned long long)arg2;
- (void)renderRings:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3;
- (void)setTexture:(id)arg1;
- (void)setUniforms:(struct { }*)arg1;
- (void)setVertexAttributes:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1[2]; }*)arg1;
- (id)texture;
- (struct { }*)uniforms;
- (struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1[2]; }*)vertexAttributes;

@end
