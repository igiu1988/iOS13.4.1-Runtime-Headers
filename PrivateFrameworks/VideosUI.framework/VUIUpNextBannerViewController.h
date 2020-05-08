/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIUpNextBannerViewController : UIViewController <TVAppTemplateImpressionable, TVMediaProviding, __TVShelfViewControllerDelegate> {
    unsigned long long  _host;
    TVObservableEventController * _observableEventController;
    TVMediaInfo * _selectedMediaInfo;
    _TVShelfViewController * _shelfViewController;
    IKViewElement * _viewElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long host;
@property (nonatomic, retain) TVObservableEventController *observableEventController;
@property (nonatomic, retain) TVMediaInfo *selectedMediaInfo;
@property (nonatomic, retain) _TVShelfViewController *shelfViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) IKViewElement *viewElement;
@property (nonatomic, readonly) UIView *visualEffectView;

- (void).cxx_destruct;
- (id)_focusedMediaInfoForElementAtIndex:(long long)arg1;
- (id)_selectedMediaInfoForEvent:(id)arg1 forElementAtIndex:(long long)arg2;
- (void)addObserver:(id)arg1 forEvent:(id)arg2;
- (void)dealloc;
- (unsigned long long)host;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHost:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)observableEventController;
- (id)preferredFocusEnvironments;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;
- (id)selectedMediaInfo;
- (void)setObservableEventController:(id)arg1;
- (void)setSelectedMediaInfo:(id)arg1;
- (void)setShelfViewController:(id)arg1;
- (void)setViewElement:(id)arg1;
- (id)shelfViewController;
- (void)shelfViewController:(id)arg1 didPlayItemAtIndexPath:(id)arg2;
- (void)shelfViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)shelfViewController:(id)arg1 didSettleOnItemAtIndexPath:(id)arg2;
- (void)updateWithElement:(id)arg1;
- (id)viewElement;
- (id)visualEffectView;

@end
