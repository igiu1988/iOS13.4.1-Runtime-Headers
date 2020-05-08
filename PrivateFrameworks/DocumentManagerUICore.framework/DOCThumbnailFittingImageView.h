/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCThumbnailFittingImageView : DOCBorderedFittingImageView {
    long long  _generatorGeneration;
    FPItem * _item;
    NSURL * _url;
}

@property (nonatomic) long long generatorGeneration;
@property (nonatomic, readonly) FPItem *item;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)_commonInitWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)didMoveToWindow;
- (long long)generatorGeneration;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 item:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 url:(id)arg2;
- (id)item;
- (void)setGeneratorGeneration:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateThumbnail;
- (void)updateThumbnailForItem:(id)arg1;
- (void)updateThumbnailForURL:(id)arg1;
- (id)url;

@end
