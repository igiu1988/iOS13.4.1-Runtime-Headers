/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface AWDProactiveAppPredictionActionTimeEstimateContainer : PBCodable <NSCopying> {
    NSString * _actionKey;
    int  _actionType;
    struct { 
        unsigned int actionType : 1; 
        unsigned int noMatchCount : 1; 
    }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _launchReasons;
    int  _noMatchCount;
    NSMutableArray * _parameters;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _sessionIndexs;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _sessionLengths;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _timeEstimates;
}

@property (nonatomic, retain) NSString *actionKey;
@property (nonatomic) int actionType;
@property (nonatomic) bool hasActionType;
@property (nonatomic) bool hasNoMatchCount;
@property (nonatomic, readonly) int*launchReasons;
@property (nonatomic, readonly) unsigned long long launchReasonsCount;
@property (nonatomic) int noMatchCount;
@property (nonatomic, retain) NSMutableArray *parameters;
@property (nonatomic, readonly) int*sessionIndexs;
@property (nonatomic, readonly) unsigned long long sessionIndexsCount;
@property (nonatomic, readonly) int*sessionLengths;
@property (nonatomic, readonly) unsigned long long sessionLengthsCount;
@property (nonatomic, readonly) int*timeEstimates;
@property (nonatomic, readonly) unsigned long long timeEstimatesCount;

+ (Class)parameterType;

- (void).cxx_destruct;
- (int)StringAsActionType:(id)arg1;
- (int)StringAsLaunchReasons:(id)arg1;
- (id)actionKey;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (void)addLaunchReason:(int)arg1;
- (void)addParameter:(id)arg1;
- (void)addSessionIndex:(int)arg1;
- (void)addSessionLength:(int)arg1;
- (void)addTimeEstimate:(int)arg1;
- (void)clearLaunchReasons;
- (void)clearParameters;
- (void)clearSessionIndexs;
- (void)clearSessionLengths;
- (void)clearTimeEstimates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionType;
- (bool)hasNoMatchCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)launchReasonAtIndex:(unsigned long long)arg1;
- (int*)launchReasons;
- (id)launchReasonsAsString:(int)arg1;
- (unsigned long long)launchReasonsCount;
- (void)mergeFrom:(id)arg1;
- (int)noMatchCount;
- (id)parameterAtIndex:(unsigned long long)arg1;
- (id)parameters;
- (unsigned long long)parametersCount;
- (bool)readFrom:(id)arg1;
- (int)sessionIndexAtIndex:(unsigned long long)arg1;
- (int*)sessionIndexs;
- (unsigned long long)sessionIndexsCount;
- (int)sessionLengthAtIndex:(unsigned long long)arg1;
- (int*)sessionLengths;
- (unsigned long long)sessionLengthsCount;
- (void)setActionKey:(id)arg1;
- (void)setActionType:(int)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasNoMatchCount:(bool)arg1;
- (void)setLaunchReasons:(int*)arg1 count:(unsigned long long)arg2;
- (void)setNoMatchCount:(int)arg1;
- (void)setParameters:(id)arg1;
- (void)setSessionIndexs:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSessionLengths:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTimeEstimates:(int*)arg1 count:(unsigned long long)arg2;
- (int)timeEstimateAtIndex:(unsigned long long)arg1;
- (int*)timeEstimates;
- (unsigned long long)timeEstimatesCount;
- (void)writeTo:(id)arg1;

@end
