/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck> {
    NSDictionary * _userPresenceMap;
}

@property (nonatomic, readonly) NSDictionary *userPresenceMap;

- (void).cxx_destruct;
- (bool)areUsersAtHome:(id)arg1;
- (bool)areUsersNotAtHome:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPresenceByPairingIdentity:(id)arg1;
- (id)initWithPresenceByUserId:(id)arg1;
- (bool)isAnyUserAtHome;
- (bool)isEqual:(id)arg1;
- (bool)isNoUserAtHome;
- (bool)isUserAtHome:(id)arg1;
- (bool)isUserNotAtHome:(id)arg1;
- (id)regionForUser:(id)arg1;
- (id)userPresenceMap;

@end
