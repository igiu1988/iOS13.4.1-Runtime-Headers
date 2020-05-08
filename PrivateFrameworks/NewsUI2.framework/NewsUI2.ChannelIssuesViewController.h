/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.ChannelIssuesViewController : UIViewController <TSTabBarSplitViewAutoObserver, TUDeselectable, TUKeyCommandTraversable, TUPluggable> {
    void blueprintViewController;
    void eventHandler;
    void gradientView;
    void isBeingUsedAsPlugin;
    void offlineAlertControllerFactory;
    void pluggableDelegate;
    void styler;
}

@property (nonatomic) bool isBeingUsedAsPlugin;
@property (nonatomic) <TUPluggableDelegate> *pluggableDelegate;

- (void).cxx_destruct;
- (void)deselect;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initializeWithCompletion:(id /* block */)arg1;
- (bool)isBeingUsedAsPlugin;
- (id)pluggableDelegate;
- (void)relayoutWithCompletion:(id /* block */)arg1;
- (void)setIsBeingUsedAsPlugin:(bool)arg1;
- (void)setPluggableDelegate:(id)arg1;
- (void)startTraversingWithDirection:(long long)arg1;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
