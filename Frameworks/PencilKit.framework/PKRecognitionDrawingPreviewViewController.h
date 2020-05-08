/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKRecognitionDrawingPreviewViewController : UIViewController <UIScrollViewDelegate> {
    UIImage * _drawingImage;
    UIImageView * _imageView;
    UIScrollView * _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *drawingImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)centerImageView;
- (id)drawingImage;
- (id)imageView;
- (id)initWithDrawingImage:(id)arg1;
- (id)scrollView;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setDrawingImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
