/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptNavigationSimulator : SUScriptObject <UINavigationControllerDelegate> {
    NSMutableArray * _enqueuedTransitions;
    long long  _initialIndex;
    long long  _lastVisibleIndex;
    UINavigationController * _navigationController;
    WebScriptObject * _transitionCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *enqueuedTransitions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long indexCount;
@property (nonatomic) long long initialIndex;
@property (nonatomic) long long lastVisibleIndex;
@property (nonatomic) UINavigationController *navigationController;
@property (readonly) Class superclass;
@property (nonatomic, retain) WebScriptObject *transitionCallback;
@property (nonatomic, readonly) long long visibleIndex;

+ (void)initialize;
+ (void)startTransition;
+ (void)stopTransition;
+ (bool)transitioning;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (void)_callCallbackWithWithTransition:(id)arg1;
- (id)_className;
- (void)_enqueueLoadingState:(id)arg1;
- (void)_handlePopFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id /* block */)_popHandler;
- (long long)_relativeIndexFromIndex:(long long)arg1;
- (void)_startNextTransition;
- (id)attributeKeys;
- (id)enqueuedTransitions;
- (long long)indexCount;
- (id)initWithNavigationController:(id)arg1;
- (long long)initialIndex;
- (long long)lastVisibleIndex;
- (id)navigationController;
- (void)popToViewAtIndex:(long long)arg1 completion:(id)arg2;
- (void)popViewWithCompletion:(id)arg1;
- (void)pushViewWithCompletion:(id)arg1;
- (id)scriptAttributeKeys;
- (void)setEnqueuedTransitions:(id)arg1;
- (void)setIndexCount:(long long)arg1;
- (void)setInitialIndex:(long long)arg1;
- (void)setLastVisibleIndex:(long long)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setTransitionCallback:(id)arg1;
- (void)setVisibleIndex:(long long)arg1;
- (id)transitionCallback;
- (long long)visibleIndex;

@end
