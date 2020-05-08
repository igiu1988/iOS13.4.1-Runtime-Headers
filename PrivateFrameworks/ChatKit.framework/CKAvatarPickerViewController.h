/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarPickerViewController : UIViewController <CKAvatarPickerLayoutDelegate, CNAvatarViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    CKConversation * _conversation;
    long long  _indicatorType;
    CKAvatarPickerLayout * _layout;
    long long  _style;
    CNContactStore * _suggestionsEnabledContactStore;
    CKAvatarTitleCollectionReusableView * _titleView;
    NSMapTable * _visibleTitleViews;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indicatorType;
@property (nonatomic, retain) CKAvatarPickerLayout *layout;
@property (nonatomic) long long style;
@property (nonatomic, retain) CNContactStore *suggestionsEnabledContactStore;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKAvatarTitleCollectionReusableView *titleView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleViewFrame;
@property (nonatomic, retain) NSMapTable *visibleTitleViews;

- (void).cxx_destruct;
- (void)_animateInTitleView;
- (void)_animateOutTitleView;
- (void)_chatPropertiesChanged:(id)arg1;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)arg1;
- (id)_cutoutSupplementaryViewAtIndexPath:(id)arg1;
- (void)_handleAddressBookChange:(id)arg1;
- (void)_handleConversationIsFilteredChange:(id)arg1;
- (void)_handleConversationRecipientsDidChange:(id)arg1;
- (void)_handleGroupNameChange:(id)arg1;
- (void)_setTitle:(id)arg1 animated:(bool)arg2;
- (bool)_shouldUseBanner;
- (id)_titleSupplementaryViewAtIndexPath:(id)arg1;
- (id)avatarDisplayName;
- (bool)avatarPickerLayoutShouldShowTitle:(id)arg1;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (bool)chatIsReportedAsSpam;
- (int)chatWasDetectedAsSMSSpam;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)conversation;
- (void)dealloc;
- (bool)hasTitle;
- (long long)indicatorType;
- (id)initWithConversation:(id)arg1;
- (id)layout;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setAvatarPickerActive:(bool)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setIndicatorType:(long long)arg1;
- (void)setLayout:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSuggestionsEnabledContactStore:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setVisibleTitleViews:(id)arg1;
- (long long)style;
- (id)suggestionsEnabledContactStore;
- (id)titleView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleViewFrame;
- (void)updateContentsForConversation:(id)arg1;
- (id)visibleTitleViews;

@end
