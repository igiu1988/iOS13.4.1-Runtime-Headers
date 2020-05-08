/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemRequest : PBRequest <NSCopying> {
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEORPClientCapabilities * _clientCapabilities;
    GEOPDClientMetadata * _clientMetadata;
    int  _debugUserType;
    NSData * _devicePushToken;
    struct { 
        unsigned int has_debugUserType : 1; 
        unsigned int read_analyticMetadata : 1; 
        unsigned int read_clientCapabilities : 1; 
        unsigned int read_clientMetadata : 1; 
        unsigned int read_devicePushToken : 1; 
        unsigned int read_inputLanguage : 1; 
        unsigned int read_problemUuid : 1; 
        unsigned int read_problem : 1; 
        unsigned int read_userCredentials : 1; 
        unsigned int read_userEmail : 1; 
        unsigned int wrote_analyticMetadata : 1; 
        unsigned int wrote_clientCapabilities : 1; 
        unsigned int wrote_clientMetadata : 1; 
        unsigned int wrote_devicePushToken : 1; 
        unsigned int wrote_inputLanguage : 1; 
        unsigned int wrote_problemUuid : 1; 
        unsigned int wrote_problem : 1; 
        unsigned int wrote_userCredentials : 1; 
        unsigned int wrote_userEmail : 1; 
        unsigned int wrote_debugUserType : 1; 
    }  _flags;
    NSString * _inputLanguage;
    GEORPProblem * _problem;
    NSString * _problemUuid;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPUserCredentials * _userCredentials;
    NSString * _userEmail;
}

@property (nonatomic, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, retain) GEORPClientCapabilities *clientCapabilities;
@property (nonatomic, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic) int debugUserType;
@property (nonatomic, retain) NSData *devicePushToken;
@property (nonatomic, readonly) bool hasAnalyticMetadata;
@property (nonatomic, readonly) bool hasClientCapabilities;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (nonatomic) bool hasDebugUserType;
@property (nonatomic, readonly) bool hasDevicePushToken;
@property (nonatomic, readonly) bool hasInputLanguage;
@property (nonatomic, readonly) bool hasProblem;
@property (nonatomic, readonly) bool hasProblemUuid;
@property (nonatomic, readonly) bool hasUserCredentials;
@property (nonatomic, readonly) bool hasUserEmail;
@property (nonatomic, retain) NSString *inputLanguage;
@property (nonatomic, retain) GEORPProblem *problem;
@property (nonatomic, retain) NSString *problemUuid;
@property (nonatomic, retain) GEORPUserCredentials *userCredentials;
@property (nonatomic, retain) NSString *userEmail;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsDebugUserType:(id)arg1;
- (void)_readAnalyticMetadata;
- (void)_readClientCapabilities;
- (void)_readClientMetadata;
- (void)_readDevicePushToken;
- (void)_readInputLanguage;
- (void)_readProblem;
- (void)_readProblemUuid;
- (void)_readUserCredentials;
- (void)_readUserEmail;
- (id)analyticMetadata;
- (id)clientCapabilities;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)debugUserType;
- (id)debugUserTypeAsString:(int)arg1;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (bool)hasAnalyticMetadata;
- (bool)hasClientCapabilities;
- (bool)hasClientMetadata;
- (bool)hasDebugUserType;
- (bool)hasDevicePushToken;
- (bool)hasInputLanguage;
- (bool)hasProblem;
- (bool)hasProblemUuid;
- (bool)hasUserCredentials;
- (bool)hasUserEmail;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithProblem:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5;
- (id)inputLanguage;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problem;
- (id)problemUuid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setDebugUserType:(int)arg1;
- (void)setDevicePushToken:(id)arg1;
- (void)setHasDebugUserType:(bool)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setProblem:(id)arg1;
- (void)setProblemUuid:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (id)userCredentials;
- (id)userEmail;
- (void)writeTo:(id)arg1;

@end
