/* Generated by EzioChiu.
 */

@protocol FKFriendGroupDelegate <NSObject>

@required

- (void)friendGroup:(FKFriendGroup *)arg1 didMoveFriends:(NSArray *)arg2;
- (void)friendGroup:(FKFriendGroup *)arg1 didRemoveFriend:(FKPerson *)arg2 atPosition:(unsigned long long)arg3;
- (void)friendGroup:(FKFriendGroup *)arg1 didSetFriend:(FKPerson *)arg2 atPosition:(unsigned long long)arg3;

@end
