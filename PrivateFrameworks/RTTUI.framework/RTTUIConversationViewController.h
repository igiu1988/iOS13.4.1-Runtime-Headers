/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

@interface RTTUIConversationViewController : UIViewController <RTTUIServiceCellDelegate, RTTUIUtteranceCellDelegate, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
    AXDispatchTimer * _arouetQuickCoalescer;
    NSDictionary * _asciiSubstitutions;
    CAShapeLayer * _bubbleLayer;
    TUCall * _call;
    RTTConversation * _conversation;
    NSString * _currentServiceMessage;
    RTTUtterance * _currentUtterance;
    UIButton * _gaButton;
    DDParsecCollectionViewController * _lookupController;
    AXDispatchTimer * _realTimeTimeout;
    bool  _serviceMessageVisible;
    UITableView * _tableView;
    RTTUITextView * _textView;
    AXDispatchTimer * _ttyPredictionsTimer;
    NSMutableCharacterSet * _unsupportedCharacterSet;
    NSMutableString * _voAnnouncementBuffer;
    AXDispatchTimer * _voAnnouncementTimer;
}

@property (nonatomic, retain) TUCall *call;
@property (nonatomic, retain) RTTConversation *conversation;
@property (nonatomic, retain) NSString *currentServiceMessage;
@property (nonatomic, retain) RTTUtterance *currentUtterance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DDParsecCollectionViewController *lookupController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

+ (bool)_validRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)viewControllerForCall:(id)arg1;
+ (id)viewControllerForConversation:(id)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_define:(id)arg1;
- (void)_processRealtimeTimeout;
- (void)_scrollToIndexPathIfNecessary:(id)arg1 animated:(bool)arg2;
- (void)_updateServiceCellWithString:(id)arg1;
- (id)addUtterance:(id)arg1;
- (id)call;
- (void)callDidConnect:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)cannedResponses;
- (id)cellAtIndexPath:(id)arg1;
- (id)contactDisplayString;
- (id)conversation;
- (id)currentCall;
- (id)currentContactPath;
- (id)currentServiceMessage;
- (id)currentUtterance;
- (void)dealloc;
- (void)deviceDidReceiveString:(id)arg1 forUtterance:(id)arg2;
- (void)gaButtonPressed:(id)arg1;
- (id)init;
- (id)inputTextView;
- (id)lastRowPathForUtterance:(id)arg1;
- (id)lookupController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)onHoldMessage;
- (void)realtimeTextDidChange;
- (void)replyCell:(id)arg1 didActivateWithReplyButtonType:(unsigned long long)arg2;
- (void)setCall:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setCurrentServiceMessage:(id)arg1;
- (void)setCurrentUtterance:(id)arg1;
- (void)setLookupController:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTextViewUtterance:(id)arg1;
- (void)setupTableView;
- (void)shareCallInfo:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)textViewUtterance;
- (void)toggleMute:(id)arg1;
- (void)updateCallActiveStatus:(bool)arg1;
- (void)updateGAButton:(bool)arg1;
- (void)updateMuteButton;
- (void)updateServiceCellWithString:(id)arg1;
- (void)updateTableViewSizeAnimated:(bool)arg1;
- (void)updateUtterance:(id)arg1 forIndexPath:(id)arg2;
- (void)updateViewForKeyboard:(id)arg1;
- (void)updateVoiceOverAnnouncement:(id)arg1;
- (void)utteranceCellDidUpdateContent:(id)arg1;
- (bool)utteranceIsSelected;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
