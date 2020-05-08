/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMEditorBottomToolbar : UIToolbar <PMEditorAutoEditCompletionActionDelegate> {
    bool  _autoEditingIsInProgress;
    UIBarButtonItem * _doneButtonItem;
    bool  _fromDuration;
    bool  _fromMusic;
    bool  _fromTitle;
    <PMPlayerControlling> * _playerController;
    bool  _showDoneCancelButtons;
    unsigned long long  _spinnerState;
    <PMEditorToolbarDelegate> * _toolbarDelegate;
}

@property (nonatomic) bool autoEditingIsInProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButtonItem;
@property (nonatomic) bool fromDuration;
@property (nonatomic) bool fromMusic;
@property (nonatomic) bool fromTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PMPlayerControlling> *playerController;
@property (nonatomic) bool showDoneCancelButtons;
@property (nonatomic) unsigned long long spinnerState;
@property (readonly) Class superclass;
@property (nonatomic) <PMEditorToolbarDelegate> *toolbarDelegate;

- (void).cxx_destruct;
- (id)_activityItem;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_cancelButtonItem;
- (void)_done:(id)arg1;
- (id)_doneActivityButtonRow;
- (id)_fixedSpaceItem;
- (id)_flexibleSpaceItem;
- (void)_handlePlayerDidBeginPlayingNotification:(id)arg1;
- (void)_handlePlayerDidDidPlayToEndTimeNotification:(id)arg1;
- (id)_pauseButtonItem;
- (id)_pauseButtonRow;
- (void)_play:(id)arg1;
- (id)_playActivityButtonRow;
- (id)_playButtonItem;
- (id)_playButtonRow;
- (void)_postAggDPlayerStatus:(bool)arg1;
- (void)_updateItemsAnimated:(bool)arg1;
- (void)autoEditingDidEnd;
- (bool)autoEditingIsInProgress;
- (void)autoEditingWillBegin;
- (void)cancelAutoEditWaitingBehavior;
- (void)dealloc;
- (id)doneButtonItem;
- (bool)fromDuration;
- (bool)fromMusic;
- (bool)fromTitle;
- (id)initWithCoder:(id)arg1;
- (void)pause:(id)arg1;
- (void)performAutoEditDidCompleteAction;
- (id)playerController;
- (void)setAutoEditingIsInProgress:(bool)arg1;
- (void)setDoneButtonItem:(id)arg1;
- (void)setFromDuration:(bool)arg1;
- (void)setFromMusic:(bool)arg1;
- (void)setFromTitle:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)setPlayerController:(id)arg1;
- (void)setShowDoneCancelButtons:(bool)arg1;
- (void)setSpinnerState:(unsigned long long)arg1;
- (void)setToolbarDelegate:(id)arg1;
- (bool)showDoneCancelButtons;
- (unsigned long long)spinnerState;
- (void)startAutoEditWaitingBehavior;
- (id)toolbarDelegate;
- (void)updateItems;

@end
