/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCImageAttachmentViewController : NCAttachmentViewController {
    ISAnimatedImagePlayer * _animatedImagePlayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIView * _imageView;
}

@property (nonatomic, retain) ISAnimatedImagePlayer *animatedImagePlayer;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) UIView *imageView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)animatedImagePlayer;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageView;
- (id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2;
- (void)loadView;
- (void)setAnimatedImagePlayer:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end