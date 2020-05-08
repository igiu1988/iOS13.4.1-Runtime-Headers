/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAttachmentEditViewController : EKEditItemViewController <EKEventAttachmentCellControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _cellControllers;
    <EKEventAttachmentEditViewControllerDelegate> * _delegate;
    UITableView * _table;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKEventAttachmentEditViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attachments:(id)arg2 sourceIsManaged:(bool)arg3;
- (void)loadView;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
