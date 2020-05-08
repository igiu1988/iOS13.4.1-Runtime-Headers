/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackFormUIViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
    UITextView * _customFeedbackTextView;
    <PXFeedbackFormDelegate> * _delegate;
    NSArray * _negativeFeedbackKeys;
    NSMutableDictionary * _negativeFeedbackValues;
    NSArray * _positiveFeedbackKeys;
    NSMutableDictionary * _positiveFeedbackValues;
    UITableViewController * _tableViewController;
    bool  _userLikedIt;
    bool  _wantsCustomFeedbackSection;
    bool  _wantsPositiveFeedbackSection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PXFeedbackFormDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableViewController *tableViewController;

- (void).cxx_destruct;
- (long long)_feedbackFormSectionForSectionIndex:(long long)arg1;
- (id)_feedbackKeyForIndexPath:(id)arg1;
- (void)_handleDoneButtonWasPressedOnCustomFeedbackView;
- (bool)_isSelectedRow:(id)arg1 inSection:(long long)arg2;
- (void)_markCell:(id)arg1 asSelected:(bool)arg2;
- (void)_setSelectionStateForKey:(id)arg1 inSection:(long long)arg2 to:(bool)arg3;
- (void)cancelFeedback:(id)arg1;
- (id)delegate;
- (void)finishWithSuccess:(bool)arg1;
- (id)initWithDelegate:(id)arg1 positiveKeys:(id)arg2 negativeKeys:(id)arg3 wantsCustomFeedbackSection:(bool)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sendFeedback:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableViewController;
- (void)viewDidLoad;

@end
