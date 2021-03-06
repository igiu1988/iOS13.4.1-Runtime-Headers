/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMomentShareParticipantRecipient : PXRecipient {
    PHMomentShareParticipant * _momentShareParticipant;
}

@property (nonatomic, readonly) PHMomentShareParticipant *momentShareParticipant;

- (void).cxx_destruct;
- (id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4;
- (id)initWithMomentShareParticipant:(id)arg1;
- (id)momentShareParticipant;

@end
