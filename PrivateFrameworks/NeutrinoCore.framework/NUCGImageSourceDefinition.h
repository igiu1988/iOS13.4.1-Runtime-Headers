/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUCGImageSourceDefinition : NUSingleSourceDefinition {
    struct CGImageSource { } * _imageSource;
}

@property (readonly) struct CGImageSource { }*imageSource;

- (void)dealloc;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (struct CGImageSource { }*)imageSource;
- (id)init;
- (id)initWithCGImageSource:(struct CGImageSource { }*)arg1;
- (long long)mediaType;

@end
