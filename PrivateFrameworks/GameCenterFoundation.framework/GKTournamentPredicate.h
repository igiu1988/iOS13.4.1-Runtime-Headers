/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTournamentPredicate : NSObject <NSSecureCoding> {
    NSPredicate * _predicate;
}

@property (nonatomic, retain) NSPredicate *predicate;

+ (id)predicateForAvailableAutoTournaments;
+ (id)predicateForAvailableCustomTournaments;
+ (id)predicateForAvailableTournaments;
+ (id)predicateForAvailableTournamentsPlayerRegisteredIn;
+ (id)predicateForPastAutoTournaments;
+ (id)predicateForPastCustomTournaments;
+ (id)predicateForPastTournaments;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)predicate;
- (void)setPredicate:(id)arg1;

@end
