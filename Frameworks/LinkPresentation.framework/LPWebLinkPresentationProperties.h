/* Generated by EzioChiu
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPWebLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider> {
    NSArray * _alternateImages;
    LPAudio * _audio;
    UIColor * _backgroundColor;
    LPCaptionBarPresentationProperties * _captionBar;
    LPImage * _image;
    LPImagePresentationProperties * _imageProperties;
    LPInlineMediaPlaybackInformation * _inlinePlaybackInformation;
    LPCaptionBarPresentationProperties * _mediaBottomCaptionBar;
    LPCaptionBarPresentationProperties * _mediaTopCaptionBar;
    NSNumber * _minimumHeight;
    bool  _preliminary;
    NSString * _quotedText;
    long long  _style;
    LPVideo * _video;
}

@property (nonatomic, retain) NSArray *alternateImages;
@property (nonatomic, retain) LPAudio *audio;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) LPCaptionBarPresentationProperties *captionBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPImage *image;
@property (nonatomic, retain) LPImagePresentationProperties *imageProperties;
@property (nonatomic, retain) LPInlineMediaPlaybackInformation *inlinePlaybackInformation;
@property (nonatomic, retain) LPCaptionBarPresentationProperties *mediaBottomCaptionBar;
@property (nonatomic, retain) LPCaptionBarPresentationProperties *mediaTopCaptionBar;
@property (nonatomic, retain) NSNumber *minimumHeight;
@property (getter=isPreliminary, nonatomic) bool preliminary;
@property (nonatomic, copy) NSString *quotedText;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) LPVideo *video;

- (void).cxx_destruct;
- (id)alternateImages;
- (id)audio;
- (id)backgroundColor;
- (id)captionBar;
- (id)image;
- (id)imageProperties;
- (id)inlinePlaybackInformation;
- (bool)isPreliminary;
- (id)mediaBottomCaptionBar;
- (id)mediaTopCaptionBar;
- (id)minimumHeight;
- (id)quotedText;
- (void)setAlternateImages:(id)arg1;
- (void)setAudio:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCaptionBar:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageProperties:(id)arg1;
- (void)setInlinePlaybackInformation:(id)arg1;
- (void)setMediaBottomCaptionBar:(id)arg1;
- (void)setMediaTopCaptionBar:(id)arg1;
- (void)setMinimumHeight:(id)arg1;
- (void)setPreliminary:(bool)arg1;
- (void)setQuotedText:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setVideo:(id)arg1;
- (long long)style;
- (id)video;

@end
