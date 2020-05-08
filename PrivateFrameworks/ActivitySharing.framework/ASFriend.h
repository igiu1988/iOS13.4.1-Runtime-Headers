/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASFriend : NSObject <NSCopying> {
    NSArray * _competitions;
    ASContact * _contact;
    NSNumber * _currentCacheIndex;
    NSDictionary * _friendAchievements;
    NSDictionary * _friendWorkouts;
    NSDictionary * _snapshots;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) bool canSeeMyActivityData;
@property (nonatomic, readonly) ASCompetition *competitionPendingAcceptance;
@property (nonatomic, retain) NSArray *competitions;
@property (nonatomic, readonly) NSArray *completedCompetitions;
@property (nonatomic, retain) ASContact *contact;
@property (nonatomic, readonly) NSNumber *currentCacheIndex;
@property (nonatomic, readonly) ASCompetition *currentCompetition;
@property (nonatomic, readonly) NSDateComponents *currentDateComponents;
@property (nonatomic, readonly) ASCompetition *currentOrMostRecentCompetition;
@property (nonatomic, readonly) _HKFitnessFriendActivitySnapshot *currentSnapshot;
@property (nonatomic, readonly) _HKFitnessFriendActivitySnapshot *currentSnapshotWithGoalsCarriedForward;
@property (nonatomic, readonly) NSDate *dateActivityDataInitiallyBecameVisibleToMe;
@property (nonatomic, readonly) NSDate *dateForLatestDataHidden;
@property (nonatomic, readonly) NSDate *dateForLatestDataHiddenFromMe;
@property (nonatomic, readonly) NSDate *dateForLatestIncomingCompetitionRequest;
@property (nonatomic, readonly) NSDate *dateForLatestOutgoingCompetitionRequest;
@property (nonatomic, readonly) NSDate *dateForLatestOutgoingInviteRequest;
@property (nonatomic, readonly) NSDate *dateForLatestRelationshipStart;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSDate *earliestCompetitionVictoryOrPotentialVictoryDate;
@property (nonatomic, retain) NSDictionary *friendAchievements;
@property (nonatomic, retain) NSDictionary *friendWorkouts;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) bool hasCompetitionHistory;
@property (nonatomic, readonly) bool hasCompetitionRequestFromMe;
@property (nonatomic, readonly) bool hasCompletedCompetition;
@property (nonatomic, readonly) bool hasCompletedFirstDayOfCurrentCompetition;
@property (nonatomic, readonly) bool hasInviteRequestFromMe;
@property (nonatomic, readonly) bool hasPendingCompetitionRequestFromMe;
@property (nonatomic, readonly) bool ignoredCompetitionRequestFromMe;
@property (nonatomic, readonly) bool inviteRequestToMeWasAccepted;
@property (nonatomic, readonly) bool isActivityDataCurrentlyVisibleToMe;
@property (nonatomic, readonly) bool isAwaitingCompetitionResponseFromMe;
@property (nonatomic, readonly) bool isAwaitingInviteResponseFromMe;
@property (nonatomic, readonly) bool isCompetitionActive;
@property (nonatomic, readonly) bool isCurrentlyHidingActivityDataFromMe;
@property (nonatomic, readonly) bool isEligibleToReceiveCompetitionRequest;
@property (nonatomic, readonly) bool isFriendshipCurrentlyActive;
@property (nonatomic, readonly) bool isMuted;
@property (nonatomic, readonly) bool isMyActivityDataCurrentlyHidden;
@property (getter=isMe, nonatomic, readonly) bool me;
@property (nonatomic, readonly) _HKFitnessFriendActivitySnapshot *mostRecentSnapshot;
@property (nonatomic, readonly) ASCompetition *mostRecentlyCompletedCompetition;
@property (nonatomic, readonly) unsigned long long numberOfCompetitionWinsAgainstMe;
@property (nonatomic, readonly) unsigned long long numberOfCompetitionWinsByMe;
@property (nonatomic, readonly) bool sentInviteRequestToMe;
@property (nonatomic, retain) NSDictionary *snapshots;
@property (nonatomic, readonly) bool supportsCompetitions;
@property (nonatomic, readonly) NSTimeZone *timeZone;

// Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing

