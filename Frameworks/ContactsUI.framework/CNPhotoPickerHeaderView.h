/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPhotoPickerHeaderView : UIView {
    bool  _allowsEditing;
    <CNPhotoPickerHeaderViewDelegate> * _delegate;
    UIButton * _editButton;
    UIView * _headerDropShadowView;
    CNContactPhotoView * _photoView;
    NSArray * _subviewsConstraints;
}

@property (nonatomic) bool allowsEditing;
@property (nonatomic) <CNPhotoPickerHeaderViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *editButton;
@property (nonatomic, retain) UIView *headerDropShadowView;
@property (nonatomic, retain) CNContactPhotoView *photoView;
@property (nonatomic, retain) NSArray *subviewsConstraints;

- (void).cxx_destruct;
- (bool)allowsEditing;
- (id)delegate;
- (void)didMoveToWindow;
- (id)editButton;
- (id)headerDropShadowView;
- (id)initWithContact:(id)arg1;
- (id)photoView;
- (void)photoViewTapped;
- (void)setAllowsEditing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setHeaderDropShadowView:(id)arg1;
- (void)setPhotoView:(id)arg1;
- (void)setSubviewsConstraints:(id)arg1;
- (id)subviewsConstraints;
- (void)updateConstraints;
- (void)updatePhoto;

@end
