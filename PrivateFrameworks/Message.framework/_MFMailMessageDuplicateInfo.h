/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFMailMessageDuplicateInfo : NSObject {
    NSMutableArray * _dates;
    NSMutableArray * _flags;
    MFMailboxProvider * _mailboxProvider;
    NSMutableSet * _mailboxes;
}

@property (nonatomic, retain) NSMutableArray *dates;
@property (nonatomic, retain) NSMutableArray *flags;
@property (nonatomic, retain) MFMailboxProvider *mailboxProvider;
@property (nonatomic, retain) NSMutableSet *mailboxes;

- (void).cxx_destruct;
- (void)addMessage:(id)arg1;
- (id)combinedDate;
- (id)combinedMailboxes;
- (id)combinedMessageFlags;
- (id)dates;
- (id)flags;
- (id)initWithMailboxProvider:(id)arg1;
- (id)mailboxProvider;
- (id)mailboxes;
- (void)setDates:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setMailboxProvider:(id)arg1;
- (void)setMailboxes:(id)arg1;

@end