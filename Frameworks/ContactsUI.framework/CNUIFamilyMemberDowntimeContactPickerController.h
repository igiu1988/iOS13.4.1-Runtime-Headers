/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIFamilyMemberDowntimeContactPickerController : UIViewController <CNContactContentViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _allFamilyMembers;
    FAFamilyMember * _childFamilyMember;
    CNContactFormatter * _contactCardWarningFormatter;
    CNContactFormatter * _contactCellLabelFormatter;
    CNContactViewController * _contactViewController;
    CNUIFamilyMemberDowntimeContactDataSource * _dataSource;
    <CNUIFamilyMemberDowntimeContactPickerControllerDelegate> * _delegate;
    CNUIFamilyMemberContactsEditingStrategy * _editingStrategy;
    bool  _initialSelectionPerformed;
    CNContact * _preferredForNameMeContact;
    NSIndexPath * _presentedContactIndexPath;
    UISearchBar * _searchBar;
    UISearchController * _searchController;
    bool  _shouldPreselectFamilyMemberContacts;
    UITableView * _tableView;
}

@property (nonatomic, readonly) NSArray *allFamilyMembers;
@property (nonatomic, readonly) FAFamilyMember *childFamilyMember;
@property (nonatomic, readonly) CNContactFormatter *contactCardWarningFormatter;
@property (nonatomic, readonly) CNContactFormatter *contactCellLabelFormatter;
@property (nonatomic, retain) CNContactViewController *contactViewController;
@property (nonatomic, readonly) CNUIFamilyMemberDowntimeContactDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNUIFamilyMemberDowntimeContactPickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNUICoreContactEditingSession *editingSessionFromContactViewController;
@property (nonatomic, readonly) CNUIFamilyMemberContactsEditingStrategy *editingStrategy;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initialSelectionPerformed;
@property (nonatomic, readonly) CNContact *preferredForNameMeContact;
@property (nonatomic, retain) NSIndexPath *presentedContactIndexPath;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic) bool shouldPreselectFamilyMemberContacts;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

+ (id)descriptorForContactPropertiesSupportingPredicateEvaluation;
+ (id)familyCircle;

- (void).cxx_destruct;
- (id)allFamilyMembers;
- (void)cancel:(id)arg1;
- (id)childFamilyMember;
- (void)configureNavigationItem;
- (id)contactCardWarningFormatter;
- (id)contactCellLabelFormatter;
- (id)contactViewController;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)done:(id)arg1;
- (id)editingSessionFromContactViewController;
- (id)editingStrategy;
- (id)initWithChildFamilyMember:(id)arg1 allFamilyMembers:(id)arg2 contactStore:(id)arg3;
- (id)initWithChildFamilyMember:(id)arg1 allFamilyMembers:(id)arg2 contactStore:(id)arg3 editingStrategy:(id)arg4 showingFamilyMemberContacts:(bool)arg5;
- (bool)initialSelectionPerformed;
- (void)keyboardWillChange:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)preferredForNameMeContact;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentedContactIndexPath;
- (void)saveSanitizedSelectedContacts:(id)arg1;
- (id)searchBar;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)searchController;
- (void)setContactViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialSelectionPerformed:(bool)arg1;
- (void)setPresentedContactIndexPath:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setShouldPreselectFamilyMemberContacts:(bool)arg1;
- (void)setTableView:(id)arg1;
- (void)setupSearchBar;
- (void)setupSearchController;
- (void)setupTableView;
- (void)setupUI;
- (bool)shouldPreselectFamilyMemberContacts;
- (void)startObservingKeyboardChanges;
- (id)tableView;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)warningMessageForContact:(id)arg1;

@end
