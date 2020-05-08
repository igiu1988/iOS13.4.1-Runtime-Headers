/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLocalPlayer : GKPlayer <GKLocalPlayerAuthenticationUIPersonality, GKSavedGameListener, NSCoding, NSSecureCoding> {
    GKInvite * _acceptedInvite;
    double  _authStartTimeStamp;
    bool  _authenticated;
    unsigned long long  _authenticationType;
    UIAlertView * _currentAlert;
    NSInvocation * _currentFriendRequestInvocation;
    bool  _didAuthenticate;
    bool  _enteringForeground;
    long long  _environment;
    GKEventEmitter<GKLocalPlayerListenerPrivate> * _eventEmitter;
    UIAlertView * _loginAlertView;
    bool  _newToGameCenter;
    bool  _shouldPreserveOnboardingUI;
    bool  _showingInGameUI;
    id /* block */  _validateAccountCompletionHandler;
    bool  _validatingAccount;
}

@property (nonatomic, retain) GKInvite *acceptedInvite;
@property (nonatomic, retain) NSString *accountName;
@property (nonatomic, retain) UIViewController *activeViewController;
@property (nonatomic, readonly) bool allowNearbyMultiplayer;
@property (nonatomic) bool appIsInBackground;
@property (nonatomic) double authStartTimeStamp;
@property (nonatomic, copy) id /* block */ authenticateHandler;
@property (getter=isAuthenticated, nonatomic) bool authenticated;
@property (getter=isAuthenticating, nonatomic, readonly) bool authenticating;
@property (nonatomic) unsigned long long authenticationType;
@property (getter=isAvatarEditingRestricted, nonatomic, readonly) bool avatarEditingRestricted;
@property (nonatomic) UIAlertView *currentAlert;
@property (nonatomic, retain) NSInvocation *currentFriendRequestInvocation;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultNickname, nonatomic) bool defaultNickname;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didAuthenticate;
@property (nonatomic) bool enteringForeground;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, retain) GKEventEmitter<GKLocalPlayerListenerPrivate> *eventEmitter;
@property (nonatomic, readonly) NSString *facebookUserID;
@property (getter=isFindable, nonatomic, readonly) bool findable;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *iCloudUserID;
@property (nonatomic) bool insideAuthenticatorInvocation;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) UIAlertView *loginAlertView;
@property (getter=isMultiplayerGamingRestricted, nonatomic, readonly) bool multiplayerGamingRestricted;
@property (getter=isNewToGameCenter, nonatomic) bool newToGameCenter;
@property (getter=isPurpleBuddyAccount, nonatomic) bool purpleBuddyAccount;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (nonatomic) bool shouldPreserveOnboardingUI;
@property (getter=isShowingInGameUI, nonatomic) bool showingInGameUI;
@property (nonatomic, retain) UIViewController<GKAuthenticateViewController> *signInViewController;
@property (readonly) Class superclass;
@property (getter=isUnderage, nonatomic, readonly) bool underage;
@property (nonatomic, copy) id /* block */ validateAccountCompletionHandler;
@property (nonatomic) bool validatingAccount;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_localPlayersFromInternals:(id)arg1 authenticated:(bool)arg2;
+ (void)_sendPlayerAuthAPINotificationForLoggedInPlayerInternals:(id)arg1 loggedOutPlayerInternals:(id)arg2 oldPrimary:(id)arg3 newPrimary:(id)arg4;
+ (void)authenticateWithUsername:(id)arg1 password:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)authenticatedLocalPlayers;
+ (void)authenticatedLocalPlayersDidChange:(id)arg1 complete:(id /* block */)arg2;
+ (id)authenticatedLocalPlayersFiltered:(long long)arg1;
+ (id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1;
+ (id)local;
+ (id)localPlayer;
+ (id)localPlayerAccessQueue;
+ (id)localPlayerForCredential:(id)arg1;
+ (id)localPlayers;
+ (void)performAsync:(id /* block */)arg1;
+ (void)performSync:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void)_loadFriendPlayersWithCompletionHandler:(id /* block */)arg1;
- (void)_startAuthenticationForExistingPrimaryPlayer;
- (void)acceptFriendRequestWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (id)acceptedInvite;
- (bool)appIsInBackground;
- (double)authStartTimeStamp;
- (id /* block */)authenticateHandler;
- (void)authenticateWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)authenticationType;
- (void)callAuthHandlerWithError:(id)arg1;
- (void)cancelFriendRequestWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)cancelGameInvite:(id)arg1;
- (void)createFriendRequestWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (id)currentAlert;
- (id)currentFriendRequestInvocation;
- (void)dealloc;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)didAuthenticate;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)enteringForeground;
- (long long)environment;
- (id)eventEmitter;
- (void)fetchCustomTournamentInvite;
- (void)fetchItemsForIdentityVerificationSignature:(id /* block */)arg1;
- (void)fetchMultiplayerGameInvite;
- (void)fetchSavedGamesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchTurnBasedEvent;
- (id)friends;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(id /* block */)arg1;
- (void)getPlayerIDFromFriendCode:(id)arg1 handler:(id /* block */)arg2;
- (bool)hasEmailAddress:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)insideAuthenticatorInvocation;
- (void)inviteeAcceptedGameInviteWithNotification:(id)arg1;
- (void)inviteeDeclinedGameInviteWithNotification:(id)arg1;
- (bool)isAuthenticated;
- (bool)isAvatarEditingRestricted;
- (bool)isMultiplayerGamingRestricted;
- (bool)isNewToGameCenter;
- (bool)isShowingInGameUI;
- (void)loadChallengableFriendsWithCompletionHandler:(id /* block */)arg1;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(id /* block */)arg1;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(id /* block */)arg1;
- (void)loadFriendPlayersWithCompletionHandler:(id /* block */)arg1;
- (void)loadFriendsWithCompletionHandler:(id /* block */)arg1;
- (void)loadRecentPlayersWithCompletionHandler:(id /* block */)arg1;
- (id)loginAlertView;
- (void)registerListener:(id)arg1;
- (void)removeAllFriendsWithBlock:(id /* block */)arg1;
- (void)removeFriend:(id)arg1 block:(id /* block */)arg2;
- (void)reportAuthenticatingWithAuthKitInvocation;
- (void)reportAuthenticatingWithGreenBuddyInvocation;
- (void)reportAuthenticationErrorNoInternetConnection;
- (void)reportAuthenticationFailedForPlayer;
- (void)reportAuthenticationLoginCanceled;
- (void)reportAuthenticationPlayerAuthenticated;
- (void)reportAuthenticationStartForPlayer;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)scopedIDsArePersistent;
- (void)setAcceptedInvite:(id)arg1;
- (void)setAppIsInBackground:(bool)arg1;
- (void)setAuthStartTimeStamp:(double)arg1;
- (void)setAuthenticateHandler:(id /* block */)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticationType:(unsigned long long)arg1;
- (void)setCurrentAlert:(id)arg1;
- (void)setCurrentFriendRequestInvocation:(id)arg1;
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDidAuthenticate:(bool)arg1;
- (void)setEnteringForeground:(bool)arg1;
- (void)setEventEmitter:(id)arg1;
- (void)setInsideAuthenticatorInvocation:(bool)arg1;
- (void)setLoginAlertView:(id)arg1;
- (void)setNewToGameCenter:(bool)arg1;
- (void)setShouldPreserveOnboardingUI:(bool)arg1;
- (void)setShowingInGameUI:(bool)arg1;
- (void)setStatus:(id)arg1;
- (void)setStatus:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setValidateAccountCompletionHandler:(id /* block */)arg1;
- (void)setValidatingAccount:(bool)arg1;
- (void)setupForCloudSavedGames;
- (bool)shouldDisplayWelcomeBannerForPlayer:(id)arg1 lastAuthDate:(id)arg2 remoteUI:(bool)arg3 timeBetweenBanners:(double)arg4;
- (bool)shouldPreserveOnboardingUI;
- (void)showSettings;
- (void)signOutWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)updateFromLocalPlayer:(id)arg1;
- (void)updateLoginStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)validateAccountCompletionHandler;
- (bool)validatingAccount;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)accountName;
+ (id)authenticationPersonality;
+ (bool)hasAuthenticatedAccount;
+ (void)setAuthenticationPersonality:(id)arg1;
+ (id)sharedLocalPlayerAuthenticator;

