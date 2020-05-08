/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKFriendRequestViewController : GKHostedViewController {
    NSObject<GKFriendRequestViewControllerDelegate> * _delegate;
    NSString * _friendCode;
    NSString * _friendSupportPageURL;
    UIViewController * _requestingViewController;
}

@property (nonatomic) NSObject<GKFriendRequestViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSString *friendCode;
@property (nonatomic, retain) NSString *friendSupportPageURL;
@property (nonatomic) UIViewController *requestingViewController;

+ (void)addFriends:(id)arg1;
+ (void)presentAlertControllerOn:(id)arg1 withMessage:(id)arg2 andTitle:(id)arg3;
+ (void)presentFriendRequestOn:(id)arg1 withFriendCode:(id)arg2 andFriendSupportPageURL:(id)arg3;

- (void).cxx_destruct;
- (id)_presentingViewController;
- (id)delegate;
- (id)friendCode;
- (id)friendSupportPageURL;
- (id)init;
- (void)notifyDelegateOnWillFinish;
- (id)requestingViewController;
- (id)serviceSideViewControllerClassName;
- (void)setDelegate:(id)arg1;
- (void)setFriendCode:(id)arg1;
- (void)setFriendSupportPageURL:(id)arg1;
- (void)setRequestingViewController:(id)arg1;

@end
