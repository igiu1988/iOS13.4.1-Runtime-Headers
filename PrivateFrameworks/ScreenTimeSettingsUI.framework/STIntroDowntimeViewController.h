/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
 */

@interface STIntroDowntimeViewController : STTableWelcomeController {
    id /* block */  _continueHandler;
    STIntroductionModel * _model;
}

@property (readonly, copy) id /* block */ continueHandler;
@property (readonly) STIntroductionModel *model;
@property (nonatomic, retain) STIntroDowntimeTableViewController *tableViewController;

- (void).cxx_destruct;
- (void)_notNow:(id)arg1;
- (void)_setDowntime:(id)arg1;
- (id /* block */)continueHandler;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(id /* block */)arg2;
- (void)loadView;
- (id)model;
- (void)setTableViewController:(id)arg1;
- (id)tableViewController;

@end