- (void)_showActionRestrictedAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_showViewControllerForLegacyApps:(id)arg1;
- (void)_showWelcomeBanner;
- (id)activeViewController;
- (bool)alertUserInStoreDemoModeEnabled;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)authenticationDidCompleteWithError:(id)arg1;
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1;
- (void)authenticationShowSignInUIForLocalPlayer:(id)arg1;
- (void)cancelAuthentication;
- (id)deleteAvatarAlertControllerWithHandler:(id /* block */)arg1;
- (void)deleteMonogramsWithHandler:(id /* block */)arg1;
- (void)deletePhoto;
- (void)deletePhotoWithCompletionHandler:(id /* block */)arg1;
- (bool)isAuthenticating;
- (void)removeActiveViewControllerAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)rootViewController;
- (void)setActiveViewController:(id)arg1;
- (void)setPhoto:(id)arg1 avatarType:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setPhotoFromCNContactImage:(id)arg1 pendingContact:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setRootViewController:(id)arg1;
- (void)setSignInViewController:(id)arg1;
- (bool)shouldShowOnBoardingUI;
- (bool)shouldShowPersonalization;
- (bool)shouldShowPrivacyNotice;
- (void)showAlertForTag:(unsigned long long)arg1;
- (void)showAuthenticateViewControllerForGameCenter;
- (void)showCancelledAlertForPlayer:(id)arg1;
- (void)showCreateAccountRestrictedAlert;
- (void)showEditAccountRestrictedAlert;
- (void)showLoginFailedAlert;
- (void)showOnboardingUIFromViewController:(id)arg1;
- (void)showSignInAccountRestrictedAlert;
- (void)showViewController:(id)arg1 usingPresentingViewController:(id)arg2 wrapInNavController:(bool)arg3;
- (id)signInViewController;
- (void)startAuthenticationForExistingPrimaryPlayer;
- (void)startLegacyAuthenticationWithCompletionHandler:(id /* block */)arg1;
- (void)validateAccountWithCompletionHandler:(id /* block */)arg1;

@end