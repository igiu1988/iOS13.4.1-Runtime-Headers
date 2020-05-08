/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.InCallControlsParticipantsTableViewController : UITableViewController {
    void capabilitiesChecker;
    void groupName;
    void inCallControlsParticipantsTableViewControllerDelegate;
    void isLegacy;
    void mode;
    void participants;
    void participantsViewControllerDelegate;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)handleContentSizeCategoryDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
