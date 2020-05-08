/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroExportController : ReaderWriterExportController {
    id /* block */  _completionBlock;
    UIImage * _posterImage;
    id /* block */  _progressHandler;
    NSDictionary * _titleInformation;
    PMTitleSubtitleView * _titleView;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) UIImage *posterImage;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) NSDictionary *titleInformation;
@property (nonatomic, retain) PMTitleSubtitleView *titleView;

- (void).cxx_destruct;
- (id)_compositionForExport;
- (void)_setupMovieController;
- (id /* block */)completionBlock;
- (void)createMovieController;
- (id)posterImage;
- (id /* block */)progressHandler;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setTitleInformation:(id)arg1;
- (void)setTitleView:(id)arg1;
- (id)thumbnailImage;
- (id)titleInformation;
- (id)titleLayerForVideoComposition:(id)arg1;
- (id)titleView;

@end
