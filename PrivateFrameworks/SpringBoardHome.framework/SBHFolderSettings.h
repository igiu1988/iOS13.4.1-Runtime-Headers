/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHFolderSettings : PTSettings {
    bool  _allowNestedFolders;
    double  _minPinchScale;
    bool  _oneColumnAtATime;
    bool  _pinchToClose;
    bool  _sortsIconsAlphabetically;
}

@property (nonatomic) bool allowNestedFolders;
@property (nonatomic) double minPinchScale;
@property (nonatomic) bool oneColumnAtATime;
@property (nonatomic) bool pinchToClose;
@property (nonatomic) bool sortsIconsAlphabetically;

+ (id)settingsControllerModule;

- (bool)allowNestedFolders;
- (double)minPinchScale;
- (bool)oneColumnAtATime;
- (bool)pinchToClose;
- (void)setAllowNestedFolders:(bool)arg1;
- (void)setDefaultValues;
- (void)setMinPinchScale:(double)arg1;
- (void)setOneColumnAtATime:(bool)arg1;
- (void)setPinchToClose:(bool)arg1;
- (void)setSortsIconsAlphabetically:(bool)arg1;
- (bool)sortsIconsAlphabetically;

@end
