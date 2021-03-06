/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFPasswordAuditingViewController : _SFPasswordTableViewController <SFPasswordDetailViewControllerDelegate> {
    WBSAutoFillQuirksManager * _autoFillQuirksManager;
    <_SFPasswordAuditingViewControllerDelegate> * _delegate;
    NSArray * _flaggedPasswordCellData;
    WBSPasswordEvaluator * _passwordEvaluator;
    WBSSavedPasswordAuditor * _savedPasswordAuditor;
    WBSSavedPasswordStore * _savedPasswordStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFPasswordAuditingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadSavedPasswords;
- (id)_warningStringForPasswordCellData:(id)arg1;
- (id)delegate;
- (id)initWithSiteMetadataManager:(id)arg1 autoFillQuirksManager:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)passwordDetailViewControllerDidUpdate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
