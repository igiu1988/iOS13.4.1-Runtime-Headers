/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNicknameBannerView : UIView <UITextViewDelegate> {
    UIView * _avatarCutoutView;
    CKAvatarView * _avatarView;
    UIVisualEffectView * _blurView;
    UIButton * _cancelButton;
    NSDictionary * _contactMap;
    UIImageView * _contactsIconView;
    <CKNicknameBannerViewDelegate> * _delegate;
    bool  _inUpdatesMode;
    NSArray * _nicknameUpdates;
    CKAvatarView * _secondaryAvatarView;
    unsigned long long  _style;
    UITextView * _subtitleLabel;
    UITextView * _titleLabel;
    bool  _useNamedSubtitles;
    bool  _useNamedTitles;
}

@property (nonatomic, retain) UIView *avatarCutoutView;
@property (nonatomic, retain) CKAvatarView *avatarView;
@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) NSDictionary *contactMap;
@property (nonatomic, retain) UIImageView *contactsIconView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKNicknameBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inUpdatesMode;
@property (nonatomic, retain) NSArray *nicknameUpdates;
@property (nonatomic, retain) CKAvatarView *secondaryAvatarView;
@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) UITextView *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextView *titleLabel;
@property (nonatomic, readonly) double titleLabelAlignmentX;
@property (nonatomic, readonly) bool useNamedSubtitles;
@property (nonatomic) bool useNamedTitles;

- (void).cxx_destruct;
- (id)_avatarContactForUpdate:(id)arg1;
- (void)_updateAvatarView;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (id)avatarCutoutView;
- (id)avatarView;
- (id)blurView;
- (id)cancelButton;
- (void)cancelButtonTapped:(id)arg1;
- (id)cancelGlyph;
- (id)contactMap;
- (id)contactStore;
- (id)contactsIconView;
- (id)createContactForOutgoingShare;
- (id)createContactFromNickname:(id)arg1;
- (id)delegate;
- (bool)inUpdatesMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(unsigned long long)arg2 updates:(id)arg3 useNamedTitles:(bool)arg4 inUpdatesMode:(bool)arg5;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)layoutSubviews;
- (double)maxLabelWidthForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)nicknameController;
- (id)nicknameUpdates;
- (id)secondaryAvatarView;
- (void)setAvatarCutoutView:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setContactMap:(id)arg1;
- (void)setContactsIconView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInUpdatesMode:(bool)arg1;
- (void)setNicknameUpdates:(id)arg1;
- (void)setSecondaryAvatarView:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUseNamedTitles:(bool)arg1;
- (void)setupViews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (id)subtitleLabel;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)titleLabel;
- (double)titleLabelAlignmentX;
- (bool)useNamedSubtitles;
- (bool)useNamedTitles;

@end
