/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@interface IMDCoreSpotlightChatParticipant : NSObject {
    CNContact * _contact;
    NSString * _handleID;
    bool  _isSender;
}

@property (nonatomic, readonly, retain) CNContact *contact;
@property (nonatomic, readonly, copy) NSString *handleID;
@property (nonatomic, readonly) bool isSender;

- (id)contact;
- (void)dealloc;
- (id)handleID;
- (id)initWithHandleID:(id)arg1 contact:(id)arg2 isSender:(bool)arg3;
- (bool)isSender;

@end