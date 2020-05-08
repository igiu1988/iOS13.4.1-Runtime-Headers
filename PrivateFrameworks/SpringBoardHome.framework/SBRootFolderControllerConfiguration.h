/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBRootFolderControllerConfiguration : SBFolderControllerConfiguration {
    bool  _dockExternal;
    bool  _dockPinnedForRotation;
    bool  _forSnapshot;
    unsigned long long  _ignoresOverscrollOnFirstPageOrientations;
    UIViewController<SBHLegibility> * _portraitHeaderViewController;
    UIViewController * _pullDownSearchViewController;
    bool  _showsDoneButtonWhileEditing;
    unsigned long long  _sidebarAllowedOrientations;
    bool  _sidebarPinned;
    UIViewController<SBHSidebarProvider> * _sidebarViewController;
    bool  _sidebarVisible;
    UIViewController<SBHLegibility> * _todayViewController;
}

@property (getter=isDockExternal, nonatomic) bool dockExternal;
@property (getter=isDockPinnedForRotation, nonatomic) bool dockPinnedForRotation;
@property (getter=isForSnapshot, nonatomic) bool forSnapshot;
@property (nonatomic) unsigned long long ignoresOverscrollOnFirstPageOrientations;
@property (nonatomic, retain) UIViewController<SBHLegibility> *portraitHeaderViewController;
@property (nonatomic, retain) UIViewController *pullDownSearchViewController;
@property (nonatomic) bool showsDoneButtonWhileEditing;
@property (nonatomic) unsigned long long sidebarAllowedOrientations;
@property (getter=isSidebarPinned, nonatomic) bool sidebarPinned;
@property (nonatomic, retain) UIViewController<SBHSidebarProvider> *sidebarViewController;
@property (getter=isSidebarVisible, nonatomic) bool sidebarVisible;
@property (nonatomic, retain) UIViewController<SBHLegibility> *todayViewController;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)ignoresOverscrollOnFirstPageOrientations;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (bool)isDockExternal;
- (bool)isDockPinnedForRotation;
- (bool)isForSnapshot;
- (bool)isSidebarPinned;
- (bool)isSidebarVisible;
- (id)portraitHeaderViewController;
- (id)pullDownSearchViewController;
- (void)setDockExternal:(bool)arg1;
- (void)setDockPinnedForRotation:(bool)arg1;
- (void)setForSnapshot:(bool)arg1;
- (void)setIgnoresOverscrollOnFirstPageOrientations:(unsigned long long)arg1;
- (void)setPortraitHeaderViewController:(id)arg1;
- (void)setPullDownSearchViewController:(id)arg1;
- (void)setShowsDoneButtonWhileEditing:(bool)arg1;
- (void)setSidebarAllowedOrientations:(unsigned long long)arg1;
- (void)setSidebarPinned:(bool)arg1;
- (void)setSidebarViewController:(id)arg1;
- (void)setSidebarVisible:(bool)arg1;
- (void)setTodayViewController:(id)arg1;
- (bool)showsDoneButtonWhileEditing;
- (unsigned long long)sidebarAllowedOrientations;
- (id)sidebarViewController;
- (id)todayViewController;

@end
