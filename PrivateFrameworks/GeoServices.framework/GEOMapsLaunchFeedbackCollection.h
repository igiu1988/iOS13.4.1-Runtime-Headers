/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned int has_sessionId : 1; 
        unsigned int read_sourceAppBundleId : 1; 
        unsigned int read_uriScheme : 1; 
        unsigned int wrote_sessionId : 1; 
        unsigned int wrote_sourceAppBundleId : 1; 
        unsigned int wrote_uriScheme : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionId;
    NSString * _sourceAppBundleId;
    NSString * _uriScheme;
}

@property (nonatomic) bool hasSessionId;
@property (nonatomic, readonly) bool hasSourceAppBundleId;
@property (nonatomic, readonly) bool hasUriScheme;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionId;
@property (nonatomic, retain) NSString *sourceAppBundleId;
@property (nonatomic, retain) NSString *uriScheme;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readSourceAppBundleId;
- (void)_readUriScheme;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionId;
- (bool)hasSourceAppBundleId;
- (bool)hasUriScheme;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setHasSessionId:(bool)arg1;
- (void)setSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSourceAppBundleId:(id)arg1;
- (void)setUriScheme:(id)arg1;
- (id)sourceAppBundleId;
- (id)uriScheme;
- (void)writeTo:(id)arg1;

@end
