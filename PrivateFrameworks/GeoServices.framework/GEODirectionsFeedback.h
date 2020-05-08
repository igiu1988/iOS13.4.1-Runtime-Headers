/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsFeedback : PBCodable <NSCopying> {
    NSMutableArray * _alightNotificationFeedbacks;
    NSData * _directionResponseID;
    struct { 
        unsigned int read_alightNotificationFeedbacks : 1; 
        unsigned int read_directionResponseID : 1; 
        unsigned int read_guidanceFeedbacks : 1; 
        unsigned int read_modalitys : 1; 
        unsigned int read_stepFeedbacks : 1; 
        unsigned int read_trafficRerouteFeedbacks : 1; 
        unsigned int wrote_alightNotificationFeedbacks : 1; 
        unsigned int wrote_directionResponseID : 1; 
        unsigned int wrote_guidanceFeedbacks : 1; 
        unsigned int wrote_modalitys : 1; 
        unsigned int wrote_stepFeedbacks : 1; 
        unsigned int wrote_trafficRerouteFeedbacks : 1; 
    }  _flags;
    NSMutableArray * _guidanceFeedbacks;
    NSMutableArray * _modalitys;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _stepFeedbacks;
    NSMutableArray * _trafficRerouteFeedbacks;
}

@property (nonatomic, retain) NSMutableArray *alightNotificationFeedbacks;
@property (nonatomic, retain) NSData *directionResponseID;
@property (nonatomic, retain) NSMutableArray *guidanceFeedbacks;
@property (nonatomic, readonly) bool hasDirectionResponseID;
@property (nonatomic, retain) NSMutableArray *modalitys;
@property (nonatomic, retain) NSMutableArray *stepFeedbacks;
@property (nonatomic, retain) NSMutableArray *trafficRerouteFeedbacks;

+ (Class)alightNotificationFeedbackType;
+ (Class)guidanceFeedbackType;
+ (bool)isValid:(id)arg1;
+ (Class)modalityType;
+ (Class)stepFeedbackType;
+ (Class)trafficRerouteFeedbackType;

- (void).cxx_destruct;
- (void)_addNoFlagsAlightNotificationFeedback:(id)arg1;
- (void)_addNoFlagsGuidanceFeedback:(id)arg1;
- (void)_addNoFlagsModality:(id)arg1;
- (void)_addNoFlagsStepFeedback:(id)arg1;
- (void)_addNoFlagsTrafficRerouteFeedback:(id)arg1;
- (void)_readAlightNotificationFeedbacks;
- (void)_readDirectionResponseID;
- (void)_readGuidanceFeedbacks;
- (void)_readModalitys;
- (void)_readStepFeedbacks;
- (void)_readTrafficRerouteFeedbacks;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)addGuidanceFeedback:(id)arg1;
- (void)addModality:(id)arg1;
- (void)addStepFeedback:(id)arg1;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (id)alightNotificationFeedbackAtIndex:(unsigned long long)arg1;
- (id)alightNotificationFeedbacks;
- (unsigned long long)alightNotificationFeedbacksCount;
- (void)clearAlightNotificationFeedbacks;
- (void)clearGuidanceFeedbacks;
- (void)clearModalitys;
- (void)clearStepFeedbacks;
- (void)clearTrafficRerouteFeedbacks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionResponseID;
- (id)guidanceFeedbackAtIndex:(unsigned long long)arg1;
- (id)guidanceFeedbacks;
- (unsigned long long)guidanceFeedbacksCount;
- (bool)hasDirectionResponseID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modalityAtIndex:(unsigned long long)arg1;
- (id)modalitys;
- (unsigned long long)modalitysCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlightNotificationFeedbacks:(id)arg1;
- (void)setDirectionResponseID:(id)arg1;
- (void)setGuidanceFeedbacks:(id)arg1;
- (void)setModalitys:(id)arg1;
- (void)setStepFeedbacks:(id)arg1;
- (void)setTrafficRerouteFeedbacks:(id)arg1;
- (id)stepFeedbackAtIndex:(unsigned long long)arg1;
- (id)stepFeedbacks;
- (unsigned long long)stepFeedbacksCount;
- (id)trafficRerouteFeedbackAtIndex:(unsigned long long)arg1;
- (id)trafficRerouteFeedbacks;
- (unsigned long long)trafficRerouteFeedbacksCount;
- (void)writeTo:(id)arg1;

@end