+ (id)friendWithCodableFriend:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (id)_emptySnapshotWithGoalsCarriedForwardForSnapshotIndex:(long long)arg1;
- (bool)canSeeMyActivityData;
- (id)codableFriendIncludingCloudKitFields:(bool)arg1;
- (id)competitionPendingAcceptance;
- (id)competitions;
- (id)completedCompetitions;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentCacheIndex;
- (id)currentCompetition;
- (id)currentDateComponents;
- (id)currentOrMostRecentCompetition;
- (id)currentSnapshot;
- (id)currentSnapshotWithGoalsCarriedForward;
- (id)dateActivityDataInitiallyBecameVisibleToMe;
- (id)dateForLatestDataHidden;
- (id)dateForLatestDataHiddenFromMe;
- (id)dateForLatestIncomingCompetitionRequest;
- (id)dateForLatestOutgoingCompetitionRequest;
- (id)dateForLatestOutgoingInviteRequest;
- (id)dateForLatestRelationshipStart;
- (id)description;
- (id)displayName;
- (id)earliestCompetitionVictoryOrPotentialVictoryDate;
- (id)friendAchievements;
- (id)friendWorkouts;
- (id)fullName;
- (bool)hasCompetitionHistory;
- (bool)hasCompetitionRequestFromMe;
- (bool)hasCompletedCompetition;
- (bool)hasCompletedFirstDayOfCurrentCompetition;
- (bool)hasInviteRequestFromMe;
- (bool)hasPendingCompetitionRequestFromMe;
- (bool)ignoredCompetitionRequestFromMe;
- (id)initWithActivitySnapshots:(id)arg1 friendAchievements:(id)arg2 friendWorkouts:(id)arg3 contact:(id)arg4 competitions:(id)arg5;
- (bool)inviteRequestToMeWasAccepted;
- (bool)isActivityDataCurrentlyVisibleToMe;
- (bool)isActivityDataVisibleToMeForDate:(id)arg1;
- (bool)isAwaitingCompetitionResponseFromMe;
- (bool)isAwaitingInviteResponseFromMe;
- (bool)isCompetitionActive;
- (bool)isCurrentlyHidingActivityDataFromMe;
- (bool)isEligibleToReceiveCompetitionRequest;
- (bool)isFriendshipCurrentlyActive;
- (bool)isHidingActivityDataFromMeForDate:(id)arg1;
- (bool)isMe;
- (bool)isMuted;
- (bool)isMyActivityDataCurrentlyHidden;
- (id)mostRecentSnapshot;
- (id)mostRecentlyCompletedCompetition;
- (unsigned long long)numberOfCompetitionWinsAgainstMe;
- (unsigned long long)numberOfCompetitionWinsByMe;
- (bool)sentInviteRequestToMe;
- (void)setCompetitions:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setFriendAchievements:(id)arg1;
- (void)setFriendWorkouts:(id)arg1;
- (void)setSnapshots:(id)arg1;
- (id)snapshotWithGoalsCarriedForwardForSnapshotIndex:(id)arg1;
- (id)snapshots;
- (bool)supportsCompetitions;
- (id)timeZone;

// Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI

- (id)_competitionStartMessage:(id)arg1 replacingNameAndDatePlaceholdersForCompetitionStartDate:(id)arg2;
- (id)as_competitionAcceptConfirmationMessageForCompetition:(id)arg1;
- (id)as_competitionAcceptConfirmationTitle;
- (id)as_competitionAcceptErrorMessage;
- (id)as_competitionAcceptedNotificationMessageForCompetition:(id)arg1;
- (id)as_competitionAcceptedNotificationTitle;
- (id)as_competitionLearnMoreDetailAction;
- (id)as_competitionLearnMoreDetailMessage;
- (id)as_competitionLearnMoreFullDescription;
- (id)as_competitionLearnMoreIntroduction;
- (id)as_competitionLearnMorePopupAction;
- (id)as_competitionLearnMoreTitle;
- (id)as_competitionReceivedHidingAcceptAction;
- (id)as_competitionReceivedHidingWarningMessage;
- (id)as_competitionReceivedNotificationAcceptAction;
- (id)as_competitionReceivedNotificationMessage;
- (id)as_competitionReceivedNotificationTitle;
- (id)as_competitionRequestDurationRemainingString;
- (id)as_competitionSendConfirmationMessage;
- (id)as_competitionSendConfirmationSendAction;
- (id)as_competitionSendConfirmationTitle;
- (id)as_competitionSendErrorMessage;
- (id)as_competitionStageString;
- (id)as_competitionStatusBreadcrumbString;
- (id)as_detailedSharingDurationString;
- (id)as_friendListNameStringWithDotPrefix:(id)arg1 keyColor:(id)arg2;
- (id)as_invitedDurationString;
- (id)as_myCompetitionScoreStringWithContext:(id)arg1 color:(id)arg2;
- (id)as_opponentCompetitionScoreStringWithContext:(id)arg1 color:(id)arg2;
- (id)as_simpleHiddenFromString;
- (id)as_simpleSharingDurationString;

@end
