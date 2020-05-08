/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBChannelMembershipRecord : PBCodable <NSCopying> {
    NTPBRecordBase * _base;
    bool  _canAccessDrafts;
    NSString * _channelID;
    NSString * _draftArticleListID;
    NSString * _draftIssueListID;
    struct { 
        unsigned int canAccessDrafts : 1; 
    }  _has;
}

@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic) bool canAccessDrafts;
@property (nonatomic, retain) NSString *channelID;
@property (nonatomic, retain) NSString *draftArticleListID;
@property (nonatomic, retain) NSString *draftIssueListID;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic) bool hasCanAccessDrafts;
@property (nonatomic, readonly) bool hasChannelID;
@property (nonatomic, readonly) bool hasDraftArticleListID;
@property (nonatomic, readonly) bool hasDraftIssueListID;

- (id)base;
- (bool)canAccessDrafts;
- (id)channelID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)draftArticleListID;
- (id)draftIssueListID;
- (bool)hasBase;
- (bool)hasCanAccessDrafts;
- (bool)hasChannelID;
- (bool)hasDraftArticleListID;
- (bool)hasDraftIssueListID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setCanAccessDrafts:(bool)arg1;
- (void)setChannelID:(id)arg1;
- (void)setDraftArticleListID:(id)arg1;
- (void)setDraftIssueListID:(id)arg1;
- (void)setHasCanAccessDrafts:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
