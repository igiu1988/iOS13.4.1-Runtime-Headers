/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _abExperimentAssignments;
    struct { 
        unsigned int read_abExperimentAssignments : 1; 
        unsigned int read_tilesAbExperimentAssignment : 1; 
        unsigned int read_timeToLeaveHypothesisFeedbackCollections : 1; 
        unsigned int read_timeToLeaveInitialTravelTimeFeedbackCollections : 1; 
        unsigned int wrote_abExperimentAssignments : 1; 
        unsigned int wrote_tilesAbExperimentAssignment : 1; 
        unsigned int wrote_timeToLeaveHypothesisFeedbackCollections : 1; 
        unsigned int wrote_timeToLeaveInitialTravelTimeFeedbackCollections : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOABExperimentAssignment * _tilesAbExperimentAssignment;
    NSMutableArray * _timeToLeaveHypothesisFeedbackCollections;
    NSMutableArray * _timeToLeaveInitialTravelTimeFeedbackCollections;
}

@property (nonatomic, retain) NSMutableArray *abExperimentAssignments;
@property (nonatomic, readonly) bool hasTilesAbExperimentAssignment;
@property (nonatomic, retain) GEOABExperimentAssignment *tilesAbExperimentAssignment;
@property (nonatomic, retain) NSMutableArray *timeToLeaveHypothesisFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *timeToLeaveInitialTravelTimeFeedbackCollections;

+ (Class)abExperimentAssignmentType;
+ (bool)isValid:(id)arg1;
+ (Class)timeToLeaveHypothesisFeedbackCollectionType;
+ (Class)timeToLeaveInitialTravelTimeFeedbackCollectionType;

- (void).cxx_destruct;
- (void)_addNoFlagsAbExperimentAssignment:(id)arg1;
- (void)_addNoFlagsTimeToLeaveHypothesisFeedbackCollection:(id)arg1;
- (void)_addNoFlagsTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1;
- (void)_readAbExperimentAssignments;
- (void)_readTilesAbExperimentAssignment;
- (void)_readTimeToLeaveHypothesisFeedbackCollections;
- (void)_readTimeToLeaveInitialTravelTimeFeedbackCollections;
- (id)abExperimentAssignmentAtIndex:(unsigned long long)arg1;
- (id)abExperimentAssignments;
- (unsigned long long)abExperimentAssignmentsCount;
- (void)addAbExperimentAssignment:(id)arg1;
- (void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1;
- (void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1;
- (void)clearAbExperimentAssignments;
- (void)clearTimeToLeaveHypothesisFeedbackCollections;
- (void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTilesAbExperimentAssignment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAbExperimentAssignments:(id)arg1;
- (void)setTilesAbExperimentAssignment:(id)arg1;
- (void)setTimeToLeaveHypothesisFeedbackCollections:(id)arg1;
- (void)setTimeToLeaveInitialTravelTimeFeedbackCollections:(id)arg1;
- (id)tilesAbExperimentAssignment;
- (id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)timeToLeaveHypothesisFeedbackCollections;
- (unsigned long long)timeToLeaveHypothesisFeedbackCollectionsCount;
- (id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)timeToLeaveInitialTravelTimeFeedbackCollections;
- (unsigned long long)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
- (void)writeTo:(id)arg1;

@end
