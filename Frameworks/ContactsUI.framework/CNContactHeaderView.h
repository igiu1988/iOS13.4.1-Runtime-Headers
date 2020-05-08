/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate, CNUIReusableView> {
    NSArray * _activatedConstraints;
    bool  _alwaysShowsMonogram;
    double  _constrainedMaxHeight;
    NSArray * _contacts;
    <CNContactHeaderViewDelegate> * _delegate;
    double  _lastViewWidth;
    UILabel * _nameLabel;
    NSDictionary * _nameTextAttributes;
    bool  _needsLabelSizeCalculation;
    bool  _needsReload;
    NSLayoutConstraint * _photoHeightConstraint;
    NSLayoutConstraint * _photoTopConstraint;
    CNContactPhotoView * _photoView;
    <CNPresenterDelegate> * _presenterDelegate;
    bool  _shouldShowBelowNavigationTitle;
    bool  _shouldUseConstrainedMaxHeight;
    bool  _showMonogramsOnly;
    CNContactHeaderViewSizeAttributes * _sizeAttributes;
    bool  _visibleToScrollViews;
}

@property (nonatomic, retain) NSArray *activatedConstraints;
@property (nonatomic) bool alwaysShowsMonogram;
@property (nonatomic) double constrainedMaxHeight;
@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastViewWidth;
@property (nonatomic, readonly) double maxHeight;
@property (nonatomic, readonly) double minHeight;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, copy) NSDictionary *nameTextAttributes;
@property (nonatomic) bool needsLabelSizeCalculation;
@property (retain) NSLayoutConstraint *photoHeightConstraint;
@property (retain) NSLayoutConstraint *photoTopConstraint;
@property (nonatomic, readonly) CNContactPhotoView *photoView;
@property (nonatomic) <CNPresenterDelegate> *presenterDelegate;
@property (nonatomic) bool shouldShowBelowNavigationTitle;
@property (nonatomic) bool shouldUseConstrainedMaxHeight;
@property (nonatomic) bool showMonogramsOnly;
@property (nonatomic, retain) CNContactHeaderViewSizeAttributes *sizeAttributes;
@property (readonly) Class superclass;
@property (nonatomic) bool visibleToScrollViews;

+ (struct CGSize { double x1; double x2; })defaultPhotoSize;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(bool)arg1;
+ (id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(bool)arg2 shouldAllowImageDrops:(bool)arg3 monogramOnly:(bool)arg4;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)activatedConstraints;
- (bool)alwaysShowsMonogram;
- (void)calculateLabelSizesIfNeeded;
- (bool)canBecomeFirstResponder;
- (double)constrainedMaxHeight;
- (id)contactStyle;
- (id)contactViewCache;
- (id)contacts;
- (double)currentHeightPercentMaximized;
- (double)currentHeightPercentMaximizedForMaxHeight:(double)arg1;
- (double)currentHeightPercentMaximizedForPhoto;
- (void)dealloc;
- (double)defaultMaxBaseHeight;
- (double)defaultMaxHeight;
- (id)delegate;
- (id)descriptorForRequiredKeys;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 monogrammerStyle:(long long)arg3 shouldAllowTakePhotoAction:(bool)arg4 shouldAllowImageDrops:(bool)arg5 monogramOnly:(bool)arg6 delegate:(id)arg7;
- (double)lastViewWidth;
- (void)layoutSubviews;
- (double)maxHeight;
- (double)minHeight;
- (id)nameLabel;
- (id)nameTextAttributes;
- (bool)needsLabelSizeCalculation;
- (id)photoHeightConstraint;
- (id)photoTopConstraint;
- (id)photoView;
- (void)photoView:(id)arg1 didSaveImageDropToContact:(id)arg2;
- (void)photoViewDidUpdate:(id)arg1;
- (void)prepareForReuse;
- (id)presenterDelegate;
- (void)reloadDataIfNeeded;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (double)safeAreaPhotoOffset;
- (double)safeAreaTop;
- (void)setActivatedConstraints:(id)arg1;
- (void)setAlwaysShowsMonogram:(bool)arg1;
- (void)setConstrainedMaxHeight:(double)arg1;
- (void)setConstrainedMaxHeight:(double)arg1 enabled:(bool)arg2;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastViewWidth:(double)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setNeedsLabelSizeCalculation:(bool)arg1;
- (void)setNeedsReload;
- (void)setPhotoHeightConstraint:(id)arg1;
- (void)setPhotoTopConstraint:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;
- (void)setShouldShowBelowNavigationTitle:(bool)arg1;
- (void)setShouldUseConstrainedMaxHeight:(bool)arg1;
- (void)setShowMonogramsOnly:(bool)arg1;
- (void)setSizeAttributes:(id)arg1;
- (void)setVisibleToScrollViews:(bool)arg1;
- (bool)shouldShowBelowNavigationTitle;
- (bool)shouldUseConstrainedMaxHeight;
- (bool)showMonogramsOnly;
- (id)sizeAttributes;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateSizeDependentAttributes;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithNewContact:(id)arg1;
- (id)viewControllerForPhotoView:(id)arg1;
- (bool)visibleToScrollViews;

@end
