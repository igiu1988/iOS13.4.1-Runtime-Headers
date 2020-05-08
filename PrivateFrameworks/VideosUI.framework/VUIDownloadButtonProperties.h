/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDownloadButtonProperties : NSObject {
    unsigned long long  _downloadState;
    bool  _enabled;
    bool  _hasBorder;
    bool  _hasImage;
    bool  _hasTitle;
    UIImage * _image;
    bool  _indeterminate;
    double  _progress;
    NSString * _title;
}

@property (nonatomic) unsigned long long downloadState;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) bool hasBorder;
@property (nonatomic) bool hasImage;
@property (nonatomic) bool hasTitle;
@property (nonatomic, retain) UIImage *image;
@property (getter=isInderminate, nonatomic) bool indeterminate;
@property (nonatomic) double progress;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (unsigned long long)downloadState;
- (bool)hasBorder;
- (bool)hasImage;
- (bool)hasTitle;
- (id)image;
- (bool)isEnabled;
- (bool)isInderminate;
- (double)progress;
- (void)setDownloadState:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasBorder:(bool)arg1;
- (void)setHasImage:(bool)arg1;
- (void)setHasTitle:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setIndeterminate:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
