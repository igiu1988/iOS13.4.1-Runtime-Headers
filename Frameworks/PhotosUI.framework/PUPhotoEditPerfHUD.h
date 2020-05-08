/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditPerfHUD : UIView {
    UILabel * _autoCalcTimerLabel;
    struct { 
        bool isEnabled; 
        double startTime; 
        double endTime; 
    }  _autoCalcTimerState;
    UILabel * _clockLabel;
    UILabel * _detailLabel;
    UILabel * _filterTimerLabel;
    struct { 
        bool isEnabled; 
        double startTime; 
        double endTime; 
    }  _filterTimerState;
    UILabel * _mainTimerLabel;
    struct { 
        bool isEnabled; 
        double startTime; 
        double endTime; 
    }  _mainTimerState;
    UILabel * _resourceCheckingLabel;
    struct { 
        bool isEnabled; 
        double startTime; 
        double endTime; 
    }  _resourceCheckingState;
    UILabel * _resourceDownloadingLabel;
    struct { 
        bool isEnabled; 
        double startTime; 
        double endTime; 
    }  _resourceDownloadingState;
    UILabel * _resourceTimerLabel;
    struct { 
        bool isEnabled; 
        double startTime; 
        double endTime; 
    }  _resourceTimerState;
    UILabel * _saveTimerLabel;
    struct { 
        bool isEnabled; 
        double startTime; 
        double endTime; 
    }  _saveTimerState;
    NSTimer * _timer;
}

@property (nonatomic, retain) UILabel *autoCalcTimerLabel;
@property (nonatomic) struct { bool x1; double x2; double x3; } autoCalcTimerState;
@property (nonatomic, retain) UILabel *clockLabel;
@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, retain) UILabel *filterTimerLabel;
@property (nonatomic) struct { bool x1; double x2; double x3; } filterTimerState;
@property (nonatomic, retain) UILabel *mainTimerLabel;
@property (nonatomic) struct { bool x1; double x2; double x3; } mainTimerState;
@property (nonatomic, retain) UILabel *resourceCheckingLabel;
@property (nonatomic) struct { bool x1; double x2; double x3; } resourceCheckingState;
@property (nonatomic, retain) UILabel *resourceDownloadingLabel;
@property (nonatomic) struct { bool x1; double x2; double x3; } resourceDownloadingState;
@property (nonatomic, retain) UILabel *resourceTimerLabel;
@property (nonatomic) struct { bool x1; double x2; double x3; } resourceTimerState;
@property (nonatomic, retain) UILabel *saveTimerLabel;
@property (nonatomic) struct { bool x1; double x2; double x3; } saveTimerState;
@property (nonatomic, retain) NSTimer *timer;

+ (void)_updateLabel:(id)arg1 withState:(struct { bool x1; double x2; double x3; })arg2 prefix:(id)arg3;

- (void).cxx_destruct;
- (bool)_needsTimer;
- (void)_timerTick;
- (void)_updateAutoCalcTimerLabel;
- (void)_updateFilterTimerLabel;
- (void)_updateMainTimerLabel;
- (void)_updateResourceCheckingLabel;
- (void)_updateResourceDownloadingLabel;
- (void)_updateResourceTimerLabel;
- (void)_updateSaveTimerLabel;
- (void)_updateTimer;
- (id)autoCalcTimerLabel;
- (struct { bool x1; double x2; double x3; })autoCalcTimerState;
- (id)clockLabel;
- (void)dealloc;
- (id)detailLabel;
- (id)detailText;
- (id)filterTimerLabel;
- (struct { bool x1; double x2; double x3; })filterTimerState;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mainTimerLabel;
- (struct { bool x1; double x2; double x3; })mainTimerState;
- (id)resourceCheckingLabel;
- (struct { bool x1; double x2; double x3; })resourceCheckingState;
- (id)resourceDownloadingLabel;
- (struct { bool x1; double x2; double x3; })resourceDownloadingState;
- (id)resourceTimerLabel;
- (struct { bool x1; double x2; double x3; })resourceTimerState;
- (id)saveTimerLabel;
- (struct { bool x1; double x2; double x3; })saveTimerState;
- (void)setAutoCalcTimerLabel:(id)arg1;
- (void)setAutoCalcTimerState:(struct { bool x1; double x2; double x3; })arg1;
- (void)setClockLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setFilterTimerLabel:(id)arg1;
- (void)setFilterTimerState:(struct { bool x1; double x2; double x3; })arg1;
- (void)setMainTimerLabel:(id)arg1;
- (void)setMainTimerState:(struct { bool x1; double x2; double x3; })arg1;
- (void)setResourceCheckingLabel:(id)arg1;
- (void)setResourceCheckingState:(struct { bool x1; double x2; double x3; })arg1;
- (void)setResourceDownloadingLabel:(id)arg1;
- (void)setResourceDownloadingState:(struct { bool x1; double x2; double x3; })arg1;
- (void)setResourceTimerLabel:(id)arg1;
- (void)setResourceTimerState:(struct { bool x1; double x2; double x3; })arg1;
- (void)setSaveTimerLabel:(id)arg1;
- (void)setSaveTimerState:(struct { bool x1; double x2; double x3; })arg1;
- (void)setTimer:(id)arg1;
- (void)startAutoCalcTimer;
- (void)startFilterTimer;
- (void)startMainTimer;
- (void)startMainTimerWithTime:(double)arg1;
- (void)startResourceCheckingTimer;
- (void)startResourceDownloadingTimer;
- (void)startResourceLoadingTimer;
- (void)startSaveTimer;
- (void)stopAndClearAllTimers;
- (void)stopAutoCalcTimer;
- (void)stopFilterTimer;
- (void)stopMainTimer;
- (void)stopResourceCheckingTimer;
- (void)stopResourceDownloadingTimer;
- (void)stopResourceLoadingTimer;
- (void)stopSaveTimer;
- (id)timer;

@end
