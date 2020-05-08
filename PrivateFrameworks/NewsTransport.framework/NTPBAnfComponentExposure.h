/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBAnfComponentExposure : PBCodable <NSCopying> {
    NSString * _anfComponentId;
    NSString * _anfComponentRole;
    NSString * _anfComponentType;
    NSString * _articleId;
    NSString * _articleVersion;
    NSData * _articleViewingSessionId;
    long long  _backendArticleVersionInt64;
    NSMutableArray * _fractionalCohortMemberships;
    struct { 
        unsigned int backendArticleVersionInt64 : 1; 
        unsigned int publisherArticleVersionInt64 : 1; 
    }  _has;
    NTPBIssueData * _issueData;
    NTPBIssueExposureData * _issueExposureData;
    NTPBIssueViewData * _issueViewData;
    NSString * _metadata;
    long long  _publisherArticleVersionInt64;
    NSString * _sourceChannelId;
}

@property (nonatomic, retain) NSString *anfComponentId;
@property (nonatomic, retain) NSString *anfComponentRole;
@property (nonatomic, retain) NSString *anfComponentType;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSString *articleVersion;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic) long long backendArticleVersionInt64;
@property (nonatomic, retain) NSMutableArray *fractionalCohortMemberships;
@property (nonatomic, readonly) bool hasAnfComponentId;
@property (nonatomic, readonly) bool hasAnfComponentRole;
@property (nonatomic, readonly) bool hasAnfComponentType;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleVersion;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic) bool hasBackendArticleVersionInt64;
@property (nonatomic, readonly) bool hasIssueData;
@property (nonatomic, readonly) bool hasIssueExposureData;
@property (nonatomic, readonly) bool hasIssueViewData;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic) bool hasPublisherArticleVersionInt64;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, retain) NTPBIssueData *issueData;
@property (nonatomic, retain) NTPBIssueExposureData *issueExposureData;
@property (nonatomic, retain) NTPBIssueViewData *issueViewData;
@property (nonatomic, retain) NSString *metadata;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic, retain) NSString *sourceChannelId;

+ (Class)fractionalCohortMembershipType;

- (void).cxx_destruct;
- (void)addFractionalCohortMembership:(id)arg1;
- (id)anfComponentId;
- (id)anfComponentRole;
- (id)anfComponentType;
- (id)articleId;
- (id)articleVersion;
- (id)articleViewingSessionId;
- (long long)backendArticleVersionInt64;
- (void)clearFractionalCohortMemberships;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (id)fractionalCohortMemberships;
- (unsigned long long)fractionalCohortMembershipsCount;
- (bool)hasAnfComponentId;
- (bool)hasAnfComponentRole;
- (bool)hasAnfComponentType;
- (bool)hasArticleId;
- (bool)hasArticleVersion;
- (bool)hasArticleViewingSessionId;
- (bool)hasBackendArticleVersionInt64;
- (bool)hasIssueData;
- (bool)hasIssueExposureData;
- (bool)hasIssueViewData;
- (bool)hasMetadata;
- (bool)hasPublisherArticleVersionInt64;
- (bool)hasSourceChannelId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issueData;
- (id)issueExposureData;
- (id)issueViewData;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (long long)publisherArticleVersionInt64;
- (bool)readFrom:(id)arg1;
- (void)setAnfComponentId:(id)arg1;
- (void)setAnfComponentRole:(id)arg1;
- (void)setAnfComponentType:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleVersion:(id)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setBackendArticleVersionInt64:(long long)arg1;
- (void)setFractionalCohortMemberships:(id)arg1;
- (void)setHasBackendArticleVersionInt64:(bool)arg1;
- (void)setHasPublisherArticleVersionInt64:(bool)arg1;
- (void)setIssueData:(id)arg1;
- (void)setIssueExposureData:(id)arg1;
- (void)setIssueViewData:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPublisherArticleVersionInt64:(long long)arg1;
- (void)setSourceChannelId:(id)arg1;
- (id)sourceChannelId;
- (void)writeTo:(id)arg1;

@end