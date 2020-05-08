/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKExplanationView : UIView <UIScrollViewDelegate, UITextViewDelegate, _PKUIKVisibilityBackdropViewDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    NSAttributedString * _attributedBodyText;
    NSAttributedString * _attributedSecondaryBodyText;
    _PKUIKVisibilityBackdropView * _backdropView;
    double  _backdropWeight;
    UIButton * _bodyButton;
    long long  _bodyButtonNumberOfLines;
    NSString * _bodyButtonText;
    unsigned long long  _bodyDataDetectorTypes;
    NSString * _bodyText;
    long long  _bodyTextAlignment;
    UITextView * _bodyTextView;
    UIView * _bodyView;
    PKCheckGlyphLayer * _checkmarkLayer;
    long long  _context;
    <PKExplanationViewDelegate> * _delegate;
    PKPaymentSetupDockView * _dockView;
    bool  _forceShowSetupLaterButton;
    UIView * _heroView;
    bool  _hideTitleText;
    UIImage * _image;
    UIImageView * _imageView;
    UIImageView * _logoImageView;
    bool  _privacyFooterShouldPin;
    OBPrivacyLinkController * _privacyLink;
    UIScrollView * _scrollView;
    UITextView * _secondaryBodyTextView;
    bool  _showPrivacyView;
    UIFont * _titleFont;
    double  _titleHyphenationFactor;
    UIImage * _titleImage;
    UILabel * _titleLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleLabelFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleLabelLastLineBounds;
    double  _titleLabelLastLineDescent;
    NSString * _titleText;
    long long  _titleTextAlignment;
    UIColor * _topBackgroundColor;
    UIView * _topBackgroundView;
    double  _topMargin;
}

@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, copy) NSAttributedString *attributedBodyText;
@property (nonatomic, copy) NSAttributedString *attributedSecondaryBodyText;
@property (nonatomic) long long bodyButtonNumberOfLines;
@property (nonatomic, copy) NSString *bodyButtonText;
@property (nonatomic) unsigned long long bodyDataDetectorTypes;
@property (nonatomic, copy) NSString *bodyText;
@property (nonatomic) long long bodyTextAlignment;
@property (nonatomic, readonly) UIFont *bodyTextFont;
@property (nonatomic, retain) UITextView *bodyTextView;
@property (nonatomic, retain) UIView *bodyView;
@property (nonatomic, readonly) PKCheckGlyphLayer *checkmarkLayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKExplanationViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPaymentSetupDockView *dockView;
@property (nonatomic) bool forceShowSetupLaterButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *heroView;
@property (nonatomic) bool hideTitleText;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) UIImageView *logoImageView;
@property (nonatomic, retain) OBPrivacyLinkController *privacyLink;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) bool showPrivacyView;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIFont *titleFont;
@property (nonatomic) double titleHyphenationFactor;
@property (nonatomic, retain) UIImage *titleImage;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic) long long titleTextAlignment;
@property (nonatomic, retain) UIColor *topBackgroundColor;
@property (nonatomic) double topMargin;

- (void).cxx_destruct;
- (void)_bodyButtonTapped;
- (void)_calculateBlur;
- (void)_continue;
- (id)_createBodyTextView;
- (void)_createSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (bool)_isBuddyiPad;
- (void)_setupLater;
- (bool)_showTitleLogoImageView;
- (void)_updateCachedTitleLabelLastLine;
- (void)_updateCheckmarkColor;
- (void)_updateTitleLabel;
- (id)activityIndicator;
- (id)attributedBodyText;
- (id)attributedSecondaryBodyText;
- (long long)bodyButtonNumberOfLines;
- (id)bodyButtonText;
- (unsigned long long)bodyDataDetectorTypes;
- (id)bodyText;
- (long long)bodyTextAlignment;
- (id)bodyTextFont;
- (id)bodyTextView;
- (id)bodyView;
- (id)checkmarkLayer;
- (void)dealloc;
- (id)delegate;
- (id)dockView;
- (bool)forceShowSetupLaterButton;
- (id)heroView;
- (bool)hideTitleText;
- (id)image;
- (id)imageView;
- (id)init;
- (id)initWithContext:(long long)arg1;
- (id)initWithContext:(long long)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (id)logoImageView;
- (void)pk_applyAppearance:(id)arg1;
- (id)privacyLink;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAttributedBodyText:(id)arg1;
- (void)setAttributedSecondaryBodyText:(id)arg1;
- (void)setBodyButtonNumberOfLines:(long long)arg1;
- (void)setBodyButtonText:(id)arg1;
- (void)setBodyDataDetectorTypes:(unsigned long long)arg1;
- (void)setBodyText:(id)arg1;
- (void)setBodyTextAlignment:(long long)arg1;
- (void)setBodyTextView:(id)arg1;
- (void)setBodyView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceShowSetupLaterButton:(bool)arg1;
- (void)setHeroView:(id)arg1;
- (void)setHideTitleText:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setLogoImageView:(id)arg1;
- (void)setPrivacyLink:(id)arg1;
- (void)setShowPrivacyView:(bool)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleHyphenationFactor:(double)arg1;
- (void)setTitleImage:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextAlignment:(long long)arg1;
- (void)setTopBackgroundColor:(id)arg1;
- (void)setTopMargin:(double)arg1;
- (bool)showPrivacyView;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)tintColorDidChange;
- (id)titleFont;
- (double)titleHyphenationFactor;
- (id)titleImage;
- (id)titleText;
- (long long)titleTextAlignment;
- (id)topBackgroundColor;
- (double)topMargin;
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;

@end
