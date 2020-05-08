/* Generated by EzioChiu
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPPlayButtonView : LPComponentView <LPContentInsettable> {
    LPPlayButtonControl * _button;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    LPInlineMediaPlaybackInformation * _playbackInformation;
    LPMusicPlayButtonStyle * _style;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPlaybackInformation:(id)arg1 style:(id)arg2;
- (void)installAudioButton;
- (void)installDisablediTunesButton;
- (void)installPlaceholderButton;
- (void)installPreviewButton;
- (void)installiTunesButton;
- (void)layoutComponentView;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)updateButton;
- (void)updateButtonForAudioBook;
- (void)updateButtonForAudioFile;
- (void)updateButtonForPodcast;
- (void)updateButtonForRadio;
- (void)updateButtonForSongOrAlbum;

@end
