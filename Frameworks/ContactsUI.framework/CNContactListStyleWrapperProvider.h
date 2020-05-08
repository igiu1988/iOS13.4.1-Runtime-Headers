/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactListStyleWrapperProvider : CNContactListStyleDefautProvider {
    CNContactStyle * _contactStyle;
}

@property (nonatomic, readonly) CNContactStyle *contactStyle;

- (void).cxx_destruct;
- (id)bannerTitleTextColor;
- (id)cellBackgroundColor;
- (id)cellBackgroundSelectedColor;
- (bool)cellIsOpaque;
- (bool)cellIsVibrant;
- (id)cellNameTextColor;
- (id)cellNameTextEmphasisedFont;
- (id)cellNameTextFont;
- (id)cellNameTextHighlightedColor;
- (id)cellSearchResultTextColor;
- (id)cellSearchResultTextDisabledColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cellSeparatorInset;
- (id)contactStyle;
- (id)headerBackgroundColor;
- (id)headerIndexTextColor;
- (id)initWithContactStyle:(id)arg1;
- (bool)navigationBarIsTranslucent;
- (long long)navigationBarStyle;
- (id)searchBarBackgroundColor;
- (bool)searchBarIsTranslucent;
- (long long)searchBarKeyboardAppearance;
- (id)searchBarPlaceholderTextColor;
- (id)searchBarPlaceholderTextDisabledColor;
- (long long)searchBarStyle;
- (id)searchBarTextColor;
- (id)searchBarTextDisabledColor;
- (id)tableBackgroundColor;
- (id)tableBackgroundFilteredColor;
- (bool)tableIsOpaque;
- (unsigned long long)tableNoContactsAvailableStyle;
- (id)tableSectionIndexBackgroundColor;
- (id)tableSeparatorColor;
- (long long)tableSeparatorOverlayBlendMode;
- (long long)tableSeparatorStyle;

@end
