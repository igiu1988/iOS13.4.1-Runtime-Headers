/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeedbackRequest : PBRequest <NSCopying> {
    GEOABSecondPartyPlaceRequestClientMetaData * _abClientMetadata;
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEORPClientCapabilities * _clientCapabilities;
    GEOPDClientMetadata * _clientMetadata;
    GEORPDebugSettings * _debugSettings;
    NSMutableArray * _displayLanguages;
    GEORPFeedbackRequestParameters * _feedbackRequestParameters;
    int  _feedbackRequestType;
    struct { 
        unsigned int has_feedbackRequestType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_abClientMetadata : 1; 
        unsigned int read_analyticMetadata : 1; 
        unsigned int read_clientCapabilities : 1; 
        unsigned int read_clientMetadata : 1; 
        unsigned int read_debugSettings : 1; 
        unsigned int read_displayLanguages : 1; 
        unsigned int read_feedbackRequestParameters : 1; 
        unsigned int read_userInfo : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_abClientMetadata : 1; 
        unsigned int wrote_analyticMetadata : 1; 
        unsigned int wrote_clientCapabilities : 1; 
        unsigned int wrote_clientMetadata : 1; 
        unsigned int wrote_debugSettings : 1; 
        unsigned int wrote_displayLanguages : 1; 
        unsigned int wrote_feedbackRequestParameters : 1; 
        unsigned int wrote_userInfo : 1; 
        unsigned int wrote_feedbackRequestType : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    GEORPFeedbackUserInfo * _userInfo;
}

@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property (nonatomic, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, retain) GEORPClientCapabilities *clientCapabilities;
@property (nonatomic, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, retain) GEORPDebugSettings *debugSettings;
@property (nonatomic, retain) NSMutableArray *displayLanguages;
@property (nonatomic, retain) GEORPFeedbackRequestParameters *feedbackRequestParameters;
@property (nonatomic) int feedbackRequestType;
@property (nonatomic, readonly) bool hasAbClientMetadata;
@property (nonatomic, readonly) bool hasAnalyticMetadata;
@property (nonatomic, readonly) bool hasClientCapabilities;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (nonatomic, readonly) bool hasDebugSettings;
@property (nonatomic, readonly) bool hasFeedbackRequestParameters;
@property (nonatomic) bool hasFeedbackRequestType;
@property (nonatomic, readonly) bool hasUserInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEORPFeedbackUserInfo *userInfo;

+ (Class)displayLanguageType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFeedbackRequestType:(id)arg1;
- (void)_addNoFlagsDisplayLanguage:(id)arg1;
- (void)_initForSubmissionParameters;
- (void)_readAbClientMetadata;
- (void)_readAnalyticMetadata;
- (void)_readClientCapabilities;
- (void)_readClientMetadata;
- (void)_readDebugSettings;
- (void)_readDisplayLanguages;
- (void)_readFeedbackRequestParameters;
- (void)_readUserInfo;
- (id)abClientMetadata;
- (void)addDisplayLanguage:(id)arg1;
- (id)analyticMetadata;
- (void)clearDisplayLanguages;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientCapabilities;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugSettings;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (id)displayLanguages;
- (unsigned long long)displayLanguagesCount;
- (id)feedbackRequestParameters;
- (int)feedbackRequestType;
- (id)feedbackRequestTypeAsString:(int)arg1;
- (bool)hasAbClientMetadata;
- (bool)hasAnalyticMetadata;
- (bool)hasClientCapabilities;
- (bool)hasClientMetadata;
- (bool)hasDebugSettings;
- (bool)hasFeedbackRequestParameters;
- (bool)hasFeedbackRequestType;
- (bool)hasUserInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithFeedbackRequestParameters:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAbClientMetadata:(id)arg1;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setDebugSettings:(id)arg1;
- (void)setDisplayLanguages:(id)arg1;
- (void)setFeedbackRequestParameters:(id)arg1;
- (void)setFeedbackRequestType:(int)arg1;
- (void)setHasFeedbackRequestType:(bool)arg1;
- (void)setPreferredEmailAddress:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)unknownFields;
- (id)userInfo;
- (void)writeTo:(id)arg1;

@end