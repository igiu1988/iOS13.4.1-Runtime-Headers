/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowSettingsViewController : UIViewController <PUSlideshowMusicDelegate, PUSlideshowSettingsViewModelChangeObserver, PUSlideshowSpeedCellDelegate, PUSlideshowThemeDelegate, PUViewControllerSpecChangeObserver, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  __needsUpdateMediaItem;
    bool  __needsUpdateMusicOn;
    bool  __needsUpdateNavigationBar;
    bool  __needsUpdatePreset;
    bool  __needsUpdateSpec;
    bool  __needsUpdateTableView;
    PUSlideshowMediaItem * __pendingMediaItem;
    OKProducerPreset * __pendingPreset;
    <PUSlideshowSettingsViewControllerDelegate> * _delegate;
    PUSlideshowSession * _session;
    PUSlideshowSettingsViewModel * _settingsViewModel;
    bool  _shouldHideTableViewWhenViewWillDisappear;
    PUSlideshowSettingsViewControllerSpec * _spec;
    UITableView * _tableView;
}

@property (setter=_setNeedsUpdateMediaItem:, nonatomic) bool _needsUpdateMediaItem;
@property (setter=_setNeedsUpdateMusicOn:, nonatomic) bool _needsUpdateMusicOn;
@property (setter=_setNeedsUpdateNavigationBar:, nonatomic) bool _needsUpdateNavigationBar;
@property (setter=_setNeedsUpdatePreset:, nonatomic) bool _needsUpdatePreset;
@property (setter=_setNeedsUpdateSpec:, nonatomic) bool _needsUpdateSpec;
@property (setter=_setNeedsUpdateTableView:, nonatomic) bool _needsUpdateTableView;
@property (setter=_setPendingMediaItem:, nonatomic, retain) PUSlideshowMediaItem *_pendingMediaItem;
@property (setter=_setPendingPreset:, nonatomic, retain) OKProducerPreset *_pendingPreset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSlideshowSettingsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)PUSlideshowSpeedCell:(id)arg1 stepDurationDidChange:(double)arg2;
- (void)_didTapDoneButton:(id)arg1;
- (void)_invalidateMediaItem;
- (void)_invalidateMusicOn;
- (void)_invalidateNavigationBar;
- (void)_invalidatePreset;
- (void)_invalidateSpec;
- (void)_invalidateTableView;
- (bool)_needsUpdate;
- (bool)_needsUpdateMediaItem;
- (bool)_needsUpdateMusicOn;
- (bool)_needsUpdateNavigationBar;
- (bool)_needsUpdatePreset;
- (bool)_needsUpdateSpec;
- (bool)_needsUpdateTableView;
- (id)_pendingMediaItem;
- (id)_pendingPreset;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateMediaItem:(bool)arg1;
- (void)_setNeedsUpdateMusicOn:(bool)arg1;
- (void)_setNeedsUpdateNavigationBar:(bool)arg1;
- (void)_setNeedsUpdatePreset:(bool)arg1;
- (void)_setNeedsUpdateSpec:(bool)arg1;
- (void)_setNeedsUpdateTableView:(bool)arg1;
- (void)_setPendingMediaItem:(id)arg1;
- (void)_setPendingPreset:(id)arg1;
- (void)_synchronizedChangedSettings;
- (void)_toggleMusic:(id)arg1;
- (void)_toggleRepeat:(id)arg1;
- (void)_updateIfNeeded;
- (void)_updateMediaItemIfNeeded;
- (void)_updateMusicOnIfNeeded;
- (void)_updateNavigationBarIfNeeded;
- (void)_updatePresetIfNeeded;
- (void)_updateSpecIfNeeded;
- (void)_updateTableViewIfNeeded;
- (void)dealloc;
- (id)delegate;
- (id)initWithSession:(id)arg1;
- (void)musicPicker:(id)arg1 didPickMediaItem:(id)arg2;
- (void)musicPickerDidFinish:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)themePicker:(id)arg1 didPickPreset:(id)arg2;
- (void)themePickerDidFinish:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
