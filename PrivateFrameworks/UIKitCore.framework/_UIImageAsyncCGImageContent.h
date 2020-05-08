/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIImageAsyncCGImageContent : _UIImageCGImageContent {
    _UICGImageDecompressor * _decompressor;
    bool  _finishedDecompressing;
    long long  _orientation;
}

@property (setter=_setDecompressor:, retain) _UICGImageDecompressor *_decompressor;
@property bool finishedDecompressing;
@property (readonly) long long orientation;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (id)_decompressor;
- (void)_setDecompressor:(id)arg1;
- (id)description;
- (bool)finishedDecompressing;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4 cache:(bool)arg5;
- (bool)isDecompressing;
- (bool)isEqual:(id)arg1;
- (long long)orientation;
- (void)setFinishedDecompressing:(bool)arg1;

@end
