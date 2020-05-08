/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFTimeOffsetPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIPickerView * _currentPickerView;
    <WFTimeOffsetPickerViewControllerDelegate> * _delegate;
    unsigned long long  _event;
    NSArray * _pickerItems;
    NSArray * _sections;
    UITableView * _tableView;
    unsigned long long  _timeOffset;
}

@property (nonatomic, retain) UIPickerView *currentPickerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFTimeOffsetPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long event;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *pickerItems;
@property (nonatomic, readonly) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic) unsigned long long timeOffset;

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (id)currentPickerView;
- (id)delegate;
- (void)done:(id)arg1;
- (unsigned long long)event;
- (id)infoForSection:(long long)arg1;
- (id)initWithTimeTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2;
- (void)loadView;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pickerItems;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)sections;
- (void)setCurrentPickerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTimeOffset:(unsigned long long)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (unsigned long long)timeOffset;

@end
