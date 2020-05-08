/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

@interface SFShareAudioHoldButtonViewController : SFShareAudioBaseViewController {
    UIButton * _cancelButton;
    unsigned int  _colorCode;
    UILabel * _infoLabel;
    unsigned int  _productID;
    UIImageView * _productImageView;
    SFMediaPlayerView * _productMovieView;
    UIImageView * _shareImageView;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic, retain) UILabel *infoLabel;
@property (nonatomic) unsigned int productID;
@property (nonatomic, retain) UIImageView *productImageView;
@property (nonatomic, retain) SFMediaPlayerView *productMovieView;
@property (nonatomic, retain) UIImageView *shareImageView;

- (void).cxx_destruct;
- (void)_updateDeviceVisual:(id)arg1;
- (id)cancelButton;
- (unsigned int)colorCode;
- (void)eventCancel:(id)arg1;
- (id)infoLabel;
- (unsigned int)productID;
- (id)productImageView;
- (id)productMovieView;
- (void)setCancelButton:(id)arg1;
- (void)setColorCode:(unsigned int)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setProductImageView:(id)arg1;
- (void)setProductMovieView:(id)arg1;
- (void)setShareImageView:(id)arg1;
- (id)shareImageView;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
